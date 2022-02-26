#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int Sumar(int,int);
int Restar(int,int);
int Multiplicar(int,int);
int Dividir(int,int);



int main()
{
    
    cout << "-------- Calculadora C++ --------" << endl;
    cout << "---------------------------------" << endl;
    
    int num1;
    cout << "Introduce el primer digito: ";
    cin >> num1;
    int num2;
    cout << "Introduce el segundo digito: ";
    cin >> num2;
    cout << "---------------------------------" << endl;
    int operador;
    cout << "Sumar (1), Restar (2), Multiplicar (3) o Dividir (4)?: ";
    cin >> operador;
    
   