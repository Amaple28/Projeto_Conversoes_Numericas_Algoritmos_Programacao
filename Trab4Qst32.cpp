//questão 31 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i=1,soma=0, num;

    while(i<=10){
        printf("Entre com o número \n");
        scanf("%d", &num);

        if(num<40)
            soma+=num;
        i++;
    }
    printf("O valor da soma é: %d \n", soma);
}


