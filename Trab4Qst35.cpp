//questão 31 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float mediaPos=0.00, mediaNeg=0.00;
    int cnt, num, contPos=0, contNeg=0, somaPos=0, somaNeg=0;

    for(cnt=1;cnt<=5;cnt++){
        printf("Digite os numeros \n");
        scanf("%d",&num);

        if(num!=0){
            if(num>0){
                contPos ++;
                somaPos+=num;
            } else {
                contNeg++;
                somaNeg+=num;
            }
        } else {
            printf("Você digitou o número zero \n");
        }
    }

    if(contPos>0)
        mediaPos = (float)somaPos/(float)contPos;
    if(contNeg>0)
        mediaNeg = (float)somaNeg/(float)contNeg;

    printf("A média dos números positivos é de: %.2f\n", mediaPos);
    printf("A média dos números negativos é de: %.2f\n", mediaNeg);
}





