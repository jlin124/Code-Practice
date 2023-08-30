#include <iostream>
 
using namespace std;
 
int main() {
    int n, hold = 0;
    cin >> n;
    int fib = 0, x = 1;
    cout << fib << " " << x << " ";
    for(int i = 2; i < n; i++){
        hold = fib + x;
        fib = x;
        x = hold;
        cout << hold;
        if(i != n-1)
            cout << " ";
    }
    cout << endl;
    return 0;
}
