#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double val;
    cin >> val;
    
    if((val > 0) && (val <= 2000.00))
        cout << "Isento" << endl;
    else if((val > 2000.00) && (val <= 3000.00))
        cout << "R$ " << fixed << setprecision(2) << ((val - 2000)*0.08) << endl;
    else if((val > 3000.00) && (val <= 4500.00))
        cout << "R$ " << fixed << setprecision(2) << ((val - 3000)*0.18) + 80 << endl;
    else
        cout << "R$ " << fixed << setprecision(2) << ((val - 4500)*0.28) + 80 + 270<< endl;
    
    return 0;
}
