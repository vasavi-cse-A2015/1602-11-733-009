#include<stdio.h>
#include<conio.h>
int arr[20];
void main()
{
int n,i,j,p=1,t;
clrscr();
printf("\n Enter the number of elements:\n");
scanf("%d",&n);
printf("\n Enter the elements :\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\n Elements in the array before sorting are:\n");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
printf("\n Elements after bidirectional bubble sort are:\n");
p=1;
for(i=0;i<n-1 && p==1;i++)
{
p=0;
for(j=0;j<n-1-i;j++)
{
if(arr[j]>arr[j+1])
{
t=arr[j+1];
arr[j+1]=arr[j];
arr[j]=t;
p=1;
}
if(arr[n-1-j]<arr[n-2-j])
{
t=arr[n-2-j];
arr[n-2-j]=arr[n-1-j];
arr[n-1-j]=t;
p=1;
}
}
}
for(j=0;j<n;j++)
printf("%d\t",arr[j]);
printf("\n");
printf("\n no.of passes %d\n",i);
getch();
}