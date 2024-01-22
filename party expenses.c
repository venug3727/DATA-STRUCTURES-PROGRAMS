#include<stdio.h>


struct item_details
 {
    char item_name[10];
    float quantity ;
    float price ;
    float total_amount;
}item1,item2,item3;

int main()
{
    item1.item_name ="pen";
    item1.quantity = 20;
    item1.price =5;
    item1.total_amount = item1.quantity * item1.price;

    item2.item_name ="pencil";
    item2.quantity = 10;
    item2.price =4;
    item2.total_amount = item2.quantity * item2.price;

    item3.item_name ="red pen";
    item3.quantity = 5;
    item3.price =7;
    item3.total_amount = item3.quantity * item3.price;
        

    printf("item1 details: \n" );
    printf("Item Name: %c \n Quantity: %f \n Price: %f \n Total: %f \n",item1.item_name,item1.quantity,item1.price,item1.total_amount);

    printf("item2 details: \n" );
    printf("Item Name: %c \n Quantity: %f \n Price: %f \n Total: %f \n",item2.item_name,item2.quantity,item2.price,item2.total_amount);
    
    printf("item1 details: \n" );
    printf("Item Name: %c \n Quantity: %f \n Price: %f \n Total: %f \n",item3.item_name,item3.quantity,item3.price,item3.total_amount);
    
    float total_expense = item1.total_amount + item2.total_amount + item3.total_amount;

    printf("The total Expence of the party is: %.2f \n",total_expense );

    printf ("Thanks for using me .......");
    return 0;
}