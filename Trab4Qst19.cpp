//quest�o 19 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int ValA, ValB;
    printf("Entre com os n�meros para serem colocados em ordem crescente \n");
    scanf("%d", &ValA);
    scanf("%d", &ValB);

    if(ValA>ValB)
        printf("Os valores em ordem crescente s�o: %d %d \n", ValB, ValA);
    else
        printf("O valor da vari�vel A �: %d %d \n", ValA, ValB);

}
