//quest�o 31 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int Num, contaVezes=1, somaNumPos=0, somaNumNeg=0;

    while(contaVezes<=10){
        printf("Entre com os n�meros \n");
        scanf("%d", &Num);

        if(Num>=0)
            somaNumPos+=Num;
        else
            somaNumNeg = somaNumNeg+Num;
        contaVezes = contaVezes+1;
    }

    printf("A soma dos n�meros positivos �: %d \n", somaNumPos);
    printf("A soma dos n�meros negativos �: %d \n", somaNumNeg);
}



