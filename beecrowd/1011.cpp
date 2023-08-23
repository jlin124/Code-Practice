#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double r;
    cin >> r;
    double pi = 3.14159;
    double sphere = (4.0/3) * pi * (r*r*r);
    cout << "VOLUME = " << fixed << setprecision(3) << sphere << endl;
    return 0;
}
