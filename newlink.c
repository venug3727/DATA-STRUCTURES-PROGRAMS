#include <stdio.h>
#include<stdlib.h>
struct node
    {
        int data;
        struct node *next;

    };
    struct node *head=NULL;
    struct node *create();
    struct node *display();
    struct node *insert_beg();
    struct node *insert_end();
    struct node *insert_ran();
    struct node *delet_beg();
    struct node *delet_end();
    struct node *delet_ran();


struct node *create()
{
    
    int n;
    struct node *newnode,*temp;
    printf("How many data u want to cerat:-");
    scanf("%d",&n);
    
    for (int i=0;i<n;i++)
    {
    
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newnode->data);
    newnode->next=0;

    if (head==NULL)
    {
        temp=head=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    
    }
    


    
    }   
}

struct node *insert_beg()
{
    struct node *temp,*newnode;
    newnode=(struct node*) malloc(sizeof(struct node));

    printf("enter data to insert");
    scanf("%d",&newnode->data);
    temp=head;
    head=newnode;
    newnode->next=temp;
    printf("%d is inserted value",newnode->data);


}

struct node *insert_end()
{
    struct node *temp,*newnode;
    temp=head;
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("enter value to be inserted");
    scanf("%d",&newnode->data);

    if (head==NULL)
    {
        head=newnode;
    }

    else
    {
        while (temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next = NULL;
        printf("%d is the end value",newnode->data);
        
    }
    
    
}

struct node *insert_ran()
{
    struct node *temp,*newnode;
    temp=head;
    int pos , i=1;
    printf("enter the position:- ");
    scanf("%d",&pos);
    newnode=(struct node * )malloc(sizeof (struct node));
    printf("enter data:- ");
    scanf("%d",&newnode->data);
    while (i<pos)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

struct node *display()
{
    struct node *temp;
    temp=head;
    if (temp==NULL)
    {
        printf("there is no value in list");
    }
    
    else{
        while (temp!=0)
    {
        printf("\t%d\n",temp->data);
        temp=temp->next;
    }

    }
 
}

struct node *delet_beg()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("the list is empty");
    }
    else
    {
    temp = head;
    head = temp->next;
    printf("The deleted element is: %d",temp->data);
    free(temp);
    }
}

struct node *delet_end()
{
    struct node *temp,*pre;
    if (head == NULL)
    {
        printf("the list is empty");
    }

    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            pre=temp;
            temp = temp->next;
        }

        pre->next = NULL;
        printf("The deleted elemant is:%d",temp->data);
        free(temp);
        
    }
}

struct node *delet_ran()
{
    struct node *temp,*nextnode;
    int pos,i=1;
    printf("enter position u wantt to delet");
    scanf("%d",&pos);
    if (head == NULL)
    {
        printf("the list is empty");
    }
    else
    {
        temp= head;
        while (i<pos-1)
        {
            temp = temp->next;
            i++;
        }

        nextnode = temp->next;
        temp = nextnode->next;
        printf("deleted elment is:%d",nextnode->data);
        free(nextnode);
        
    }
   
}







int main()
{
    int option;
    while (1)
    {
        printf("<<<<<<<<<<<<<<<##################MENU##################>>>>>>>>>>>>>>\n");
        printf("\n1.create nodes.\n2.display.\n3.insert at beging\n4.insert at end.\n5.insert at random position \n6.Delete at beginig.\n7.Delete at End.\n8.Delete at Random pos\n9.Exit.");
        printf("\nEnter your option.");
        scanf("%d",&option);
        switch (option)
        {
        case 1:create(head);
            printf("\nLIST CREATED");
            break;

        case 2:display(head);
            break;

        case 3:insert_beg(head);
            break;

        case 4:insert_end(head);
            break;

        case 5: insert_ran(head);
            break;

        case 6: delet_beg(head);
            break;
        case 7:delet_end(head);
            break;

        case 8:delet_ran(head);
            break;

        case 9:exit(0);
        
        default:printf("wrong value");
            break;
        }


        
    }
    
}