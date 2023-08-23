#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a, b, c;
    double pi = 3.14159;
    cin >> a >> b >> c;
    double tri = (a * c)/2;
    double cir = pi*(c*c);
    double trap = ((a + b)/2)*c;
    double squ = b*b;
    double rec = a * b;
    cout << "TRIANGULO: " << fixed << setprecision(3) << tri << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << cir << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trap << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << squ << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << rec << endl;
    return 0;
}
