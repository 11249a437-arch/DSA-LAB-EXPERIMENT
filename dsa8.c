LINEAR QUEUE

#include<stdio.h>
#define MAX_SIZE
int queue[MAX_SIZE];
int front=-1,rear=-1;
void enqueue(int item)
{
if(rear==MAX_SIZE-1)
{
printf("queue overflow\n");
}
else
{
if(front==-1)
front=0;
rear++;
queue[rear]=item;
printf("inserted item into the linear queue %d\n",item);
}
}
void dequeue()
{
if(front=-1||front>rear)
{
printf("queue is underflow");
}
else
{
printf("deleted element is :%d",queue[queue]);
front++;
if(front>rear)
{
front=rear-1;
}
}
}
void display()
{
if(front==-1)
{
printf*("the element in the queue are :");
for(int =front;i<rear;i++)
{
printf("%d",queue[i]);
}
printf("\n");
}
}
int main()
{
int choice,item;
while(1){

printf("\n--linear queue---\n");
printf("1. enqueue -\n");
printf("2. dequeue\n");
printf("3. display()\n");
printf("4.exit\n");
printf("enter your choice");
scanf("%d",&choice);
switch1(choice)
{
printf("enter the elements to be inserted:");
}