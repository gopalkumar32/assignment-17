#include<stdio.h>
#include<string.h>
int main()
{
	char a[]={'b','h','o','p','a','l'};
	char b,c;
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=1;j<6;j++)
		{
			if(a[i]<a[j])
			{
			   b=a[i];
			   a[i]=a[j];
			   a[j]=b; 
			}
			else
			a[i]=a[i];   
		}
	}
	for(i=0;i<6;i++)
	printf("%c",a[i]);
}

