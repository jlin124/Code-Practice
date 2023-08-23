#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, hr, min, sec;
    cin >> n;
    hr = n / 3600;
    min = (n - (hr * 3600))/ 60;
    sec = n % 60;
    cout << hr << ":" << min << ":" << sec << endl;
    return 0;
}
