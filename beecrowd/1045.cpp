#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    double arr[3] = {a, b, c};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n, greater<int>());
    
    a = arr[0];
    b = arr[1];
    c = arr[2];
    if(a >= (b + c)){
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }
    if((a*a) == ((b*b) + (c*c))){
        cout << "TRIANGULO RETANGULO" << endl;
        return 0;
    }
    if((a*a) > ((b*b) + (c*c)))
        cout << "TRIANGULO OBTUSANGULO" << endl;
    if((a*a) < ((b*b) + (c*c)))
        cout << "TRIANGULO ACUTANGULO" << endl;
    if(a == b && b == c)
        cout << "TRIANGULO EQUILATERO" << endl;
    else if ((a == b) || (a == c) || (b == c))
        cout << "TRIANGULO ISOSCELES" << endl;
    return 0;
}
