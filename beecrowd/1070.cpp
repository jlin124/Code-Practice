#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < 12; i++){
        if(n % 2 == 1)
            cout << n << endl;
        n++;
    }
 
    return 0;
}
