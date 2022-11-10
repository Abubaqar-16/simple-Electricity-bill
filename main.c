//electricity bill
#include<stdio.h>
int main()
{
   
    float unit,days,price;
    printf("Enter the Number of Units consumed and Number of Days respectively.\n");
    scanf("%f%f",&unit,&days);
    price=(unit*7.4*days) +250;
    printf("total price(INR) = %f Rs\n",price);
    
}
