
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char nome[20], sobrenome[20];
  
    fgets(nome, 10, stdin);
    printf("Nome : %s",nome);
    
    fgets(sobrenome, 10, stdin);
    printf("Sobrenome : %s",sobrenome);

    strcat(nome, sobrenome);
    printf("Nome completo : %s",nome);
    
    return 0;
}
