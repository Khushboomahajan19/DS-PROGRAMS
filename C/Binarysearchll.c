// The binary serach can be implemented by linklist that is same as linear search in terms of time complexity that is order of n.
//  In array we can find middle element in constant time because we hav eindex value associated with array but in linklist we have to find middle element in order of n time with the help of two pointer approach that is why the time complexity is order of n.
#include "linklist.h"
Node*Middle(Node*start,Node*last){
    Node*slow=start;
    Node*fast=start->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}
Node*binarysearch(Node*start,int sval){
    Node*last=NULL;
    do{
        Node*mid=Middle(start,last);
        if(mid==NULL)
        return NULL;
        if(mid->val=sval)
        return mid;
        if(mid->val<sval){
            start=mid->next;
        }
        else{
            last=mid;
        }
    }
    while(last!=NULL||start!=last);
    return NULL;
}