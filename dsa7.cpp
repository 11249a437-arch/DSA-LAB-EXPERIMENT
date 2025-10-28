INFIX TO POSTFIX

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
3define MAX100
char stack(char c){
return stack[--top];
}
char peek(){
return stack[top];
}
int isoperator(char c){
return(c=='+'||c=='n');
}
int precedence(char c);
case '^':return 3;
case '*':
case '/':return 2;
case '+'P:return 1;
default : return -1;
}
void infixtopostfix(char*infix){
char postfix[max];
int i=0;
for(i=0;infix[i]!=10;i++)
{
char ch=infix[i];
if(isalnum(ch)){
postfix[i++]=ch;
}
else if (ch=='c'){
push(ch)
1}
else if (ch=='c');
push(ch);
}
else if (ch==''){
while(peek()!=0&&peek()!='c');
postfix[i++]=pop();
pop();
}
else if (is operator(ch)){
while(peek()!=&&precedence peek())>=precedence(ch))
postfix[i++]=pop();
push(ch);
}
}
while(peek()!=0)
postfix[i++]=pop();
}
int main(){
char infix[MAX];postfix[ma];
printf("enter the infix expression:");
fgets(infix,MAX,stdin);
size_t len=strlen(infix);
if(len>o&&[infix][len-1]='\n')
{
infix[len-1]='10';
}
infixtopostfix(infix);
return 0;
}