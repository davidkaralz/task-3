#include <iostream>
#include <string>
#include <time.h>
#include <math.h>
using namespace std;

double media;
double desviacion = 0;

void initialize_random_array(double *random_array, const int size){
	srand(static_cast<signed>(time(nullptr)));
	for (int i = 0; i < size; i++){
		*random_array = (rand() % 20 - 10);
		*random_array = *random_array / 10;
		cout << *random_array;
		if (i < size - 1){
			cout << ", ";
		}
		random_array++;
	}
}

double desviacion_estandar(double *random_array, const int size){

	for (int i = 0; i < size; i++){
		media+=*random_array;
		random_array++;
	}
	media = media / size;
	random_array -= (size);
	for (int i = 0; i < size; i++){
		desviacion=desviacion+pow(abs(*random_array-media),2);
		random_array++;		
	}
	desviacion = desviacion / size;
	desviacion = sqrt(desviacion);
	return desviacion;
}

int main() {
	const int size=100;
	double random_array[size];
	cout << "Se generaran 100 valores entre 1 y -1: \n";
	system("pause");
	initialize_random_array(random_array, size);
	cout << "\nSe calculara la desviacion estandar de este conjunto de numeros: \n";
	system("pause");
	desviacion_estandar(random_array,size);
	cout << "\nLa desviacion estandar es igual a: " << desviacion << "\n";
	system("pause");
	return 0;
}