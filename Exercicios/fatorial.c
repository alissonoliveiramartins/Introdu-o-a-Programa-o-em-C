#include <stdio.h>

int main()
{
    int resposta=1;
    
    while (resposta==1){
        printf("VOCE DESEJA CALCULAR O FATORIAL ?\n SIM(1) NÃO(2)\n");
        int x;
        scanf("%d", &x);
        resposta = x;
        
        if (resposta==2){
            break;
        }
        int n,c;
        printf("\nDigite o numero que seja maior que 0 e menor que 16\n");
        scanf("%d",&n);
        
        while (n<1 || n>16){
            printf("\a\nAtenção !\nDigite o numero que seja maior que 0 e menor que 16\n");
            scanf("%d",&n);
        }
            
        if (1<=n<16){
            c = n;
            while (c > 1){   
                c -= 1;
                n = n * c;
            }
        printf("Fatorial é %d\n",n);    
        }
    }
        
return 0;
}