#include <iostream>
 
using namespace std;
 
int main() {
    int x = 0, y = 0, count = 0;
    int min = 0, max = 0;
    scanf("%i %i", &x, &y);
    
    if(x < y){
        min = x;
        max = y;
    }
    else{
        min = y;
        max = x;
    }
    
    for(int i = min+1; i < max; i++){
        if((i % 2) != 0){
            count += i;
        }
    }
    cout << count << endl;
    return 0;
}
