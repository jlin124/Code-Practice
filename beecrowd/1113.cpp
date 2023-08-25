#include <iostream>
 
using namespace std;
 
int main() {
    int x, y;
    while(scanf("%d %d", &x, &y) == 2 && x != y){
        if(x > y)
            cout << "Decrescente" << endl;
        else
            cout << "Crescente" << endl;
    }
    return 0;
}
