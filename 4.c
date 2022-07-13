#include<stdio.h>
#include<conio.h>

int main()
{
   float P,R,T,SI;
   printf("Enter the amount ");
   scanf("%f",&P);
   printf("Enter the Rate ");
   scanf("%f",&R);
   printf("Enter the Time ");
   scanf("%f",&T);
   SI=(P*R*T)/100;
   printf("\nThe Simple Interest is %f",SI);
   getch();
}
