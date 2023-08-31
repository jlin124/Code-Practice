#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int n = 1;
    int sum = 0;
    int count = 0;
    while(scanf("%d", &n) == 1){
        if(n < 0){
            break;
        }
        count++;
        sum += n;
    }
    cout << fixed << setprecision(2) << (float)sum/(float)count << endl;
    return 0;
}
