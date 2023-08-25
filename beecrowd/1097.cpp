#include <iostream>
 
using namespace std;
 
int main() {
    int max = 7;
    for(int i = 1; i <= 9; i += 2){
        int j = max;
        cout << "I="<< i << " J=" << j << endl;
        cout << "I="<< i << " J=" << j-1 << endl;
        cout << "I="<< i << " J=" << j-2 << endl;
        max += 2;
    }
    return 0;
}
