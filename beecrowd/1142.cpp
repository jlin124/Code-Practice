#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int i = 1;
    while(i <= n*4){
        cout << i << " " << i+1 << " " << i+2 << " " << "PUM" << endl;
        i += 4;
    }
    return 0;
}
