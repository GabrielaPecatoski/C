#include <stdio.h>
#include <stdlib.h>

int main() {
    char destino;
    int inclui_volta;
    float preco;

    printf("Digite o destino da viagem (N para Região Norte, D para Região Nordeste, C para Região Centro-Oeste ou S para Região Sul): ");
    scanf(" %c", &destino);
    printf("A viagem inclui volta? (1 para Sim, 0 para Não): ");
    scanf("%d", &inclui_volta);

    switch (destino) {
        case 'N':
        case 'n':
            if (inclui_volta == 1)
                preco = 900.00;
            else
                preco = 500.00;
            printf("O preço da passagem de ida %s é R$ %.2f\n", (inclui_volta == 1) ? "e volta para Região Norte" : "para Região Norte", preco);
            break;
        case 'D':
        case 'd':
            if (inclui_volta == 1)
                preco = 650.00;
            else
                preco = 350.00;
            printf("O preço da passagem de ida %s é R$ %.2f\n", (inclui_volta == 1) ? "e volta para Região Nordeste" : "para Região Nordeste", preco);
            break;
        case 'C':
        case 'c':
            if (inclui_volta == 1)
                preco = 600.00;
            else
                preco = 350.00;
            printf("O preço da passagem de ida %s é R$ %.2f\n", (inclui_volta == 1) ? "e volta para Região Centro-Oeste" : "para Região Centro-Oeste", preco);
            break;
        case 'S':
        case 's':
            if (inclui_volta == 1)
                preco = 550.00;
            else
                preco = 300.00;
            printf("O preço da passagem de ida %s é R$ %.2f\n", (inclui_volta == 1) ? "e volta para Região Sul" : "para Região Sul", preco);
            break;
        default:
            printf("Destino inválido!\n");
            return 1;
    }

    return 0;
    system("pause");
}
