#include <iostream>
 
using namespace std;
 
int main() {
    int x, y;
    while(scanf("%d %d", &x, &y) == 2 && x != NULL && y != NULL){
        if(x > 0 && y > 0)
            cout << "primeiro" << endl;
        else if(x < 0 && y > 0)
            cout << "segundo" << endl;
        else if(x < 0 && y < 0)
            cout << "terceiro" << endl;
        else
            cout << "quarto" << endl;
    }
    return 0;
}
