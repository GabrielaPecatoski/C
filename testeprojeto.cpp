#include <stdio.h>

int prova1() {
    float H, h, S, s;
    printf("Informe sua altura e da sua sombra\n");
    scanf("%f%f", &h, &s);
    printf("Informe altura da sombra do predio\n");
    scanf("%f", &S);
    H = (h * S) / s;
    printf("A altura do predio eh %f\n", H);
    if (H >= 2.30) {
        printf("altura valida\n");
    } else {
        printf("altura invalida\n");
    }
    return 0;
}

void prova2() {
    for (int i = 1990; i <= 2024; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
            printf("%d", i);
    }
}

int prova3() {
    float a = 0, h = 0;
    for (int i = 1; i <= 10; i++) {
        float t;
        printf("Informe o tempo do atleta #%d\n", i);
        scanf("%f", &t);

        if (t > h) h = t;
        a += t;
    }
    a /= 10;

    printf("Media de tempo: %.2fs\n", a);
    printf("Maior Tempo: %.2fs\n", h);

    return 0;
}

int prova4() {
    char p = 's';
    do {
        float r, t, m;
        char g;

        printf("Informe a distância percorrida em quilômetros:\n");
        scanf("%f", &r);
        printf("Informe a média do carro por litro:\n");
        scanf("%f", &m);
        printf("Informe o tipo de combustível desejado:\n");
        printf("E - Etanol\n");
        printf("G - Gasolina\n");
        scanf(" %c", &g); // Espaço antes do %c para ignorar espaços em branco

        t = r / m;

        switch (g) {
            case 'E': case 'e':
                printf("A viagem custara R$%.2f\n", t * 3.16);
                break;
            case 'G': case 'g':
                printf("A viagem custara R$%.2f\n", t * 5.28);
                break;
            default:
                printf("Opcao nao reconhecida\n");
                break;
        }

        printf("\nDeseja fazer outro planejamento? (s para continuar, qualquer outra tecla para encerrar)\n");
        scanf(" %c", &p);
        printf("\n");
    } while (p == 's' || p == 'S');

    return 0;
}

int main() {
    int op;
    do {
        printf("Escolha uma opcao\n");
        printf("1 - Ex prova 1\n");
        printf("2 - Ex prova 2\n");
        printf("3 - Ex prova 3\n");
        printf("4 - Ex prova 4\n");
        scanf("%i", &op);
        switch (op) {
            case 1:
                prova1();
                break;
            case 2:
                prova2();
                break;
            case 3:
                prova3();
                break;
            case 4:
                prova4();
                break;
            default:
                printf("opcao invalida\n");
                break;
        }
        printf("Deseja continuar? \n(s para continuar, qualquer outra tecla para encerrar)\n");
        scanf(" %c", &op);
    } while (op == 's' || op == 'S');

    printf("Programa encerrado.\n");

    return 0;
}
