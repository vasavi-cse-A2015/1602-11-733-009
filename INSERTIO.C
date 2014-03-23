#include<stdio.h>
#include<conio.h>
void main()
{
char c[]={'P','Y','T','H','O','N'};
int i,j,k,n;
char temp;
n=6;
clrscr();
for(i=1;i<n;i++)
{
j=i;
while(j>0 && c[j]<c[j-1])
{
temp=c[j];
c[j]=c[j-1];
c[j-1]=temp;
j--;
}
for(k=0;k<n;k++)
printf(" %c\t",c[k]);
printf("\n");
}
getch();
}