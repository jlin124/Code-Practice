#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double r;
    double n = 3.14159;
    cin >> r;
    cout << "A=" << fixed << setprecision(4) << (n*(r*r)) << endl;
    return 0;
}
