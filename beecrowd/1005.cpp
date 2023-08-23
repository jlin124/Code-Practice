#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    long double a, b;
    cin >> a >> b;
    a = a * 3.5;
    b = b * 7.5;
    long double ab = a + b;
    cout << "MEDIA = " << fixed << setprecision(5) << ab/11 << endl;
    return 0;
}
