#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    a = a * 2;
    b = b * 3;
    c = c * 5;
    double abc = a + b + c;
    cout << "MEDIA = " << fixed << setprecision(1) << abc/10 << endl;
    return 0;
}
