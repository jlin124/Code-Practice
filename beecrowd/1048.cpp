#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double salary;
    cin >> salary;
    double per;
    if((salary >= 0) && (salary < 400.01))
        per = 0.15;
    else if((salary > 400.00) && (salary < 800.01))
        per = 0.12;
    else if((salary > 800.00) && (salary < 1200.01))
        per = 0.10;
    else if((salary > 1200.00) && (salary < 2000.01))
        per = 0.07;
    else
        per = 0.04;

    cout << "Novo salario: " << fixed << setprecision(2) << ((salary*per) + salary) << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << salary*per << endl;
    cout << "Em percentual: " << setprecision(0) << per*100 << " %" << endl;
    return 0;
}
