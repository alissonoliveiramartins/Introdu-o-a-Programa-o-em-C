/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char str1[20], str2[20];
    
    int tam1, tam2;
    long verificador;
    
    fgets(str1, 20, stdin);
    tam1 = strlen(str1);
    printf("Tamanho de %s é %ld \n",str1, tam1);
    
    fgets(str2, 20, stdin);
    tam2 = strlen(str2);
    printf("Tamanho de %s é %ld \n",str1, tam2);
    
    verificador = strcmp(str1, str2);
    
    if (verificador == 0){
        puts("As duas strings são de tamanhos iguais.");
    }else{
        puts("As duas strings são de tamanhos diferentes.");
    }
  
    return 0;
}
