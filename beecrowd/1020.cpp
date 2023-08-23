#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, yr, mon, day;
    cin >> a;
    yr = a/365;
    a = a - (yr * 365);
    mon = a/30;
    day = a - (mon * 30);
    cout << yr << " ano(s)" << endl;
    cout << mon << " mes(es)" << endl;
    cout << day << " dia(s)" << endl;
    return 0;
}
