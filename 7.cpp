#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso_terra, peso_planeta;
    int numero_planeta;

    printf("Digite seu peso na Terra (em kg): ");
    scanf("%f", &peso_terra);

    printf("Digite o número do planeta (1-Mercúrio, 2-Vênus, 3-Marte, 4-Júpiter, 5-Saturno, 6-Urano ):\n");
    scanf("%d", &numero_planeta);

    switch (numero_planeta) {
        case 1:
            peso_planeta = peso_terra * 0.37;
            printf("Seu peso no planeta Mercúrio é %.2f kg\n", peso_planeta);
            break;
        case 2:
            peso_planeta = peso_terra * 0.88;
            printf("Seu peso no planeta Vênus é %.2f kg\n", peso_planeta);
            break;
        case 3:
            peso_planeta = peso_terra * 0.38;
            printf("Seu peso no planeta Marte é %.2f kg\n", peso_planeta);
            break;
        case 4:
            peso_planeta = peso_terra * 2.64;
            printf("Seu peso no planeta Júpiter é %.2f kg\n", peso_planeta);
            break;
        case 5:
            peso_planeta = peso_terra * 1.15;
            printf("Seu peso no planeta Saturno é %.2f kg\n", peso_planeta);
            break;
        case 6:
            peso_planeta = peso_terra * 1.17;
            printf("Seu peso no planeta Urano é %.2f kg\n", peso_planeta);
            break;
        default:
            printf("Número de planeta inválido!\n");
            return 1;
    }

    return 0;
    system("pause");
}
