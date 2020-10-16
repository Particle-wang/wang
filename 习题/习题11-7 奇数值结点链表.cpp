#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

struct ListNode *readlist()
{
	int x=0;
	struct ListNode *head=NULL;
	struct ListNode *prev;
	struct ListNode *current;
	while(scanf("%d",&x)==1&&x!=-1)
	{
		current=(struct ListNode*)malloc(sizeof(struct ListNode));
		if(current)
		{
			current->data=x;
			current->next=NULL;
		}
		else exit(1);
		if(head==NULL)
			head=current;
		else
			prev->next=current;	
		prev=current;
	}
	
	return head;
 } 
struct ListNode *getodd( struct ListNode **L )
{
	int data;
	struct ListNode *p,*q,*temp;
	struct ListNode *head=NULL, *pnew,*prev;
	struct ListNode *pl;
	temp=p=*L;
	
	for(q=NULL;p;q=p,p=p->next)
	{
		data=p->data;
		if(data%2!=0)
		{
			pnew=(struct ListNode*)malloc(sizeof(struct ListNode));
			if(pnew)
			{
				pnew->data=data;
				pnew->next=NULL; 
			}
			else exit(1); 
			if(head==NULL)
				head=pnew;
			else
				prev->next=pnew;
				
			prev=pnew;
	
			if(q)
			{
				q->next=p->next;
				free(p);
				p=q;
			}
			else
				temp=p->next;			
		}
	}
	if(temp)
	{
		data=temp->data;	
		if(data%2!=0)
		{
			temp=NULL;	 
		}
	}
	*L=temp;
	return head;
}
 
