//questão 30 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cnt=1;

    while(cnt<=100){
        printf("%d    ", cnt);
        cnt = cnt+1;
    }
}

