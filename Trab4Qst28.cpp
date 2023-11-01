//questão 28 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cnt, qtAprovado=0, qtReprovado=0;
    float notaFinal, mediaClasse=0, somaNota=0;

    for(cnt=1;cnt<=10;cnt++){
        printf("Entre com a nota final do aluno \n");
        scanf("%f", &notaFinal);

        if(notaFinal>=60)
            qtAprovado++;
        else
            qtReprovado++;

        somaNota += notaFinal;
    }

    mediaClasse = somaNota/10;

   printf("A qtd de alunos aprovados é: %d \n", qtAprovado);
   printf("A qtd de alunos reprovados é: %d \n", qtReprovado);
   printf("A média de notas da classe de alunos é: %.2f \n", mediaClasse);

}
