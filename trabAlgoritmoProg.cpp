//bibliotecas que possui declara��es de fun��es �teis para entrada e sa�da de dados
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//bibliotecas que permite usar determinadas fun��es matem�ticas
#include <math.h>
//biblioteca que permite imprimir as strings com acentua��o
#include <locale.h>
//biblioteca para usar a fun��o strlen
#include <string.h>
#include <string>

////////////////////////////////
//BLOCOS DE CONVERS�O
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
        bin[i] = rem + '0'; // converte o d�gito para caractere
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
        oct[i] = rem + '0'; // converte o d�gito para caractere
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
            hex[i] = rem + '0'; // converte o d�gito para caractere
        } else {
            hex[i] = rem - 10 + 'A'; // converte o d�gito para caractere hexadecimal
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
//FIM BLOCOS DE CONVERS�O
////////////////////////////////

/////////////////////////////////
//BLOCO PRINCIPAL
using namespace std;
int main(){
	//definindo qual idioma o programa vai utilizar
	setlocale(LC_ALL, "portuguese");
	//menu que mostra ao usu�rio quais convers�es ele pode fazer
	cout << "==============================================\n";
    cout << "           Conversor de Bases Num�ricas        \n";
    cout << "==============================================\n";
    cout << "SELECIONE A CONVERS�O QUE DESEJA FAZER:\n\n";
    cout << "1- Bin�rio para Decimal\n";
    cout << "2- Octal para Decimal\n";
    cout << "3- Hexadecimal para Decimal\n";
    cout << "4- Decimal para Bin�rio\n";
    cout << "5- Octal para Bin�rio\n";
    cout << "6- Hexadecimal para Bin�rio\n";
    cout << "7- Bin�rio para Octal\n";
    cout << "8- Decimal para Octal\n";
    cout << "9- Hexadecimal para Octal\n";
    cout << "10- Bin�rio para Hexadecimal\n";
    cout << "11- Decimal para Hexadecimal\n";
    cout << "12- Octal para Hexadecimal\n\n";
    cout << "==============================================\n";
	//recebe qual convers�o o usu�rio quer fazer
	int conversao;
	cout <<"DIGITE A OP��O DESEJADA:  ";
	cin >>conversao;
	cout << "==============================================\n";
	//comando que limpa tudo que foi mostrado na tela antes
	//system("clear||cls");

	//switch case para identificar qual bloco de convers�o o usu�rio selecionou
	switch(conversao){
		//bloco 1 com o c�lculo da convers�o de binario para decimal
		case 1:
		    char dbinario[100];
            int bdecimal;
			cout << "==============================================\n";
            cout << "       CONVERS�O DE BIN�RIO PARA DECIMAL      \n";
            cout << "==============================================\n";
            cout << "Informe o n�mero bin�rio que deseja converter:\n";
            cin >> dbinario;
            bdecimal = binToDec(dbinario);
            cout << "==============================================\n";
            cout << "O n�mero bin�rio " << dbinario <<" em decimal �: " << bdecimal <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 2 com o c�lculo da convers�o de octal para decimal
		case 2:
			char doctal[100];
            int odecimal;
			cout << "==============================================\n";
            cout << "        CONVERS�O DE OCTAL PARA DECIMAL       \n";
            cout << "==============================================\n";
            cout << "Informe o n�mero octal que deseja converter:\n";
            cin >> doctal;
            odecimal = octToDec(doctal);
            cout << "==============================================\n";
            cout << "O n�mero octal " << doctal <<" em decimal �: " << odecimal <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 3 com o c�lculo da convers�o de hexadecimal para decimal
		case 3:
			char dhexadecimal[100];
            int hdecimal;
			cout << "==============================================\n";
            cout << "     CONVERS�O DE HEXADECIMAL PARA DECIMAL    \n";
            cout << "==============================================\n";
            cout << "Informe o n�mero hexadecimal que deseja converter:\n";
            cin >> dhexadecimal;
            hdecimal = hexToDec(dhexadecimal);
            cout << "==============================================\n";
            cout << "O n�mero hexadecimal " << dhexadecimal <<" em decimal �: " << hdecimal <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 4 com o c�lculo da convers�o de decimal para binario
		case 4:
            int dbinario2, bdecimal2;
			cout << "==============================================\n";
            cout << "       CONVERS�O DE DECIMAL PARA BIN�RIO      \n";
            cout << "==============================================\n";
            cout << "Informe o n�mero decimal que deseja converter:\n";
            cin >> bdecimal2;
            dbinario2 = decToBin(bdecimal2);
            cout << "==============================================\n";
            cout << "O n�mero decimal " << bdecimal2 <<" em bin�rio �: " << dbinario2 <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 5 com o c�lculo da convers�o de octal para binario
		case 5:
            char boctal[100];
            int obinario;
			cout << "==============================================\n";
            cout << "       CONVERS�O DE OCTAL PARA BIN�RIO      \n";
            cout << "==============================================\n";
            cout << "Informe o n�mero octal que deseja converter:\n";
            cin >> boctal;
            obinario = octToBin(boctal);
            cout << "==============================================\n";
            cout << "O n�mero octal " << boctal <<" em bin�rio �: " << obinario <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 6 com o c�lculo da convers�o de hexadecimal para binario
		case 6:
			char bhexadecimal[100];
            int hbinario;
			cout << "==============================================\n";
            cout << "       CONVERS�O DE HEXADECIMAL PARA BIN�RIO      \n";
            cout << "==============================================\n";
            cout << "Informe o n�mero hexadecimal que deseja converter:\n";
            cin >> bhexadecimal;
            hbinario = hexToBin(bhexadecimal);
            cout << "==============================================\n";
            cout << "O n�mero hexadecimal " << bhexadecimal <<" em bin�rio �: " << hbinario <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 7 com o c�lculo da convers�o de binario para octal
		case 7:
		    char obinario2[100];
            int boctal2;
			cout << "==============================================\n";
            cout << "       CONVERS�O DE BIN�RIO PARA OCTAL      \n";
            cout << "==============================================\n";
            cout << "Informe o n�mero bin�rio que deseja converter:\n";
            cin >> obinario2;
            boctal2 = binToOct(obinario2);
            cout << "==============================================\n";
            cout << "O n�mero bin�rio " << obinario2 <<" em octal �: " << boctal2 <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 8 com o c�lculo da convers�o de decimal para octal
		case 8:
            int doctal2, odecimal2;
			cout << "==============================================\n";
            cout << "       CONVERS�O DE DECIMAL PARA OCTAL      \n";
            cout << "==============================================\n";
            cout << "Informe o n�mero decimal que deseja converter:\n";
            cin >> odecimal2;
            doctal2 = decToOct(odecimal2);
            cout << "==============================================\n";
            cout << "O n�mero decimal " << odecimal2 <<" em octal �: " << doctal2 <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 9 com o c�lculo da convers�o de hexadecimal para octal
		case 9:
			printf("CONVERS�O DE HEXADECIMAL PARA OCTAL \n\n");
            char ohexadecimal2[100];
			int hoctal2;
			cout << "==============================================\n";
            cout << "      CONVERS�O DE HEXADECIMAL PARA OCTAL     \n";
            cout << "==============================================\n";
            cout << "Informe o n�mero hexadecimal que deseja converter:\n";
            cin >> ohexadecimal2;
            hoctal2 = hexToOct(ohexadecimal2);
            cout << "==============================================\n";
            cout << "O n�mero hexadecimal " << ohexadecimal2 <<" em octal �: " << hoctal2 <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 10 com o c�lculo da convers�o de bin�rio para hexadecimal
		case 10:
			printf("CONVERS�O DE BIN�RIO PARA HEXADECIMAL \n\n");
			char hbinario2[100];
			char* bhexadecimal2;
			cout << "==============================================\n";
            cout << "     CONVERS�O DE BIN�RIO PARA HEXADECIMAL    \n";
            cout << "==============================================\n";
            cout << "Informe o n�mero bin�rio que deseja converter:\n";
            cin >> hbinario2;
            bhexadecimal2 = binToHex(hbinario2);
            cout << "==============================================\n";
            cout << "O n�mero bin�rio " << hbinario2 <<" em hexadecimal �: " << bhexadecimal2 <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 11 com o c�lculo da convers�o de decimal para hexadecimal
		case 11:
			int hdecimal2;
			char* dhexadecimal2;
			cout << "==============================================\n";
            cout << "     CONVERS�O DE DECIMAL PARA HEXADECIMAL    \n";
            cout << "==============================================\n";
            cout << "Informe o n�mero decimal que deseja converter:\n";
            cin >> hdecimal2;
            dhexadecimal2 = decToHex(hdecimal2);
            cout << "==============================================\n";
            cout << "O n�mero decimal " << hdecimal2 <<" em hexadecimal �: " << dhexadecimal2 <<"\n";
            cout << "==============================================\n";
		break;

		//bloco 12 com o c�lculo da convers�o de octal para hexadecimal
		case 12:
			printf("CONVERS�O DE OCTAL PARA HEXADECIMAL \n\n");

			char hoctal3[100];
			char* ohexadecimal3;
			cout << "==============================================\n";
            cout << "     CONVERS�O DE OCTAL PARA HEXADECIMAL    \n";
            cout << "==============================================\n";
            cout << "Informe o n�mero decimal que deseja converter:\n";
            cin >> hoctal3;
            ohexadecimal3 = octToHex(hoctal3);
            cout << "==============================================\n";
            cout << "O n�mero octal " << hoctal3 <<" em hexadecimal �: " << ohexadecimal3 <<"\n";
            cout << "==============================================\n";
		break;

		//caso a op��o digitada n�o exista, informar ao usu�rio para digitar uma op��o v�lida
		default:
			printf("Favor informar uma op��o v�lida de convers�o!");
	}
}
//FIM BLOCO PRINCIPAL
/////////////////////////////////


