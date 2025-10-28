STACK OPERATION

#include<stdio.h>
int main()
{
int size,value,choice;
int top=-1;
printf("enter your choice:");
printf("\n1.push\n2.pop\n3.display\n4.exit\n");
printf("enter your choice");
scanf("%d",&choice);
switch(choice)
{
  case 1:
   if(top==size-1){
printf("stack overflow:\n");
}
else
{
printf("enter the element to push:");
scanf("%d",&value);
top++;
stack[top]=value;
printf("pushed element %d into stack \n",value);
}
break;
  case 2:
  if(top==-1)
{
  printf("stack underflow");
}; }
else
{
printf("popped element %d from the stack \n",stack[top]);
top--;
}
break;
 case 3:
  if(top==-1){
printf("stack is empty.\n");
}
else
{
printf("stack element :\n");
} 
}
break;
 case 4:
 printf("exit program\n");
 return 0;
 default :
printf("invalid chaoice");
}
}
return 0;
}
