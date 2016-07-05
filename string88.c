#include<stdio.h>
int main()
{
char a[50];
int b,i,t,c[20]={0};
printf("Enter a string:");
scanf("%d",&a);
b=strlen(a);
for(i=b-1;i>1;i--)
{
if(a[i]!=a[i-1])
{
t=a[i]%97;
if(c[t]==0)
{
printf("the given string is:");
scanf("%s",a[i]);
c[t]=1;
}
}
}
return 0;
}
