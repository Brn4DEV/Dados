#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <stack> //incluir pilha
#include <queue> //incluir fila
#include <list> //incluir listas

using namespace std;
/*

struct:
tipo de variaveis.
função que pode criar dentro da struct.


resumo: class e struct e bem parecido.

recomendo utilizar class para projetos mais atuais com atualizações frequente por se comportar bem melhor.
*/
//struct carro {
//	string nome = "marea";
//	string cor = "Prata";
//	int potencia = 358;
//	int velmax = 280;
//
//};
class carro {
private:

public:
	string nome; 
	string cor;
	int potencia;
	int velmax;
};
int main()
{
	carro car1; //variaveis de structs / class.

	cout << "Digite aqui o Nome Do seu carro: ";
	cin >> car1.nome;

	cout << "Meu Carro E um: " << car1.nome << "\n\n";

	cout << "cor Do seu carro: ";
	cin >> car1.cor;

	cout << "A cor Dele e: " << car1.cor << "\n\n";

	cout << "Potencia do seu carro: ";
	cin >> car1.potencia;

	if (car1.potencia > 300)
	{
		cout << "CARALHO!!! LEGAL SEU CARRO COM " << car1.potencia << "CV De Roda." << "\n\n";
	}
	else {
		cout << "Acho que Voce Precisa Melhorar Seu Carro. :(" << "\n\n";
	}


	cout << "Velocidade Maxima do seu carro: ";
	cin >> car1.velmax;
	if (car1.potencia > 300)
	{
		cout << "CARALHO!!! Velocidade Maxima: " << car1.velmax << "KM / H" << "\n\n";
	}
	else {
		cout << "nao corre mais, ate minha bicicleta anda mais que isso. :(" << "\n";
	}

	



	cout << "\n\n";
	system("pause");
    return 0;
}


