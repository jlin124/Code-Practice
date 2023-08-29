#include <iostream>
 
using namespace std;
 
int main() {
    int x, z;
    cin >> x;
    cin >> z;
    while(z <= x){
        cin >> z;
    }
    int sum = x;
    int i = 0;
    while(sum < z){
        i++;
        sum += x + i;
    }
    i++;
    cout << i << endl;
    return 0;
}
