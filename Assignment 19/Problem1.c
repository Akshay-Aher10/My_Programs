#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

int SearchFirstOcc(PNODE head, int no)
{
    int iCnt = 0;
    int iSum = 0;
    int iCount = 1;

    while(head != NULL)
    {
        for(iCnt = 1 ; iCnt<(head->data) ; iCnt++)
        {
            if((head->data)%iCnt == 0)
            {
                iSum = iSum+iCnt;
            }
        }

        if(iSum == no)
        {
            return iCount;
        }

        iCount++;
        
        head = head->next;
    }
}

int main()
{
    PNODE first = NULL;
    int ret = 0;
    int iNo =0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    InsertFirst(&first,70);
    InsertFirst(&first,60);
    InsertFirst(&first,28);
    InsertFirst(&first,40);
    InsertFirst(&first,6);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    ret = SearchFirstOcc(first,iNo);
    
    printf("First Occurence of Perfect Number : %d\n", ret);

	return 0;
}