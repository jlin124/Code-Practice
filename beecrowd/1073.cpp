#include <iostream>
 
using namespace std;
 
int main() {
    int num = 0;
    cin >> num;
    for(int i = 1; i <= num; i++){
        if(i % 2 == 0){
            cout << i << "^2 = " << i*i << endl;
        }
    }
    return 0;
}
