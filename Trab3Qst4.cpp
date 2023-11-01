//FEITO POR: Maisa Gabriela Rodrigues da Silva
//RA: 12119897
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");

	int num,soma=0;

	do{
		cout<<"Informe um número (-1 = ENCERRAR): ";
		cin>>num;
		if(num != -1){
			soma += num;
		}
		cout<<"A soma dos números informados é: "<<soma<<"\n";
		cout<<"----------------------------------\n";
	}while(num!=-1);

}
