#include <stdio.h>
#include <math.h>

int main()
{
    float deposito_x, deposito_y, container_x, container_y;
    int pilha;

    printf("DEPOSITO-DE-CONTAINER\n");

    printf("Digite o comprimento do deposito em metros: ");
    scanf("%f", &deposito_x);
    printf("Digite a largura do deposito em metros: ");
    scanf("%f", &deposito_y);

    printf("Digite o comprimento do container em metros: ");
    scanf("%f", &container_x);
    printf("Digite o largura do container em metros: ");
    scanf("%f", &container_y);
    printf("Digite o numero maximo de containers que podem ser empilhados: ");
    scanf("%i", &pilha);

    int eixoX = (int)(floor(deposito_x / container_x) * floor(deposito_y / container_y) * pilha);
    int eixoY = (int)(floor(deposito_x / container_y) * floor(deposito_y / container_x) * pilha);

    if (eixoX > eixoY)
    {
        printf("A melhor forma de distribuir os containers e: comprimento do container paralelo ao comprimento do deposito.\n");
        printf("Ao todo cabem %i containers.\n", eixoX);
    }
    else if (eixoX < eixoY)
    {
        printf("A melhor forma de distribuir os containers e: largura do container paralelo ao comprimento do deposito.\n");
        printf("Ao todo cabem %i containers.\n", eixoY);
    }
    else if (eixoX == eixoY && eixoX != 0)
    {
        printf("Ambas destribuicoes possuem o maximo aproveitamento de espaco.\n");
        printf("Ao todo cabem %i containers.\n", eixoX);
    }
    else /*(eixoX == 0 && eixoY == 0)*/
    {
        printf("O deposito nao consegue armazenar nenhum container.\n");
    }
}