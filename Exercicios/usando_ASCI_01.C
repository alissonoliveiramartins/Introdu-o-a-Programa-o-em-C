
#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[50];
    int valor;
    char letra;
    
    fgets(palavra, 50, stdin);
    
    for (int i =0; palavra[i] != '\0'; i++){
        valor = palavra[i]+32;
        letra = valor;
        printf("%c",letra);
      
    }
    return 0;
}
