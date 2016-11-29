#include<stdio.h>
void main()
{
int i,j,k=0,l,a [20],n;
printf("enter the array length");
scanf("%d",&l);
printf("enter the array ");
for(i=0;i<l;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element");
scanf("%d",&n);
for(j=0;j<l;j++)
{
if(a[j]==n)
k=j;
}
if(k==0)
printf("not found");
else 
printf("the element is at   %d :",k);
}


