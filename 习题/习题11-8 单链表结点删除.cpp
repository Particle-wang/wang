#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem( struct ListNode *L, int m );
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
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}
struct ListNode *readlist()//��һ�֣��Դ�ö�Σ�Ӧ��ûfree�ɾ� 
{
	int number;
	struct ListNode *current,*prev;
	struct ListNode *head=NULL;
	
	while(scanf("%d",&number)==1&&number!=-1)
	{
		current=(struct ListNode*)malloc(sizeof(struct ListNode));
		if(current)
		{
			current->data =number;
			current->next=NULL;
		}
		if(!head)
		{
			head=current;
		}
		else
		{
			prev->next=current;
		}
		prev=current;
	}	
	
	return head;
 } 
 //��һ�֣��Դ�ö�Σ�Ӧ��ûfree�ɾ�
//struct ListNode *deletem( struct ListNode *L, int m )
//{	
//	struct ListNode *p,*q;
//	struct ListNode *head;
//	head=L;
//	for(q=NULL,p=L;p;q=p,p=p->next)
//	{
//		if(p->data==m)
//			if(head->data!=m&&q)
//			{
//				q->next=p->next;
//				free(p);
//				p=q;
//			}
//			else  //1.��֪��Ϊʲô��һ��������mʱ���в����� 
//			{
//				head=p->next;
//			}
//	}
//	if(head)
//	{
//		if(head->data==m)
//			head==NULL;
//	}
//	return head;
//}
//�ڶ��� 
struct ListNode *deletem( struct ListNode *L, int m )
{
	struct ListNode *p,*q;
	struct ListNode *head;
	head=p=L;
	while(head->data==m&&head->next!=NULL)
	{
		p=head->next;
		free(head);
		head=p;
	}
	if(head)
		if(head->data==m)
			return NULL;
	q=p;
	p=p->next;
	while(p)
	{
		if(p->data==m)
		{
			q->next=p->next;
			free(p);
			p=q;
		}
		q=p;
		p=p->next;
	}
	return head;
 } 
