
#include <stdio.h>

float calcularArea(float largura, float comprimento){
    return largura*comprimento;
}

int main(){
    float larg, compr, area;
    
    printf("Digite a largura:\n");
    scanf("%f",&larg);
    printf("Digite o comprimento:\n");
    scanf("%f",&compr);
    
    area = calcularArea(larg,compr);
    
    printf("A area é %.2f",area);

}