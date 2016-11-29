#include<stdio.h>
void main()
{
int i,j,a[100],l,x;
printf("enter the length of array\n");
scanf("%d",&l);
printf("enter %d elements\n",l);
	for(i=0;i<l;i++)
	  scanf("%d",&a[i]);
printf("enter the number");
scanf("%d",&x);
for(i=0;i<l;i++)
{
	for(j=l-1;j>i;j--)
	{
	if((a[i]+a[j])==x)
		{
		printf("%d+%d=%d\n",a[i],a[j],x);
		}
	}
}
}
