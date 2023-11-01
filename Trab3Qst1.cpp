//FEITO POR: Maisa Gabriela Rodrigues da Silva
//RA: 12119897
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	int num, pos=0, neg=0, i;

	for(i=0; i<5; i++){
		cout<<"Informe um número inteiro: ";
		cin>>num;

		if(num>=0){
			pos++;
		}else{
			neg++;
		}
	}
	cout<<"---------------------------------\n";
	cout<<"Você informou "<<pos<<" números positivos. \n";
	cout<<"Você informou "<<neg<<" números negativos.";
}
