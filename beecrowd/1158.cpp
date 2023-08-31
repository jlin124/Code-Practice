#include <iostream>
 
using namespace std;
 
int main() {
    int n, x, y, sum;
    cin >> n;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        sum = 0;
        if(x%2 == 0)
            x += 1;
        sum +=x;
        for(int i = 0; i < y-1; i++){
            x += 2;
            sum +=x;
        }
        cout << sum << endl;
    }
    return 0;
}
