SWITCH CASE


#include<stdio.h>
int main()
{
 float a,b;
int ch;
scanf("%f%f",&a&b);
printf("enter two numbers:");
printf("menu");
printf("\n1.addition");
printf("\n2.subtraction");
printf("\n3.multiplication");
printf("\n4.divisiom");
printf("\n please enter your choice");
scanf("%d",&ch);
switch(ch)
case 1:
  printf("\n1.addition=%f",a+b);
  break;
case 2:
  printf("\n2.subtraction=%f",a-b);
  break;
case 3:
  printf("\n3.multiplication=%f",a*b);
  break;
case 4:
  printf("\n4.division=%f",a/b);
  break;
case 5:
  printf("\n ivalid option");
  break;
  return 0
}
}


