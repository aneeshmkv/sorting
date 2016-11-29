#include<stdio.h>
void main()
{
int a[100],i,x,n;
printf("enterthe length");
scanf("%d",&n);
printf("enter the sorted array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

printf("enter the nmbr");
scanf("%d",&x);    
int l=0,r=n-1;
while(l<r)
{
if(a[l]+a[r]==x)
{
printf("%d+%d=%d\n",a[l],a[r],x);
l++;
}
else if(a[l]+a[r]<x)

l++;

else
r--;
}
}
