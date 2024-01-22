#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void push();
void pop();
void display();
int stack[SIZE],top=-1;

void push(){
    if (top==SIZE-1)
    {
        printf("over flow");
    }

    else
    {
        top=top+1;
        stack[top]=SIZE;
        printf("success");

    }
}
void pop(){
    if (top==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("%d",stack[top]);
        top=top-1;
    }
        

    }

void display(){
    int i;
    if (top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        for ( i = top; i > 0; i--)
        {
            printf("%d",stack[i]);
         }
            
        }
        
    }
    
int main()
{
    int value,choise;

    printf("\n 1.push \n 2.pop\n 3.display \n 4.exit");

    scanf("%d",&choise);
    while (1)
    {
        printf("\n 1.push \n 2.pop\n 3.display \n 4.exit");

         scanf("%d",&choise);
   
    
        switch (choise)
        {
        case 1 : printf("enter value");
                scanf("%d",value);
                push(value); 
            break;

        case 2: pop();
            break;
        case 3: display();
            break;

        case 4:exit(0);
            break;
        
        default:printf("wrong value");
            break;
            }
    }

}


