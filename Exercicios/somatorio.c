/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("N = ");
    scanf("%d", &n);
    int i = 1;
    int somatorio = 0;
    
    while(i <= n){
        somatorio += i;
        
        i += 1;
    }    
    printf("Somatorio p/ [%d] = %d\n",n,somatorio);
    return 0;
}
