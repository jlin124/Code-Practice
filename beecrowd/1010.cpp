#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main(){
    double a, b, a1, b1, c, c1;
    scanf("%lf %lf %lf", &a, &b, &c);
    scanf("%lf %lf %lf", &a1, &b1, &c1);
    double d = b * c;
    double d1 = b1 * c1;
    cout << "VALOR A PAGAR: R$ " <<fixed << setprecision(2) << d + d1 << endl;
    return 0;
}
