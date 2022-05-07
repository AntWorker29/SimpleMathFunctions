#include <iostream>
using namespace std;

int cmmdc1(int a, int b) {
 if (b == 0) return a;
 else return cmmdc1(b, a % b);
}

void factorial(int n, int& p,int& rez) {
 if (n == 0) p = 1;
 else
 {
 factorial(n - 1, p,rez);
 p *= n;
 cout <<"\n"<< p <<"\n";
 }
}

void putere(int n, int p, int rez) {
 for (int i = 1; i <= p; i++)
 rez *= n;
 cout << rez;
}

int main() {
 int a, b,nr;
 cout <<"Cel mai mare divizor comun al numerelor 42 si 36 este: "<< cmmdc1(42, 36) << "\n\n";
 cout << "Introduceti numar: ";
 cin >> nr;
 cout << "Aflarea factorialului numarului introdus: ";
 factorial(nr, a, b);
 cout << "\n\n";
 cout << "3 la puterea 6 este: ";
 putere(3, 6, 1);
 cin.get();
 cin.ignore();
}
