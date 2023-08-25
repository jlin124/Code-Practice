#include <iostream>
 
using namespace std;
 
int main() {
    int m = 1, n = 1;
    while(scanf("%d %d\n", &m, &n)== 2 && (m > 0) && (n > 0)){
        int sum = 0;
        if(n == m)
            cout << n << " Sum=" << n << endl;
        else if(n < m){
            for(int i = n; i <= m; i++){
                cout << i << " ";
                sum += i;
            }
            cout << "Sum=" << sum << endl;
        }
        else{
            for(int i = m; i <= n; i++){
                cout << i << " ";
                sum += i;
            }
            cout << "Sum=" << sum << endl;
        }
    }
    return 0;
}
