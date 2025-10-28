LINEAR SEARCH


 #include<stdio.h>
 int main()
{
int I,n,b;
int key=0;
printf("enter the size of the array");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d&[I]);
}
printf("enter the element is to be searched");
scanf("%d",&b);
for(i=0;i<n;i++)
{
 if (a[i]==b)
{
printf("\n element founded at the index %d",i);
key=1;
}
}
if(key==0)
{
printf("\n element is not found");
}
}