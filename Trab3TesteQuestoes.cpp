#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");

	int num,soma=0;

	do{
		cout<<"Informe um número (-1 = ENCERRAR): ";
		cin>>num;
		if(num > 5){
			soma += num;
		}
		cout<<"----------------------------------\n";
	}while(num!=-1);
	cout<<"A soma dos números maiores que 5 é: "<<soma<<"\n";

}
