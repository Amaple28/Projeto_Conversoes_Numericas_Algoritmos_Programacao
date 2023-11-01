//questão 19 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int ValA, ValB;
    printf("Entre com os números para serem colocados em ordem crescente \n");
    scanf("%d", &ValA);
    scanf("%d", &ValB);

    if(ValA>ValB)
        printf("Os valores em ordem crescente são: %d %d \n", ValB, ValA);
    else
        printf("O valor da variável A é: %d %d \n", ValA, ValB);

}
