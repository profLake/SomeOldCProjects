#include<stdio.h>
void main()     ////стоило бы правильно строить функции
{ float a,c;
 int b;
printf("Enter the Number : ");
scanf("%f",&a);
b=a/1;
c=a-b;
printf("Integer Part is : %d\n",b);
printf("Decimal Part is : %f",c);
}
