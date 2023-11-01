//questão 31 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int Num, contaVezes=1, somaNumPos=0, somaNumNeg=0;

    while(contaVezes<=10){
        printf("Entre com os números \n");
        scanf("%d", &Num);

        if(Num>=0)
            somaNumPos+=Num;
        else
            somaNumNeg = somaNumNeg+Num;
        contaVezes = contaVezes+1;
    }

    printf("A soma dos números positivos é: %d \n", somaNumPos);
    printf("A soma dos números negativos é: %d \n", somaNumNeg);
}



