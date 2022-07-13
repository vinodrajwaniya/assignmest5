#include<stdio.h>
#include<conio.h>

int main()
{
   float l,h,b,volume;
   printf("Enter the l h b of a Cuboid ");
   scanf("%f%f%f",&l,&h,&b);
   volume=l*h*b;
   printf("\nThe volume of a Cuboid %f",volume);
   getch();
}
