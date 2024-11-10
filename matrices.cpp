/*Sea M una matriz de enteros de “n” filas por “m” columnas, ambas positivas y menores
que 10. Realice un programa en C++ que permita :
a) Solicitar el ingreso de n y m, según las restricciones indicadas.
b) Ingresar cada uno de los valores de la matriz.
c) Mostrar, para cada fila, la suma de sus valores, y el menor valor almacenado.
d) Mostrar, para cada columna, el promedio de sus valores y el mayor valor.
e) El mayor valor almacenado en toda la Matriz, indicando en que fila y columna se
encuentra.*/
#include<iostream>
#include<limits.h>
#include<locale.h>
#include<stdlib.h>
#define filas 4 // Definimos macros
#define columnas 5
using namespace std;
int main() {
	float** Matriz;
	int * masvotado = new int, * sumafc = new int;
	*sumafc = 0;
	Matriz = new float* [filas];
	setlocale(LC_ALL, "Spanish");
	for (int i = 0; i < filas; i++)
		Matriz[i] = new float[columnas];
	for (int i = 0; i < filas; i++)
		for (int j = 0; j < columnas; j++)
		{
			cout << "Digite la cantidad de votos para el candidato " << j + 1 << " en la mesa de votación " << i + 1 << ": ";
			cin >> Matriz[i][j];
			*sumafc = *sumafc + Matriz[i][j];
		}
	cout << endl;
	cout << "Candidatos| Mesa de votación" << endl;
	cout << "1 " << "2 " << "3 " << "4 " << "5 " << "|" << endl;
	cout << "----------|" << endl;
	cout << endl;
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
			cout << Matriz[i][j] << " ";
		int k = 0;
		cout << "|       " << k++ << endl;
	}
	cout << endl;
	for (int i = 0; i < filas; i++)
	delete[] Matriz[i];
	delete[] Matriz;
	cin.get();
	return 0;
}
