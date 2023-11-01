//questão 31 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num, i=1, ctPar=0, ctImpar=0;
    while(i<=10){
        printf("Entre com um numero para ser verificado \n");
        scanf("%i", &num);

        if(num != 0){
            if(num%2 == 0)
                ctPar++;
            else
                ctImpar++;
        }
        i++;
    }
    printf("A quantidade de números pares é: %i \n", ctPar);
    printf("A quantidade de números ímpares é: %i \n", ctImpar);

}




