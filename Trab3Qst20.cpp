//quest�o 20 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int ValA, ValB;
    printf("Entre com os n�meros para serem colocados em ordem decrescente \n");
    scanf("%d", &ValA);
    scanf("%d", &ValB);

    if(ValB>ValA)
        printf("Os valores em ordem decrescente s�o: %d %d \n", ValB, ValA);
    else
        printf("Os valores em ordem decrescente s�o: %d %d \n", ValA, ValB);

}
