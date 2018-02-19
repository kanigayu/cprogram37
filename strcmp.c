#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
int i,j,l1,l2;
scanf("%s %s",&str1,&str2);
l1=strlen(str1);
l2=strlen(str2);
if(l1>l2)
{
    printf("%s",str1);
}
else
{
    printf("%s",str2);
}
return 0;
}
