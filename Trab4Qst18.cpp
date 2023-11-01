//questão 18 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int A, B, C, result;
    printf("Entre com os números para serem somados ou multiplicados \n");
    scanf("%d", &A);
    scanf("%d", &B);

    if(A==B)
        result = A+B;
    else
        result = A+B;

    C = result;

    printf("O valor da variável A é: %d \n", A);
    printf("O valor da variável B é: %d \n", B);
    printf("O valor da variável C é: %d \n", C);
}
