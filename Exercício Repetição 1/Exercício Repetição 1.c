#include <stdio.h>

int main()
{
    int opcao = 0;

    while (opcao != 3)
    {
        printf("MENU INICIAL\n");
        printf("[1] IMCF\n");
        printf("[2] PGCF\n");
        printf("[3] SAIR DO PROGRAMA\n");
        printf("INSIRA A OPCAO DESEJADA:\n");
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 1:
            printf("IMCF\n");
            float massa, comprimento_coluna, imcf;

            printf("Digite a massa do felino: \n");
            scanf("%f", &massa);
            printf("Digite o comprimento da coluna:\n");
            scanf("%f", &comprimento_coluna);

            imcf = massa / (comprimento_coluna * comprimento_coluna);
            printf("O IMCF do gato e %.2f.\n", imcf);

            if (imcf < 8)
                printf("O felino esta abaixo do peso.\n");
            else if (imcf >= 8 && imcf < 12)
                printf("O felino esta no peso ideal.\n");

            else
                printf("O felino esta acima do peso.\n");
            break;

        case 2:
            float ct, dcp, pgcf;
            printf("PGCF\n");
            printf("Digite a circunferencia toracica em cm:\n");
            scanf("%f", &ct);
            printf("Digite a distância entre o calcaneo e a patela em cm:\n");
            scanf("%f", &dcp);

            pgcf = (((ct / 0.7067) - dcp) / 0.9156) - dcp;
            printf("O percentual de gordura corporal felina e %.2f%%\n", pgcf);

            if (pgcf < 20)
                printf("O felino esta abaixo do peso.\n");

            else if (pgcf >= 20 && pgcf < 27)
                printf("O felino esta no peso ideal.\n");

            else
                printf("O felino esta acima do peso.\n");
            break;

        case 3:
            opcao = 3;
            printf("Programa encerrado.\n");
            break;

        default:
            printf("ERRO! Digite um valor valido!\n");
            break;
        }
    }
}
