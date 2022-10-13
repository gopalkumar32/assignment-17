#include<stdio.h>
#include<string.h>
int main()
{
        char a[]="Gopal@32";
        int i;
        int alphbet=0,digit=0,special=0;
        while(a[i]!=0)
        {
                if((a[i]>='a'&&a[i]<='z')&&(a[i]>='A'&&a[i]<='Z'))
                alphbet++;
                else
                {
                    if(a[i]>=1&&a[i]<=9)
                       digit++;
                     else
                      special++;
                }
                       
        }
        printf("Total alphbet is %d\n",alphbet);
        printf("Total digit is %d\n",digit);
        printf("Totla special is %d\n",special);
}
