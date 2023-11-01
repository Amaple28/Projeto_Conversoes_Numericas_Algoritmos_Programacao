//questão 23 trabalho 4

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float litros, valor, valorCombustivel, totalPagar;
    char combustivel;

    printf("Digite o tipo do combustivel <A>Alcool ou <G>Gasolina:");
    scanf("%c", &combustivel);

    printf("\n Quantidade de litros para abastecer:");
    scanf("%f", &litros);

    if(combustivel == 'A' || combustivel == 'a'){
        valor = 4.00;
        if(litros<=20)
            valorCombustivel = valor-(valor*0.03);
        else
            valorCombustivel = valor-(valor*0.05);
        } else if (combustivel == 'G' || combustivel == 'g'){
            valor = 6.00;
            if(litros<=20)
                valorCombustivel = valor-(valor*0.04);
            else
                valorCombustivel = valor-(valor*0.06);
        } else
            printf("Tipo inválido de combustível");

        totalPagar = litros*valorCombustivel;
        printf("\n o preco a ser pago é: %.2f", totalPagar);


}
