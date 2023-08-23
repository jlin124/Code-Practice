#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    double ptop, mtop, bot;
    bot = 2.00 * a;
    ptop = (-(b) + sqrt((b*b) - (4.00 * a * c)));
    mtop = (-(b) - sqrt((b*b) - (4.00 * a * c)));
    mtop = mtop/bot;
    ptop = ptop/bot;
    if(isinf(ptop) || isnan(ptop) || isinf(mtop) || isnan(mtop)){
        cout << "Impossivel calcular" << endl;
        return 0;
    }
    else{
        cout << "R1 = " << fixed << setprecision(5) << ptop << endl;
        cout << "R2 = " << fixed << setprecision(5) << mtop << endl;
    }
    return 0;
}
