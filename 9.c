#include<stdio.h>
#include<conio.h>

int main()
{
   float sell_price,cost_price;
   printf("Enter the Cost price ");
   scanf("%f",&cost_price);
   printf("Enter the Selling price ");
   scanf("%f",&sell_price);
   if(sell_price>cost_price)
    printf("Profit is %.2f %%",(sell_price-cost_price)/cost_price*100);
   else if(cost_price>sell_price)
    printf("Loss is %.2f %%",(cost_price-sell_price)/cost_price*100);
   else
    printf("No Profit No Loss");
   getch();
}
