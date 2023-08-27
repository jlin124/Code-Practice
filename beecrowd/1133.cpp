#include <iostream>
 
using namespace std;
 
int main() {
    int x, y, min, max;
    cin >> x;
    cin >> y;
    if(x > y){
        max = x;
        min = y;
    }
    else{
        max = y;
        min = x;
    }
    int i = min + 1;
    while(i < max){
        if((i%5 == 2) || (i%5 == 3))
            cout << i << endl;
        i++;
    }
    return 0;
}
