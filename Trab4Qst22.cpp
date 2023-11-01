//questão 22 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int A, B, auxiliar;
    printf("Entre com os valores de A e B \n");
    scanf("%i%i", &A, &B);

    auxiliar = A;
    A=B;
    B=auxiliar;

    printf("O valor de A é: %i \n", A);
    printf("O valor de B é: %i \n", B);
}
