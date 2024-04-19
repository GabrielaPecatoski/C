#include<stdio.h>
#include<stdlib.h>

int main(){
    int raio, base, alt, lado, resultado;
    char op;
    do{
        printf("Escolha a área que deseja realizar:\n");
        printf("c – área de um círculo\n");
        printf("r – área de um retângulo\n");
        printf("q – área de um quadrado\n");
        scanf(" %c", &op); // Adicionado espaço em branco antes de %c para limpar o buffer do teclado
        
        switch (op)
        {
        case 'c':
            printf("Digite o raio:");
            scanf("%i", &raio);
            resultado = raio * raio;
            printf("O valor da área do círculo é %i\n", resultado);
            break;
        case 'r':
             printf("Digite a base:");
             scanf("%i", &base);
             printf("Digite a altura:");
             scanf("%i", &alt);
             resultado = base * alt;
             printf("O valor da área do retângulo é %i\n", resultado);
            break;
        case 'q':
             printf("Digite o lado:");
             scanf("%i", &lado);
             resultado = lado * lado;
             printf("O valor da área do quadrado é %i\n", resultado);
            break;
        default:
            printf("Opção inválida!\n");
        }
         printf("Deseja continuar? S/N\n");
         scanf(" %c", &op);
    } while (op == 's' || op == 'S');
    return 0;
}
