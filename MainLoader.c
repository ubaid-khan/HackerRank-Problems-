#include <stdio.h>
#include <stdlib.h>
int num_of_customers,i;
struct Customer_Details{
    char customer_name[20],city[20],check_in[8],check_out[8],identity_proof[20],payment_method[20];
    int no_of_rooms,no_of_guests,room_no_alloted;
    float advance_paid,balance_amount,total_amount;
};
void acceptCustomerData(struct Customer_Details *c){

   // struct Customer_Details c;
    printf("\nEnter the customer's name :");
    scanf("%s",&c->customer_name);
    printf("\nEnter number of rooms requested by customer :");
    scanf("%d",&c->no_of_rooms);
    printf("\nEnter customer's check-in date :");
    scanf("%s",&c->check_in);
    printf("\nEnter customer's check-out date :");
    scanf("%s",&c->check_out);
    printf("\nEnter customer's identity proof (e.g:adhaar number/voter id etc) :");
    scanf("%s",&c->identity_proof);
    printf("\nTotal amount to be paid is :%2f",c->total_amount);
    printf("\nEnter amount being paid in advance :");
    scanf("%s",&c->advance_paid);
    printf("\nBalance amount to be paid is %2f",c->balance_amount);
    printf("\nPayment method(e.g:mastercard/visa/cash/android pay) :");
    scanf("%s",&c->payment_method);
    c->total_amount=(c->no_of_rooms*650);
    c->balance_amount=c->total_amount-c->advance_paid;


    printf("\nCustomer Name: ",c->customer_name);
    printf("\nCheck-in date: ",c->check_in);
    printf("\nCheck-out date: ",c->check_out);
    printf("\nNumber of rooms booked: ",c->no_of_rooms);
    printf("\nCustomer ID: ",c->identity_proof);
    printf("\n\tRoom successfully booked");
}
void displayCustomerData(struct Customer_Details *c){

//    struct Customer_Details c;
    printf("\nCustomer Name: ",c->customer_name);
    printf("\nCheck-in date: ",c->check_in);
    printf("\nCheck-out date: ",c->check_out);
    printf("\nNumber of rooms booked: ",c->no_of_rooms);
    printf("\nCustomer ID: ",c->identity_proof);

}
int main()
{
    struct Customer_Details c;
    acceptCustomerData(&c);
    //displayCustomerData(&c);
    return 0;
}
