/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    char str[20];
    fgets(str,20,stdin);
    strupr(str);
    printf("%s",str);

    return 0;
}

