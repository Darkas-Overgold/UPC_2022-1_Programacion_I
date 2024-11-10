#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int ent_num() {
    setlocale(LC_ALL,"Spanish");
    int x;
    cout << "------------------------";
    cout << "\n|---->Ejercicio #3<----|";
    cout << "\n------------------------" << endl;
    do {
        cout << "Digite un Número (1-10): ";
        cin >> x;
    } while (x < 1 || x > 10);
    return x;
}
void draw_tr(int n) {
    char a = 64;
    for (int i = 0; i < n*2-1; i++)
    {
        for (int j = 0; j <= (n*2-2)*2; j++)
        {
            if (i == 0 || i == j || j == (n * 2 - 2) || i + j == (n * 2 - 2) * 2) {
                cout << " " << char(a + 1) << " ";
            }
            else
                cout << "   ";
        }
        cout << endl;
        a++;
    }
}
int main() {
    int n = ent_num();
    draw_tr(n);
    system("Pause");
}
