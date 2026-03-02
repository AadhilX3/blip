#include <stdio.h>
void main()
{
int ar[20],i,n;
int large;
printf("Enter the limit=\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("enter the value\n");
 scanf("%d",&ar[i]);
}
printf("THE ARRAY IS =======\n");
for(i=0;i<n;i++)
{
 printf("%d\t",ar[i]);
}
large=ar[0];
for(i=0;i<n;i++)
{
 if(large<ar[i])
 {
  large=ar[i];
 }
}
printf("\nthe largest element is =%d",large);
}
