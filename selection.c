#include<stdio.h>
void main()
{
int i,j,l,a[120],t;
printf("enter the length");
scanf("%d",&l);
printf("enter the array");
	for(i=0;i<l;i++)
	scanf("%d",&a[i]);
for(i=0;i<l;i++)
{
	for(j=l-1;j>i;j--)
	{
		if(a[j]<a[i])
		{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		}
}
}
printf("the sorted array is\n");
for(i=0;i<l;i++)
{
printf("%d\n",a[i]);
}
}



