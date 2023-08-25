#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y, sum =0;
        scanf("%d %d", &x, &y);
        if(x < y){
            x += 1;
            while(x < y){
                if(x % 2 != 0){
                    sum += x;
                }
                x++;
            }
        }
        else{
            y += 1;
            while(y < x){
                if(y % 2 != 0){
                    sum += y;
                }
                y++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
