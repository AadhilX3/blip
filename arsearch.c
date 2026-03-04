#include <stdio.h> //aadhil fottan
void main()
{
int Ar[20],n,x,b,i;
printf("enter the limit of no=\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
 printf("enter no to add in array=\n");
 scanf("%d",&Ar[i]);
}
printf("enter no to search=\n");
scanf("%d",&b);
for(i=0;i<n;i++)
{ 

 if(Ar[i]==b)
 {
  printf("The number is found at index %d\n",i);
 }
 else
 {printf("not found\n");}
 
}


}
