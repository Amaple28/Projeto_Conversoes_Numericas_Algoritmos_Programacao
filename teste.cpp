//bibliotecas que possui declarações de funções úteis para entrada e saída de dados
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//bibliotecas que permite usar determinadas funções matemáticas
#include <math.h>
//biblioteca que permite imprimir as strings com acentuação
#include <locale.h>
//biblioteca para usar a função strlen
#include <string.h>
#include <string>

////////////////////////////////
//BLOCOS DE CONVERSÃO
int binToDec(char bin[]) {
    int dec = 0;
    int base = 1;
    int len = strlen(bin);
    for (int i = len - 1; i >= 0; i--) {
        if (bin[i] == '1') {
            dec += base;
        }
        base *= 2;
    }
    return dec;
}

int octToDec(char oct[]) {
    int dec = 0;
    int base = 1;
    int len = strlen(oct);
    for (int i = len - 1; i >= 0; i--) {
        int digit = oct[i] - '0';
        dec += digit * base;
        base *= 8;
    }
    return dec;
}

int hexToDec(char hex[]) {
    int dec = 0;
    int base = 1;
    int len = strlen(hex);
    for (int i = len - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            dec += (hex[i] - '0') * base;
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            dec += (hex[i] - 'A' + 10) * base;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            dec += (hex[i] - 'a' + 10) * base;
        }
        base *= 16;
    }
    return dec;
}

int decToBin(int dec) {
    char bin[100];
    while (dec > 0) {
        int rem = dec % 2;
        bin = stoi(rem) + bin;
        dec /= 2;
    }
    return bin;
}

int decToOct(int dec) {
    char oct[100];
    while (dec > 0) {
        int rem = dec % 8;
        oct = to_string(rem) + oct;
        dec /= 8;
    }
    return oct;
}

int decToHex(int dec) {
    char hex[100];
    while (dec > 0) {
        int rem = dec % 16;
        if (rem < 10) {
            hex = to_string(rem) + hex;
        } else {
            hex = (char)(rem - 10 + 'A') + hex;
        }
        dec /= 16;
    }
    return hex;
}

int octToBin(char oct[]) {
    int dec = octToDec(oct);
    return decToBin(dec);
}

int binToOct(char bin[]) {
    int dec = binToDec(bin);
    return decToOct(dec);
}

int octToHex(char oct[]) {
    int dec = octToDec(oct);
    return decToHex(dec);
}

int hexToOct(char hex[]) {
    int dec = hexToDec(hex);
    return decToOct(dec);
}

int hexToBin(char hex[]) {
    int dec = hexToDec(hex);
    return decToBin(dec);
}

int binToHex(char bin[]) {
    int dec = binToDec(bin);
    return decToHex(dec);
}
//FIM BLOCOS DE CONVERSÃO
////////////////////////////////

/////////////////////////////////
//BLOCO PRINCIPAL
using namespace std;
int main(){
	//definindo qual idioma o programa vai utilizar
	setlocale(LC_ALL, "portuguese");
	//menu que mostra ao usuário quais conversões ele pode fazer
	cout << "==============================================\n";
    cout << "           Conversor de Bases Numéricas        \n";
    cout << "==============================================\n";
    cout << "SELECIONE A CONVERSÃO QUE DESEJA FAZER:\n\n";
    cout << "1- Binário para Decimal\n";
    cout << "2- Octal para Decimal\n";
    cout << "3- Hexadecimal para Decimal\n";
    cout << "4- Decimal para Binário\n";
    cout << "5- Octal para Binário\n";
    cout << "6- Hexadecimal para Binário\n";
    cout << "7- Binário para Octal\n";
    cout << "8- Decimal para Octal\n";
    cout << "9- Hexadecimal para Octal\n";
    cout << "10- Binário para Hexadecimal\n";
    cout << "11- Decimal para Hexadecimal\n";
    cout << "12- Octal para Hexadecimal\n\n";
    cout << "==============================================\n";
	//recebe qual conversão o usuário quer fazer
	int conversao;
	cout <<"DIGITE A OPÇÃO DESEJADA:  ";
	cin >>conversao;
	cout << "==============================================\n";
	//comando que limpa tudo que foi mostrado na tela antes
	//system("clear||cls");

	//switch case para identificar qual bloco de conversão o usuário selecionou
	switch(conversao){
		//bloco 1 com o cálculo da conversão de binario para decimal
		case 1:
		    char dbinario[100];
            int bdecimal;
			//cout <<"CONVERSÃO DE BINÁRIO PARA DECIMAL \n\n";
			cout << "==============================================\n";
            cout << "       CONVERSÃO DE BINÁRIO PARA DECIMAL      \n";
            cout << "==============================================\n";
            cout << "Informe o número binário que deseja converter:\n";
            cin >> dbinario;
            bdecimal = binToDec(dbinario);
            cout << "O número binário " << dbinario <<" em decimal é: " << bdecimal;
		break;

		//bloco 2 com o cálculo da conversão de octal para decimal
		case 2:
			int doctal, odecimal;
			printf("CONVERSÃO DE OCTAL PARA DECIMAL \n\n");
		break;

		//bloco 3 com o cálculo da conversão de hexadecimal para decimal
		case 3:
			int dhexadecimal, hdecimal
			printf("CONVERSÃO DE HEXADECIMAL PARA DECIMAL \n\n");
		break;

		//bloco 4 com o cálculo da conversão de decimal para binario
		case 4:
			int bdecimal, dbinario;
			printf("CONVERSÃO DE DECIMAL PARA BINÁRIO \n\n");
		break;

		//bloco 5 com o cálculo da conversão de octal para binario
		case 5:
			int obinario, boctal;
			printf("CONVERSÃO DE OCTAL PARA BINÁRIO \n\n");
		break;

		//bloco 6 com o cálculo da conversão de hexadecimal para binario
		case 6:
			printf("CONVERSÃO DE HEXADECIMAL PARA BINÁRIO \n\n");
		break;

		//bloco 7 com o cálculo da conversão de binario para octal
		case 7:
			printf("CONVERSÃO DE BINÁRIO PARA OCTAL \n\n");
		break;

		//bloco 8 com o cálculo da conversão de decimal para octal
		case 8:
			printf("CONVERSÃO DE DECIMAL PARA OCTAL \n\n");
		break;

		//bloco 9 com o cálculo da conversão de hexadecimal para octal
		case 9:
			printf("CONVERSÃO DE HEXADECIMAL PARA OCTAL \n\n");
		break;

		//bloco 10 com o cálculo da conversão de binário para hexadecimal
		case 10:
			printf("CONVERSÃO DE BINÁRIO PARA HEXADECIMAL \n\n");
		break;

		//bloco 11 com o cálculo da conversão de decimal para hexadecimal
		case 11:
			printf("CONVERSÃO DE DECIMAL PARA HEXADECIMAL \n\n");
		break;

		//bloco 12 com o cálculo da conversão de octal para hexadecimal
		case 12:
			printf("CONVERSÃO DE OCTAL PARA HEXADECIMAL \n\n");
		break;

		//caso a opção digitada não exista, informar ao usuário para digitar uma opção válida
		default:
			printf("Favor informar uma opção válida de conversão!");

	}
}
//FIM BLOCO PRINCIPAL
/////////////////////////////////


