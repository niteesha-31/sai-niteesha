#include<stdio.h>
int main()
{
int a[20],n,i,j,temp,key,first,mid,last;
printf("Enter the size of array ");
scanf("%d",&n);
printf("enter the %d elements",n);
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0; i<n-1; i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
}
}
}
printf("the sorted array is ......\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("Enter the key value  to be search");
scanf("%d",&key);
first=0;
last=n-1;
while(first<=last)
{
mid = (first+last)/2;
if(key==a[mid])
{
printf("Elements %d found at location%d \n ",key,mid+1);
return 0;
}
else if (key<a[mid])
{
last = mid-1;
}
else if (key>a[mid])
{
first = mid+1;
}
}
printf("\n Elements %d not found in given array",key);
return (1);
}


