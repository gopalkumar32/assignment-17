#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]={'B','h','o','p','a','l'};
	char a[6],i;
	for(i=0;i<6;i++)
	a[i]=arr[i];
	for(i=0;i<6;i++)
	printf("%c",a[i]);
}
