#include <iostream>
 
using namespace std;
 
int main() {
    int pass;
    while(scanf("%d", &pass) && pass != 2002){
        cout << "Senha Invalida" << endl;
    }
    cout << "Acesso Permitido" << endl;
    return 0;
}
