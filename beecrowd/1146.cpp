#include <iostream>
 
using namespace std;
 
int main() {
    int n = 1;
    while(n > 0){
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            cout << i;
            if(i == n){
                cout << endl;
            }
            else
                cout << " ";
        }
    }
    return 0;
}
