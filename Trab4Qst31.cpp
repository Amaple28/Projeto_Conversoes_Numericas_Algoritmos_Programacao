//questão 30 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cnt=100;

    while(cnt<=200){
        printf("%d    ", cnt);
        cnt = cnt+1;
    }
}

