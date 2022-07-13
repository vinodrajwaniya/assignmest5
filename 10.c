#include<stdio.h>
#include<conio.h>

int main()
{
   float base,height,area;
   printf("Enter base value ");
   scanf("%f",&base);
   printf("Enter height value ");
   scanf("%f",&height);
   area=(base*height)/2;
   printf("The area of triangle is %.2f",area);
   getch();
}
