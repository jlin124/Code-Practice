#include <iostream>
 
using namespace std;
 
int main() {
    int a, n, sum = 0;
    scanf("%d %d", &a, &n);
    while(n <= 0){
        scanf("%d", &n);
    }
    for(int i = 0; i < n; i++){
        sum += a+i;
    }
    cout << sum << endl;
    return 0;
}
