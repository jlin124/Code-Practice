#include <iostream>
 
using namespace std;
 
int main() {
    int n = 0;
    cin >> n;
    for(int i = 1; i < 11; i++){
        cout << i << " x " << n << " = " << i*n << endl;
    }
    return 0;
}
