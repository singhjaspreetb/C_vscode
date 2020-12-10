#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    int x;
    struct node* next;
}node;
node* root=NULL;
int insert();
int display();
int bubble_short();
int main()
{
    int choice;
    while(1)
    {
        printf("\nEnte your choice:\n1.Insert\t2.Display\t3.Bubble short\t4.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();break;
            case 2:display();break;
            case 3:bubble_short();break;
            default: exit(0);
        }
    }
}
int insert()
{
    node* temp,*ptr;
    temp=(node*)malloc(sizeof(node));
    printf("\nEnter data:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        ptr=root;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
int display()
{
    node* ptr;
    if(root==NULL)
    {
        printf("\nEmpty list\n");
    }
    else
    {
        printf("\nList is:\t");
        ptr=root;
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
    }
    
}
int bubble_short()
{
    int count=0;
    if (root==NULL)
    {
        printf("\nNothing to short\n");
    }
    else
    {
        node* ptr=root,*ptr2,*end;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
            end=ptr;
        }
        // printf("\nend=%d\n",end->data);
        ptr=root;
        while(ptr->next!=NULL)
        {
            count=0;
            ptr2=root;
            printf("\nend=%d\n",end->data);
            while(ptr2!=end)
            {
                if(ptr2->data>(ptr2->next)->data)
                {
                    ptr2->data+=(ptr2->next)->data;
                    (ptr2->next)->data=ptr2->data-(ptr2->next)->data;
                    ptr2->data=ptr2->data-(ptr2->next)->data;
                    count++;
                }
                ptr2=ptr2->next;
            }
            if(count==0)
            {
                break;
            }
            end=ptr2-2;
            ptr=ptr->next;
        }
        printf("\nShorted sucessfully\n");
    }
    
    
}