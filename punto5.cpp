#include <iostream>
#include <string>
using namespace std;

const int tam = 4;
int M1[tam][tam], M2[tam][tam], M3[tam][tam];

void Lectura(int M[tam][tam]){
	for (int i = 0; i < tam; i++){
		for (int j = 0; j < tam; j++){
			cin >> M[i][j];
		}
	}
}

void Imprimir(int valores[tam][tam]){
	
	for (int i = 0; i < tam; i++){
		for (int j = 0; j < tam; j++){
			cout<< valores[i][j]<<"  ";
		}
		cout << "\n";
	}
}

void Hadamard(int Ma[tam][tam], int Mb[tam][tam]){
	cout << "\nEl producto Hadamard entre estas matrices es: \n";
	for (int i = 0; i < tam; i++){
		for (int j = 0; j < tam; j++){
			M3[i][j] = Ma[i][j] * Mb[i][j];
		}
	}
	Imprimir(M3);
}

int main() {
	cout << "Ingrese la primera matriz de 4x4 (por filas)\n";
	Lectura(M1);
	cout << "Ingrese la segunda matriz de 4x4 (por filas)\n";
	Lectura(M2);
	cout << "\nLa primera matriz fue: \n";
	Imprimir(M1);
	cout << "\nLa segunda matriz fue: \n";
	Imprimir(M2);
	Hadamard(M1, M2);

	system("pause");
	return 0;
}