#include <stdio.h>
#include <math.h>

int main()
{
    float peso, altura, imcc, quantidade_racao;         

    printf("Digite o peso do cachorro em (kg):\n");
    scanf("%f", &peso);
    printf("Digite a altura do cachorro em (m),\nmedindo da nuca, ao longo da coluna,ate a ponta do pe da pata traseira do cachorro:\n");    
    scanf("%f", &altura);

    imcc = peso / pow(altura, 2);
    quantidade_racao = (peso * 15) * (22 / imcc);

    printf("O imcc do cachorro e %g (kg/m^2).\nA quantidade de racao recomendada e %g (g/dia).", imcc, quantidade_racao);

}
