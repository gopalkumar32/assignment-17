#include<stdio.h>
#include<string.h>
int main()
{
        char a[]="google";
        int freq[150]={0},i;
        while(a[i]!=0)
        {
                freq[a[i]]++;
                i++;
        }
        for(i=0;i<150;i++)
        {
                if(freq[i]!=0)
                {
                        printf("%c==>%d\n",i,freq[i]);
                }
        }
}
