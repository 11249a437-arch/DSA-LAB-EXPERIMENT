STRING REVERSAL 

#include<stdio.h>
#include<stdlib.h>
int top=-1,MAX;
char*stack
void display()
{
 printf("there are %d elements in the stack\n",top+1);
 for(int i=top;i>=0;i--)
{
 if(i=top){
 printf("|c|<top\n",stack[i]);
}
void push(char item)
{
if(top==MAX-1)
{
printf("stack is overflow");
}
else
{
top=top+1;
stack[top]=item;
}
char pop()
{
char item;
if(top==-1)
{
printf("stack is underflow/empty\n");
return 0;'
}
else
{
item=stack[top];
top=top-1;
return item;
}
}
void string reversal()
{
char string[MAX];
printf("please enter the string of size %d to reverse ,MAX);
scanf("%d",string);
for(int c=0;c<MAX;c++)
{
push(string[c]);
}
printf("reversed string");
for (int c=0;c<max;c++)
{
printf("%c",pop());
}
int main()
{
int operator=0;top=-1;
printf("enter the size of char stack :");
scanf("%d",&MAX);
stack=realloc(stack,MAX);
printf("\n which stack operation you want to do\n1.basic operation\n2.string reversal\n give your choice");
scanf("%d",&operation);
if(operation==2)
{
string reversal()
goto start;
}
else if (operation==1)
{
printf("please choose stack operations to perform:");
while(operation!=4)
{
printf("\n1.push\n2.pop\n3.display\n4.exit");
scanf("%d",&operation){
case 1:
 char item;
 printf("enter the character to push:");
scanf("%c",&item);
push(item);
break;
  case 2:
  display();
  break;
  case 3:
 char c=pop();
 if(c!='10')
{
printf("element %c is popped out from top",c);
break;
case 4:
return 0;
default:
printf("incorrect operation ");
operation=0;
break;
}}}
else
{
go to start;
}
return 0;
}

