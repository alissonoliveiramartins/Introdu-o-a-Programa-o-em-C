
#include <stdio.h>

float calcularArea(float largura, float comprimento){  // Função, nome: calcularArea. quando declara a funçaõ tem que declarar o TIPO.
    return largura*comprimento;  // Retorna o valor da largura * comprimento , mas tambem pode nao retonar nada 
}

int main(){
    float larg, compr, area;
    
    printf("Digite a largura:\n");
    scanf("%f",&larg);
    printf("Digite o comprimento:\n");
    scanf("%f",&compr);
    
    area = calcularArea(larg,compr); // Chamada da função, retornando o valor para "area"
    
    printf("A area é %.2f",area);

}
