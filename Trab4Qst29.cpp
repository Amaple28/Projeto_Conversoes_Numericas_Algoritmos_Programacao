//quest�o 28 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero, i, cntPar=0, cntImpar=0, somaPar=0, somaImpar=0;

    for(i=1;i<=5;i++){
        printf("Entre com um n�mero para ser verificado \n");
        scanf("%i", &numero);

        if(numero!=0){
            if(numero%2==0){
                cntPar = cntPar+1;
                somaPar = somaPar+numero;
            } else {
                cntImpar = cntImpar+1;
                somaImpar = somaImpar+numero;
            }
        }
    }

   printf("A qtd de n�meros pares �: %d \n", cntPar);
   printf("A qtd de n�meros �mpares �: %d \n", cntImpar);
   printf("A soma de n�meros pares �: %d \n", somaPar);
   printf("A soma de n�meros �mpares �: %d \n", somaImpar);
}

