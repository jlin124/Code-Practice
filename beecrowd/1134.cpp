#include <iostream>
 
using namespace std;
 
int main() {
    int x = 0, al = 0, gas = 0, dis = 0;
    while(x != 4){
        scanf("%d", &x);
        if(x == 1)
            al++;
        if(x == 2)
            gas++;
        if(x == 3)
            dis++;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << al << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << dis << endl;
    return 0;
}
