#include <iostream>
 
using namespace std;
 
int main() {
    int grenais = 0, inter = 0, gremio = 0, empates = 0, x, y, input = 1;
    while(input == 1){
        scanf("%d %d", &x, &y);
        if(x > y)
            inter++;
        if(x < y)
            gremio++;
        if(x == y)
            empates++;
        grenais++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        scanf("%d", &input);
    }
    cout << grenais << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empates << endl;
    if(inter > gremio)
        cout << "Inter venceu mais" << endl;
    else if(inter < gremio)
        cout << "Gremio venceu mais" << endl;
    else
        cout << "Nao houve vencedor" << endl;
    return 0;
}
