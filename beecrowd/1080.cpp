#include <iostream>
 
using namespace std;
 
int main() {
    int pos = 0, max = 0, n = 0;
    for(int i = 0; i < 100; i++){
        scanf("%d", &n);
        if(n > max){
            max = n;
            pos = i+1;
        }
    }
    cout << max << endl;
    cout << pos << endl;
    return 0;
}
