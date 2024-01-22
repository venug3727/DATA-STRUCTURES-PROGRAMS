#include<stdio.h>
#include<stdlib.h>
#define MAX 7

int front=-1;
int rear=-1;
void enqueue();
void dequeue();

void display();
int q[MAX];

int main(){
    int choise;
    while (1)
    {
        printf("\n1.insert\n2.delet\n3.display\n4.exit");
        scanf("%d",&choise);
        switch (choise)
        {
        case 1:enqueue();
            break;

        case 2: dequeue();
        
        
                
                break;

      
                      
        case 3: display();
                break;

        case 4: exit(0);
                break;
        default:printf("wroneg input");
            break;
        }
    }
    
}

void enqueue()
{
    int element;
    printf("enter value to be inserted");
    scanf("%d",&element);
    if ((front==rear+1)||(front==0&&rear==MAX-1))
    {
        printf("the queue is full");
    }
    else{
        if (front==-1)
        {
            front=0;
        }
        else
        {
            rear=(rear+1)%MAX;
            q[rear]=element;
            printf("%d",element);

        }
        
    }        
}

void dequeue(){
    int value;
    if (front==-1)
    {
        printf("empty");
    }

    else
    {   value=q[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }

        else{
            front=(front+1)%MAX;


        }
    }
        
        
}


void display(){
    int i;
    if (front==-1)
    {
        printf("empty");
    }

    else
    {
        for(i=front;i!=(rear+1);i=(i+1)%MAX){
            
        }
        printf("%d",q[i]);
    }
    
}