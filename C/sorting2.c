// Implementation using merge sort
#include "linklist.h"
void splitlist(Node*start,Node**list1,Node**list2){
    Node*fast;
    Node*slow;
    fast=start->next;
    slow=slow->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    *list1=start;
    *list2=slow->next;  
    slow->next=NULL;
}
Node*MergeSortedlist(Node*list1,Node*list2){
    Node*result;
    if(list1==NULL){
        return list2;
    }
    if(list2==NULL){
        return list1;
    }
    if(list1->val<=list2->val){
        result=list1;
        result->next=MergeSortedlist(list1->next,list2);
    }
    else{
        result=list2;
        result->next=MergeSortedlist(list1,list2->next);
    }
}
void MergeSort(Node**start){
        if((*start)==NULL||(*start)->next==NULL)
        return;
    Node*list1;
    Node*list2;
    Splitlist(start,&list1,&list2);
    MergeSort(&list1);
    MergeSort(&list2);
    *start=MergeSortedlist(list1,list2);
}
