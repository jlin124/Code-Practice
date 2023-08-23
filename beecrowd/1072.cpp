#include <iostream>
 
using namespace std;
 
int main() {
    int n = 0, num = 0, in = 0, out = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        scanf("%i", &num);
        if(num >= 10 && num <= 20){
            in++;
        }
        else
            out++;
    }
    
    cout << in << " in" << endl;
    cout << out << " out" << endl;
 
    return 0;
}
