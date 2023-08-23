#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double n;
    int hun, fif, twe, ten, fiv, two, one, fifc, tfc, tenc, fivc, onec;
    cin >> n;
    double remainder = fmod(n, 100.00);
    hun = (n - remainder)/100.00;
    n = remainder;
    remainder = fmod(n, 50.00);
    fif = (n - remainder)/50.00;
    n = remainder;
    remainder = fmod(n, 20.00);
    twe = (n - remainder)/20.00;
    n = remainder;
    remainder = fmod(n, 10.00);
    ten = (n - remainder)/10.00;
    n = remainder;
    remainder = fmod(n, 5.00);
    fiv = (n - remainder)/5.00;
    n = remainder;
    remainder = fmod(n, 2.00);
    two = (n - remainder)/2.00;
    cout << "NOTAS:" << endl;
    cout << hun << " nota(s) de R$ 100.00" << endl;
    cout << fif << " nota(s) de R$ 50.00" << endl;
    cout << twe << " nota(s) de R$ 20.00" << endl;
    cout << ten << " nota(s) de R$ 10.00" << endl;
    cout << fiv << " nota(s) de R$ 5.00" << endl;
    cout << two << " nota(s) de R$ 2.00" << endl;
    n = remainder;
    remainder = fmod(n, 1.00);
    one = (n - remainder)/1.00;
    cout << "MOEDAS:" << endl;
    cout << one << " moeda(s) de R$ 1.00" << endl;
    n = remainder;
    remainder = fmod(n, 0.50);
    fifc = (n - remainder)/0.50;
    cout << fifc << " moeda(s) de R$ 0.50" << endl;
    n = remainder;
    remainder = fmod(n, 0.25);
    tfc = (n - remainder)/0.25;
    cout << tfc << " moeda(s) de R$ 0.25" << endl;
    n = remainder;
    remainder = fmod(n, 0.10);
    tenc = (n - remainder)/0.10;
    cout << tenc << " moeda(s) de R$ 0.10" << endl;
    n = remainder;
    remainder = fmod(n, 0.05);
    fivc = (n - remainder)/0.05;
    cout << fivc << " moeda(s) de R$ 0.05" << endl;
    n = remainder + 0.001;
    onec = n/0.01;
    cout << onec << " moeda(s) de R$ 0.01" << endl;
    return 0;
}
