#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, c , d;
    scanf("%lf %lf", &a, &b);
    scanf("%lf %lf", &c, &d);
    double x = c - a;
    double y = d - b;
    double dis = sqrt((x*x) + (y * y));
    cout << fixed << setprecision(4) << dis << endl;
    return 0;
}
