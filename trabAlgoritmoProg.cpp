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
    int i = 0;
    while (dec > 0) {
        int rem = dec % 2;
        bin[i] = rem + '0'; // converte o dígito para caractere
        dec /= 2;
        i++;
    }
    bin[i] = '\0'; // adiciona o caractere nulo ao final do vetor

    // inverte a ordem dos caracteres no vetor bin
    int len = strlen(bin);
    for (int j = 0; j < len / 2; j++) {
        char temp = bin[j];
        bin[j] = bin[len - j - 1];
        bin[len - j - 1] = temp;
    }

    return atoi(bin); // converte o vetor de caracteres para inteiro
}

int decToOct(int dec) {
    char oct[100];
    int i = 0;
    while (dec > 0) {
        int rem = dec % 8;
        oct[i] = rem + '0'; // converte o dígito para caractere
        dec /= 8;
        i++;
    }
    oct[i] = '\0'; // adiciona o caractere nulo ao final do vetor

    // inverte a ordem dos caracteres no vetor oct
    int len = strlen(oct);
    for (int j = 0; j < len / 2; j++) {
        char temp = oct[j];
        oct[j] = oct[len - j - 1];
        oct[len - j - 1] = temp;
    }
    return atoi(oct); // converte o vetor de caracteres para inteiro
}

char* decToHex(int dec) {
    char hex[100];
    int i = 0;
    while (dec > 0) {
        int rem = dec % 16;
        if (rem < 10) {
            hex[i] = rem + '0'; // converte o dígito para caractere
        } else {
            hex[i] = rem - 10 + 'A'; // converte o dígito para caractere hexadecimal
        }
        dec /= 16;
        i++;
    }
    hex[i] = '\0'; // adiciona o caractere nulo ao final do vetor

    // inverte a ordem dos caracteres no vetor hex
    int len = strlen(hex);
    for (int j = 0; j < len / 2; j++) {
        char temp = hex[j];
        hex[j] = hex[len - j - 1];
        hex[len - j - 1] = temp;
    }

    return strdup(hex); // converte o vetor de caracteres para inteiro
}

int octToBin(char oct[]) {
    int dec = octToDec(oct);
    return decToBin(dec);
}

int binToOct(char bin[]) {
    int dec = binToDec(bin);
    return decToOct(dec);
}

char* octToHex(char oct[]) {
    int dec = octToDec(oct);
    char* hex = decToHex(dec);
    return strdup(hex);
}

int hexToOct(char hex[]) {
    int dec = hexToDec(hex);
    return decToOct(dec);
}

int hexToBin(char hex[]) {
    int dec = hexToDec(hex);
    return decToBin(dec);
}

