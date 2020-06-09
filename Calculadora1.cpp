#include <iostream>
#define e 2.71828182846

using namespace std;
int main() {
	float num1,num2,resultado,base,expoente;
	int resposta;

while(1){                               //Caso nao digite um numero das opcoes volte para o


	cout << "Escreva um numero para a operacao\n"       //Opcoes
		 <<	"(1) Soma\n"
	  	 << "(2) Subtracao\n"
	  	 << "(3) Multiplicacao\n"
	 	 << "(4) Divisao\n"
		 << "(5) Potencia\n"
	 	 << "(6) Exponencial\n";
		cin  >> resposta;

	switch(resposta)
	{
		case 1:                                                 //Soma
			cout << "Digite o 1o numero: ";
			cin  >>num1;
				while(1){
				cout << num1 << " + ";
				cin  >> num2;
				num1=num1+num2;
	 			}
				break;

		case 2:														//Subtração
			cout << "Digite o 1o numero: ";
			cin  >>num1;
				while(1){
				cout << num1 << " - ";
				cin  >> num2;
				num1=num1-num2;
				}
				break;

		case 3:                                                         //multiplicação
			cout << "Digite o 1o numero: ";
			cin  >>num1;
				while(1){
				cout << num1 << " * ";
				cin  >> num2;
				num1=num1*num2;
				}
				break;

		case 4:                                                         //Divisão
			cout << "Digite o 1o numero: ";
			cin  >>num1;
			while(1){
			cout << num1 << " / ";
			cin  >> num2;
			num1=num1/num2;
			}
				break;

		case 5:                                                         //Potencia
			cout<<"base = ";
			cin>>base;
			cout<<"expoente = ";
			cin>>expoente;

			resultado = base;

		for(int i=1; i<expoente; i++)           //cria a variavel i e deixa o valor dela igual a 1 ; o comendo vai se repetir  ; sempre que esse comando executar i=i+1
		{
			resultado = resultado*base;     // EX: 2^3      2=2*2       4=4*2 = 8
		}                                   // i=1          i=2         i=3
		cout << resultado << endl;
				break;


		case 6:                             //Expoenciação
			cout <<"EXP()";
			cin  >>expoente;
   			base=e;

			resultado = base;

   			for(int i=1; i<expoente; i++)           //cria a variavel i e deixa o valor dela igual a 1 ; o comendo vai se repetir  ; sempre que esse comando executar i=i+1
			{
				resultado = resultado*base;     // EX: 2^3      2=2*2       4=4*2 = 8
			}                                   // i=1          i=2         i=3
			cout << resultado << endl;
				break;
		default:                                //Ca
			cout <<"Numero invalido\n\n";
		break;
		}
	}
	return 0;
}

