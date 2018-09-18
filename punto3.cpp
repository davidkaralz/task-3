#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int Num[10],mayor,menor;

void Lectura(){
	for (int i = 0; i < 10; i++){
		cin >> Num[i];
	}
}

void Imprimir(int valores[10]){
	cout << "Los numeros ingresados fueron: [";
	for (int i = 0; i < 10; i++){
		cout << valores[i] ;
		if (i < 9){
			cout << ", ";	
		}
	}
	cout << "]\n";
}

int Maximo(int max[10]){
	mayor = max[0];
	for (int i = 0; i < 10; i++){
		if (mayor <= max[i]){
				mayor = max[i];
			}
	}
	return mayor;
}

int Minimo(int min[10]){
	menor = min[0];
	for (int i = 0; i < 10; i++){
		if (menor >= min[i]){
			menor = min[i];
		}
	}
	return menor;
}


int main() {
	cout << "Ingrese 10 numeros enteros \n";
	Lectura();
	Imprimir(Num);
	Maximo(Num);
	Minimo(Num);
	cout << "El mayor es: " << mayor << "\n";
	cout << "El menor es: " << menor << "\n";
	system("pause");
	return 0;
}