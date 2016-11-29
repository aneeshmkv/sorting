#include<stdio.h>
void main()
{
int i,j,l,a[120],t;
printf("enter the length");
scanf("%d",&l);
printf("enter the array");
        for(i=1;i<=l;i++)
        {
	 scanf("%d",&a[i]);
	}
for(i=1;i<l;i++)
{

        if(a[i]>a[i+1])
		{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
		i=0;
		}
}
printf("the sorted array is\n");
for(i=1;i<=l;i++)
{
printf("%d\n",a[i]);
}
}

