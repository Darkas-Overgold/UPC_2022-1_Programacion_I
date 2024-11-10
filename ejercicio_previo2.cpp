#include <cmath>
#include <conio.h>
#include <iomanip>
#include <iostream>
#include <locale.h>
using namespace std;
void title(){
	cout << "------------------------";
	cout << "\n|---->Ejercicio #2<----|";
	cout << "\n------------------------" << endl;
}
int ent_am()
{
	int t;
	do
	{
		cout << "Digite la Cantidad de términos:\t";
		cin >> t;
	} while (!(t >= 1 && 20 >= t));
	return t;
}
float ent_x()
{
	float x;
	do
	{
		cout << "Digite el Valor de x:\t";
		cin >> x;
	} while (!(x >= -2.5 && 2.5 >= x));
	return x;
}
float factorial(int s)
{
	long long st = 1;
	for (int k = 1; k <= s; k++)
	{
		st = st * k;
	}
	return st;
}float summatory(int t, float x)
{
	float addition = 0;
	for (int k = 1; k <= t; k++)
	{
		float num = pow(x,k);
		float den = factorial(k+2);
		addition += (pow(-1, k+1) * (num/den))*-1;
	}
	return addition;
}
int main()
{
	title();
	setlocale(LC_ALL,"Spanish");
	int t;
	float x;
	float addition;
	t = ent_am();
	x = ent_x();
	addition = summatory(t,x);
	cout << "La adición De los términos da como resultado:\t" << setprecision(4) << addition << endl;
	system("Pause");
	return 0;
}
