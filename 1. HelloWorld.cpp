#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
    cout <<"Witaj swiecie\n";
    cout << "\n INTS " << endl;
    int a,b,c;
    a = 7;
    b = 6/3;
    c = a + b;
    cout << "Dodawanie: " << c << endl;
    c = a - b;
    cout << "Odejmowanie: " << c << endl;
    c = a * b;
    cout << "Iloczyn: " << c << endl;
    c = a / b;
    cout << "Iloraz: " << c << endl;
    c = a % b;
    cout << "Reszta: " << c << endl;

    cout << "\n FLOATS " << endl;
    float x, y, z;
    x = 5.6;
    y = 2.5;
    z = x + y;
    cout << "Dodawanie: " << z << endl;
    z = x - y;
    cout << "Odejmowanie: " << z << endl;
    z = x * y;
    cout << "Iloczyn: " << z << endl;
    z = x / y;
    cout << "Iloraz: " << z << endl;
}