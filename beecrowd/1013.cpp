#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int g = (a + b + abs(a - b))/2;
    int g1 = (b + c + abs(b - c))/2;
    if(g > g1)
        cout << g << " eh o maior" << endl;
    else
        cout << g1 << " eh o maior" << endl;
    return 0;
}
