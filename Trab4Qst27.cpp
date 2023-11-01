//questão 27 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cnt, num, ctPos=0, ctNeg=0, somaPos=0, somaNeg=0;
    for(cnt=1;cnt<=5;cnt++){
        printf("Entre com o número \n");
        scanf("%d", &num);

        if(num!=0){
            if(num>0){
                ctPos++;
                somaPos+=num;
            } else {
                ctNeg++;
                somaNeg+=num;
            }
        }else
        printf("Você digitou o número zero \n");
    }

   printf("o qtde de números positivos é: %d \n", ctPos);
   printf("o qtde de números negativos é: %d \n", ctNeg);
   printf("A soma dos números positivos é: %d \n", somaPos);
   printf("A soma dos números negativos é: %d \n", somaNeg);

}
