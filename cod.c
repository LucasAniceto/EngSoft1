#include <stdio.h>

int main() {
    int escolha, numero;
    int continuar = 1;  
    
    while (continuar) {
        printf("\n===== MENU PRINCIPAL =====\n");
        printf("1 - Descobrir se o número é par ou ímpar\n");
        printf("0 - Sair do programa\n");
        printf("Sua escolha: ");
        scanf("%d", &escolha);
        
        if (escolha == 0) {
            printf("Saindo do programa. Até mais!\n");
            continuar = 0;
        } 
        else if (escolha == 1) {
            printf("\nDigite um número (1-100): ");
            scanf("%d", &numero);
            
            if (numero <= 0 || numero > 100) {
                printf("Número inválido! Deve ser entre 1 e 100.\n");
            } else {
                if (numero % 2 == 0) {
                    printf("%d é um número par.\n", numero);
                } else {
                    printf("%d é um número ímpar.\n", numero);
                }
            }
        }
        else {
            printf("Opção inválida! Por favor escolha 1 para operações ou 0 para sair.\n");
        }
    }
    return 0;
}