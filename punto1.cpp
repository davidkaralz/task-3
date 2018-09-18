#include <iostream>
#include <string>
using namespace std;

string Frase;
char codigo[2] = {'.','-'};
char *cod = codigo;

void Codigo(char letra){
	switch (letra)
	{
	case 'A':
		cout << *cod << *(cod + 1);
		break;
	case 'B':
		cout << *(cod + 1);
		for (int i = 0; i < 3; i++){
			cout << *cod;
		}
		break;
	case 'C':
		cout << *cod << *(cod + 1) << *cod << *(cod + 1);
	case 'D':
		cout << *(cod + 1)<<*cod<<*cod;
		break;
	case 'E':
		cout << *cod;
		break;
	case 'F':
		cout << *cod << *cod << *(cod + 1) << *cod;
		break;
	case 'G':
		cout << *(cod + 1) << *(cod + 1) << *cod;
		break;
	case 'H':
		for (int i = 0; i < 4; i++){
			cout << *cod;
		}
		break;
	case 'I':
		for (int i = 0; i < 2; i++){
			cout << *cod;
		}
		break;
	case 'J':
		cout << *cod;
		for (int i = 0; i < 3; i++){
			cout << *(cod+1);
		}
		break;
	case 'K':
		cout << *(cod + 1) << *cod << *(cod + 1);
		break;
	case 'L':
		cout << *cod << *(cod + 1) << *cod << *cod;
		break;
	case 'M':
		cout << *(cod + 1) << *(cod + 1);
		break;
	case 'N':
		cout << *(cod + 1) << *cod;
		break;
	case 'O':
		for (int i = 0; i < 3; i++){
			cout << *(cod+1);
		}
		break;
	case 'P':
		cout << *cod << *(cod + 1) << *(cod + 1) << *cod;
		break;
	case 'Q':
		cout << *(cod + 1) << *(cod + 1) << *cod << *(cod + 1);
		break;
	case 'R':
		cout << *cod << *(cod + 1) << *cod;
		break;
	case 'S':
		for (int i = 0; i < 3; i++){
			cout << *cod;		
		}
		break;
	case 'T':
		cout << *(cod + 1);
		break;
	case 'U':
		for (int i = 0; i < 2; i++){
			cout << *cod;
		}
		cout << *(cod + 1);
		break;
	case 'V':
		for (int i = 0; i < 3; i++){
			cout << *cod;
		}
		cout << *(cod + 1);
		break;
	case 'W':
		cout << *cod;
		for (int i = 0; i < 2; i++){
			cout << *(cod+1);
		}
		break;
	case 'X':
		cout << *(cod+1);
		for (int i = 0; i < 2; i++){
			cout << *cod;
		}
		cout << *(cod + 1);
		break;
	case 'Y':
		cout << *(cod + 1) << *cod;
		for (int i = 0; i < 2; i++){
			cout << *(cod+1);
		}
		break;
	case 'Z':
		for (int i = 0; i < 2; i++){
			cout << *(cod + 1);
		}
		for (int i = 0; i < 2; i++){
			cout << *cod;
		}
		break;
	default:
		break;
	}	
}

int main() {
	cout << "introduzca una frase en mayuscula\n";
	getline(cin, Frase);
	cout << "\n";
	for (char c : Frase){
		if (c == ' '){
			cout << "/";
		}
		else
		{
			Codigo(c);
			cout << " ";
		}	
	}
	system("pause");
	return 0;
}