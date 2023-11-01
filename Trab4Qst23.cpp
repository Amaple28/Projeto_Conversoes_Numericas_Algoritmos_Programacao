//questão 23 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float imc, peso, altura;

    printf("Entre com a altura:\n");
    scanf("%f", &altura);

    printf("Entre com o peso:\n");
    scanf("%f", &peso);

    imc = peso/(altura*altura);

    if(imc<20)
        printf("abaixo do peso\n");
    else if (imc>=20 && imc<25)
        printf("normal\n");
    else if (imc>=25 && imc<30)
        printf("excesso de peso\n");
    else if (imc>=30 && imc<=35)
        printf("obesidade\n");
    else
        printf("obesidade mórbida\n");
}
