#include <iostream>
#include <string>
using namespace std;

int Num[10];

void Lectura(){
	for (int i = 0; i < 10; i++){
		cin >> Num[i];
	}
}

void Imprimir(int valores[10]){
	
	for (int i = 0; i < 10; i++){
		cout << valores[i] ;
		if (i < 9){
			cout << ", ";	
		}
	}
	cout << "]\n";
}

void swap(int *n1, int*n2){
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void cambio(int numeros[10]){
	for (int i = 0; i < (10 / 2); i++){
		swap(numeros[i], numeros[9 - i]);
	}
}


int main() {
	cout << "Ingrese 10 numeros enteros \n";
	Lectura();
	cout << "Los numeros ingresados sin organizar: [";
	Imprimir(Num);
	cambio(Num);
	cout << "Los numeros ingresados intercambiados: [";
	Imprimir(Num);
	system("pause");
	return 0;
}