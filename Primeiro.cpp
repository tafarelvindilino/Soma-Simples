#include <iostream>



using namespace std;

//Observe o trecho de c�digo abaixo: int INDICE = 13, SOMA = 0, K = 0;
//Enquanto K < INDICE fa�a { K = K + 1; SOMA = SOMA + K; } 
//Imprimir(SOMA);
//Ao final do processamento, qual ser� o valor da vari�vel SOMA?



int main(int argc, char** argv) {
	
	int INDICE = 13;
	int SOMA = 0;
	int K = 0;
	
	while (K < INDICE) {
		K = K+1; 
		SOMA = SOMA + K;
	}
	
	cout << SOMA << endl;
	
	return 0;
}
