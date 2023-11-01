//questão 20 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float salario, desconto;

    printf("Entre com o salário\n");
    scanf("%f", &salario);

    if(salario<=1100){
        desconto = salario*0.075;
    } else if (salario>=1101.01 && salario<=2203.48){
        desconto = salario * 0.09;
    } else if (salario>=2203.29 && salario<=3305.22){
        desconto = salario *0.12;
    }else if (salario>=3305.23 && salario<=6433.57){
        desconto = salario*0.14;
    }else{
        desconto - 6443.57*0.14;
    }

    printf("O valor do salário é: %.2f \n", salario);
    printf("O valor do desconto é: %.2f \n", desconto);
    printf("O valor do salário líquido é: %.2f \n", salario-desconto);
}
