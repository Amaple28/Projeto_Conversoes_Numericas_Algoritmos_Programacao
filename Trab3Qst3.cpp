//FEITO POR: Maisa Gabriela Rodrigues da Silva
//RA: 12119897
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");

	int num;

	do{
		cout<<"Informe um número (0 = ENCERRAR): ";
		cin>>num;

		if(num%2==0){
			cout<<"Número par: "<< num<<"\n";
		}
		cout<<"----------------------\n";
	}while(num!=0);

}
