#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, hundred, fifty, twenty, ten, five, two, one, remain;
    cin >> n;
    cout << n << endl;
    remain = n % 100;
    hundred = (n - remain)/100;
    n = remain;
    remain = n % 50;
    fifty = (n - remain)/50;
    n = remain;
    remain = n % 20;
    twenty = (n - remain)/20;
    n = remain;
    remain = n % 10;
    ten = (n - remain)/10;
    n = remain;
    remain = n % 5;
    five = (n - remain)/5;
    n = remain;
    remain = n % 2;
    two = (n - remain)/2;
    n = remain;
    remain = n % 1;
    one = (n - remain)/1;
    cout << hundred << " nota(s) de R$ 100,00" << endl;
    cout << fifty << " nota(s) de R$ 50,00" << endl;
    cout << twenty << " nota(s) de R$ 20,00" << endl;
    cout << ten << " nota(s) de R$ 10,00" << endl;
    cout << five << " nota(s) de R$ 5,00" << endl;
    cout << two << " nota(s) de R$ 2,00" << endl;
    cout << one << " nota(s) de R$ 1,00" << endl;
    return 0;
}
