BINARY SEARCH

#include<stdio.h>
int main()
{
int n,i,key;
printf("enter the size of array:");
scanf("%d",&n);
int a[n];
printf("enter the element in array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf(" enter the element to search:");
for(i=0,i<n;i++)
{
scanf("%d",&key);
}
}
int start,end,mid;
start=0;
end=n-1;
while(start<=end);
{
mid=[start+end]/2;
if(a[mid]==key)
{
 printf("found the position of mid");
return 0;
}
else
if(a[mid]<key)
{
start=mid+1;
}
else if(a[mid]>key)
{
end=mid-1;
}
}
return 0;
}
}