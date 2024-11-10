#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int ent_num() {
    setlocale(LC_ALL,"Spanish");
    int x;
    cout << "------------------------";
    cout << "\n|---->Ejercicio #4<----|";
    cout << "\n------------------------" << endl;
    do {
        cout << "Digite un Número (1-10): ";
        cin >> x;
    } while (x < 1 || x>10);
    return x;
}
void draw_tr(int n) {
    for (int i = 0; i <= (n * 2) - 2; i++)
    {   
        char a = 65;
        for (int j = 0; j <= (n * 2) - 2; j++)
        {
            if (i == 0 || i == j || i == (n * 2 - 2) || i + j == (n * 2 - 2)) {
                cout << " " << a << " ";
            }
            else
                cout << "   ";
            a++;
        }
        cout << endl;
    }
}
int main() {
    int n = ent_num();
    draw_tr(n);
    system("Pause");
}
