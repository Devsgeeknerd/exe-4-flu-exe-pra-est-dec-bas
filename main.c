#include <stdio.h>
#include <stdlib.h>

void main()
{
    int quantidadeAtual;
    int quantidadeMaxima;
    int quantidadeMinima;
    float quantidadeMedia;

    printf("Digite a quantidade atual de estoque: ");
    scanf("%d", &quantidadeAtual);

    printf("Digite a quantidade maxima de estoque: ");
    scanf("%d", &quantidadeMaxima);

    printf("Digite a quantidade minima de estoque: ");
    scanf("%d", &quantidadeMinima);

    quantidadeMedia = (quantidadeMaxima + quantidadeMinima) / 2;

    if (quantidadeAtual >= quantidadeMedia)
    {
        printf("Não efetuar compra");
    }
    else
    {
        printf("Efetuar compra");
    }
    return 0;
}
