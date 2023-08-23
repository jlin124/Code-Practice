#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, b;
    double c;
    cin >> a >> b >> c;
    cout << "NUMBER = " << a << endl;
    double bc = b * c;
    cout << "SALARY = U$ " << fixed << setprecision(2) << bc << endl;
    return 0;
}
