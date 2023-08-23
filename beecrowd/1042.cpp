#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    int num[3];
    cin >> num[0] >> num[1] >> num[2];
    int copy[3];
    copy_n(num, 3, copy);
    int n = sizeof(num) / sizeof(num[0]);
    sort(num, num + n);
    for(int i = 0; i < n; i++)
        cout << num[i] << endl;
    cout << endl;
    
    for(int i = 0; i < n; i++)
        cout << copy[i] << endl;
    return 0;
}