char* binToHex(char bin[]) {
    int dec = binToDec(bin);
    char* hex = decToHex(dec);
    return strdup(hex);
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
			cout << "==============================================\n";
            cout << "       CONVERSÃO DE BINÁRIO PARA DECIMAL      \n";
            cout << "==============================================\n";
            cout << "Informe o número binário que deseja converter:\n";
            cin >> dbinario;
            bdecimal = binToDec(dbinario);
            cout << "==============================================\n";
            cout << "O número binário " << dbinario <<" em decimal é: " << bdecimal <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 2 com o cálculo da conversão de octal para decimal
		case 2:
			char doctal[100];
            int odecimal;
			cout << "==============================================\n";
            cout << "        CONVERSÃO DE OCTAL PARA DECIMAL       \n";
            cout << "==============================================\n";
            cout << "Informe o número octal que deseja converter:\n";
            cin >> doctal;
            odecimal = octToDec(doctal);
            cout << "==============================================\n";
            cout << "O número octal " << doctal <<" em decimal é: " << odecimal <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 3 com o cálculo da conversão de hexadecimal para decimal
		case 3:
			char dhexadecimal[100];
            int hdecimal;
			cout << "==============================================\n";
            cout << "     CONVERSÃO DE HEXADECIMAL PARA DECIMAL    \n";
            cout << "==============================================\n";
            cout << "Informe o número hexadecimal que deseja converter:\n";
            cin >> dhexadecimal;
            hdecimal = hexToDec(dhexadecimal);
            cout << "==============================================\n";
            cout << "O número hexadecimal " << dhexadecimal <<" em decimal é: " << hdecimal <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 4 com o cálculo da conversão de decimal para binario
		case 4:
            int dbinario2, bdecimal2;
			cout << "==============================================\n";
            cout << "       CONVERSÃO DE DECIMAL PARA BINÁRIO      \n";
            cout << "==============================================\n";
            cout << "Informe o número decimal que deseja converter:\n";
            cin >> bdecimal2;
            dbinario2 = decToBin(bdecimal2);
            cout << "==============================================\n";
            cout << "O número decimal " << bdecimal2 <<" em binário é: " << dbinario2 <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 5 com o cálculo da conversão de octal para binario
		case 5:
            char boctal[100];
            int obinario;
			cout << "==============================================\n";
            cout << "       CONVERSÃO DE OCTAL PARA BINÁRIO      \n";
            cout << "==============================================\n";
            cout << "Informe o número octal que deseja converter:\n";
            cin >> boctal;
            obinario = octToBin(boctal);
            cout << "==============================================\n";
            cout << "O número octal " << boctal <<" em binário é: " << obinario <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 6 com o cálculo da conversão de hexadecimal para binario
		case 6:
			char bhexadecimal[100];
            int hbinario;
			cout << "==============================================\n";
            cout << "       CONVERSÃO DE HEXADECIMAL PARA BINÁRIO      \n";
            cout << "==============================================\n";
            cout << "Informe o número hexadecimal que deseja converter:\n";
            cin >> bhexadecimal;
            hbinario = hexToBin(bhexadecimal);
            cout << "==============================================\n";
            cout << "O número hexadecimal " << bhexadecimal <<" em binário é: " << hbinario <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 7 com o cálculo da conversão de binario para octal
		case 7:
		    char obinario2[100];
            int boctal2;
			cout << "==============================================\n";
            cout << "       CONVERSÃO DE BINÁRIO PARA OCTAL      \n";
            cout << "==============================================\n";
            cout << "Informe o número binário que deseja converter:\n";
            cin >> obinario2;
            boctal2 = binToOct(obinario2);
            cout << "==============================================\n";
            cout << "O número binário " << obinario2 <<" em octal é: " << boctal2 <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 8 com o cálculo da conversão de decimal para octal
		case 8:
            int doctal2, odecimal2;
			cout << "==============================================\n";
            cout << "       CONVERSÃO DE DECIMAL PARA OCTAL      \n";
            cout << "==============================================\n";
            cout << "Informe o número decimal que deseja converter:\n";
            cin >> odecimal2;
            doctal2 = decToOct(odecimal2);
            cout << "==============================================\n";
            cout << "O número decimal " << odecimal2 <<" em octal é: " << doctal2 <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 9 com o cálculo da conversão de hexadecimal para octal
		case 9:
			printf("CONVERSÃO DE HEXADECIMAL PARA OCTAL \n\n");
            char ohexadecimal2[100];
			int hoctal2;
			cout << "==============================================\n";
            cout << "      CONVERSÃO DE HEXADECIMAL PARA OCTAL     \n";
            cout << "==============================================\n";
            cout << "Informe o número hexadecimal que deseja converter:\n";
            cin >> ohexadecimal2;
            hoctal2 = hexToOct(ohexadecimal2);
            cout << "==============================================\n";
            cout << "O número hexadecimal " << ohexadecimal2 <<" em octal é: " << hoctal2 <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 10 com o cálculo da conversão de binário para hexadecimal
		case 10:
			printf("CONVERSÃO DE BINÁRIO PARA HEXADECIMAL \n\n");
			char hbinario2[100];
			char* bhexadecimal2;
			cout << "==============================================\n";
            cout << "     CONVERSÃO DE BINÁRIO PARA HEXADECIMAL    \n";
            cout << "==============================================\n";
            cout << "Informe o número binário que deseja converter:\n";
            cin >> hbinario2;
            bhexadecimal2 = binToHex(hbinario2);
            cout << "==============================================\n";
            cout << "O número binário " << hbinario2 <<" em hexadecimal é: " << bhexadecimal2 <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 11 com o cálculo da conversão de decimal para hexadecimal
		case 11:
			int hdecimal2;
			char* dhexadecimal2;
			cout << "==============================================\n";
            cout << "     CONVERSÃO DE DECIMAL PARA HEXADECIMAL    \n";
            cout << "==============================================\n";
            cout << "Informe o número decimal que deseja converter:\n";
            cin >> hdecimal2;
            dhexadecimal2 = decToHex(hdecimal2);
            cout << "==============================================\n";
            cout << "O número decimal " << hdecimal2 <<" em hexadecimal é: " << dhexadecimal2 <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 12 com o cálculo da conversão de octal para hexadecimal
		case 12:
			printf("CONVERSÃO DE OCTAL PARA HEXADECIMAL \n\n");

			char hoctal3[100];
			char* ohexadecimal3;
			cout << "==============================================\n";
            cout << "     CONVERSÃO DE OCTAL PARA HEXADECIMAL    \n";
            cout << "==============================================\n";
            cout << "Informe o número decimal que deseja converter:\n";
            cin >> hoctal3;
            ohexadecimal3 = octToHex(hoctal3);
            cout << "==============================================\n";
            cout << "O número octal " << hoctal3 <<" em hexadecimal é: " << ohexadecimal3 <<"\n";
            cout << "==============================================\n";
		break;

		//caso a opção digitada não exista, informar ao usuário para digitar uma opção válida
		default:
			printf("Favor informar uma opção válida de conversão!");
	}
}
//FIM BLOCO PRINCIPAL
/////////////////////////////////


