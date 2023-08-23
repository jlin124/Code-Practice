#include <iostream>
using namespace std;

int main(){
    int st, et;
    cin >> st >> et;
    if(st == et)
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    else if(et > st)
        cout << "O JOGO DUROU " << et-st << " HORA(S)" << endl;
    else
        cout << "O JOGO DUROU " << (24-st)+et << " HORA(S)" << endl;
    return 0;
}
