#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string a;
    double b, c;
    cin >> a >> b >> c;
    double bonus = c * 0.15;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << b + bonus << endl;
    return 0;
}
