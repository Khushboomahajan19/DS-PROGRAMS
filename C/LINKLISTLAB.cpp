#include<stdio.h>
#include<malloc.h>

struct list{
    int val;
    struct list *next;
};
struct list *start;
int flag=0;

void insert_beg(){
    struct list *newNode = (struct list *)malloc(sizeof(struct list));
    printf("Enter value: ");
    scanf("%d",&newNode->val);
    newNode->next = NULL;
    if(start!=NULL){
        newNode->next = start;
    }
    start = newNode;
    printf("Node inserted at begining");

}

void insert_last(){
    struct list *newNode = (struct list *)malloc(sizeof(struct list));
    printf("Enter value: ");
    scanf("%d",&newNode->val);
    newNode->next = NULL;
    if(start==NULL){
        start = newNode;
    }
    else{
        struct list *temp = start;
        while(temp->next !=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }  
}
void insert_pos(){
	int pos;
	printf("Enter the position\n");
		scanf("%d",&pos);
	if(start==NULL||pos==1){
		insert_beg();
		return;
	}
	else{
		int count=1;
		struct list*node=start;
		while(node->next!=NULL){
			if(count==pos-1){
			struct list *newnode = (struct list *)malloc(sizeof(struct list));
			printf("Enter value\n");
			scanf("%d",&newnode->val);
			flag=1;
			newnode->next=node->next;
			node->next=newnode;
			printf("Node inserted at %d",pos);	
			}
			node=node->next;
			count++;
		}
		if(!flag){
			insert_last();
			printf("Invalid position.Node inserted at last\n");
		}
	}
}
void insert_before(){
	int val,flag=0;
	printf("Enter value\n");
	scanf("%d",&val);
	struct list*node=start;
	if(start->val=val){
		flag=1;
		insert_beg();
	}
	else{
		struct list*newnode=(struct list*)malloc(sizeof(struct list));
		printf("Enter the value\n");
		scanf("%d",&newnode->val);
		struct list*prev=start;
		node=node->next;
		while(node!=NULL){
			if(node->val==val){
				flag=1;
				newnode->next=node;
				prev->next=newnode;
			}
			node=node->next;
			prev=prev->next;
		}
	}
}
void Remove_beg(){
	int val;
	if(start==NULL){
		printf("Empty list");
		return;
	}
	val=start->val;
	start=start->next;
	printf("Deleted node with %d value",val);
}
void delete_last(){
    if(start==NULL){
        printf("Empty\n");
        return;
    }
    if(start->next==NULL){
        start=NULL;
        return;
    }
    struct list*temp=start->next;
   struct list* prev=start;
    while(temp->next!=NULL){
        temp=temp->next;
        prev=prev->next;
    }
    prev->next=NULL;
    printf("Node deleted from last\n");
}
void delete_nodeNo(){
    int pos;
    printf("Enter the position\n");
    scanf("%d",&pos);
    int flag=0;
    struct list*node;
    if(start==NULL){
        printf("Empty");
        return;
    }
    if(pos==1){
        node=start;
        start=start->next;
        flag=1;
    }
    else{
        int count=2;
        node=start->next;
        struct list*prev=start;
        while(node!=NULL){
            if(pos==count){
                flag=1;
                prev->next=node->next;
                break;
            }
            else{
                count++;
                node=node->next;
                prev=prev->next;
            }
        }
    }
    if(flag){
        printf("%d deleted\n",node->val);
        free(node);
    }
    else{
        printf("Invalid position\n");
    }
}
void show(){
    if(start==NULL){
        printf("List is Empty");
    }
    else{
        struct list *temp = start;
        printf("Elements of linked list are: \n");
        while(temp !=NULL){
            printf("%d | %p ->\n ",temp->val,temp->next);
            temp = temp->next;
        }
    }
}

int menu()
{
    int choice;
    printf("\n1...............insert at begining\n");
    printf("2...............insert at last\n");
     printf("3...............insert at position\n");
     printf("4...............insert before\n");
     printf("5...............delete from beginning\n");
     printf("6...............delete from last\n");
    printf("7...............delete from position\n");
    printf("8...............Show\n");
    printf("9...............Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

int main()
{
    int choice;
    start = NULL;
    
    do
    {
        choice = menu();
        switch (choice)
        {
        case 1:
            insert_beg();
            break;
         case 2:
            insert_last();
            break;   
        case 3:
            insert_pos();
            break;
        case 4:
            insert_before();
            break;
         case 5:
           Remove_beg();
           break;  
        case 6:
            delete_last();
           break;
        case 7:
            delete_nodeNo();
           break;
        case 8:
            show();
            break;
        case 9:
            printf("Thank you for using Linked list, see you later");
            break;
        default:
            printf("Please enter valid choice");
        }
    } while (choice != 8);
    return 0;
}  
// Deletion of last node using stack-:
// create an empty stack of node type,traverse linklist from start and push element to stack till tha last node having null value .
// put the null value to the top of stack node then pop all the element from stack
// NOTE: the stack is a static memory so that we have to create an empty stack for the fixed number of nodes 
// the time complexity will be 0(n) in both cases 
// Wastage of memory is the size of stack  
// FREE METHOD:-
//It releases allocated memory(by malloc/DMA)
// The released memory can be used by other methods
// By default,O/S freed all memory taken by any program after the termination of  program
// Write a func to reverse a linklist
// 1.Print in reverse order
// 2.Reverse the linklist
// With the help of stack we can print the linklist in reverse order 