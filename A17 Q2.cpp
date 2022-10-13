#include<stdio.h>
int main()
{
        char str[20]="gopal",c;
        int i,count=0;
        scanf("%c",&c);
        for(i=0;str[i];i++)
        {
                if(c==str[i]);
                count++;
        }
        printf("Lenght of string is %d\n",count);
}
