//FEITO POR: Maisa Gabriela Rodrigues da Silva
//RA: 12119897
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	int num, somapos=0, somaneg=0, i;

	for(i=0; i<5; i++){
		cout<<"Informe um n�mero inteiro: ";
		cin>>num;

		if(num>=0){
			somapos+=num;
		}else{
			somaneg+=num;
		}
	}
	cout<<"---------------------------------\n";
	cout<<"A soma dos n�meros positivos �: "<<somapos<<"\n";
	cout<<"A soma dos n�meros negativos �: "<<somaneg;
}
