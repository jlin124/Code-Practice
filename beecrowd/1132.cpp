#include <iostream>
 
using namespace std;
 
int main() {
    int x, y, max, min;
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
    int i = min, sum = 0;
    while(i <= max){
        if(i % 13 != 0)
            sum += i;
        i++;
    }
    cout << sum << endl;
    return 0;
}
