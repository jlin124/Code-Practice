#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int n = 0;
    double num1 = 0, num2 = 0, num3 = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        scanf("%lf %lf %lf", &num1, &num2, &num3);
        cout << fixed << setprecision(1) << ((num1*2) + (num2*3) + (num3*5))/(2+3+5) << endl;
    }
 
    return 0;
}
