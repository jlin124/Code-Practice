#include <iostream>
 
using namespace std;
 
int main() {
    int n = 0, num = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        scanf("%i", &num);
        if(num == 0)
            cout << "NULL" << endl;
        else if((num % 2 == 0) && num > 0)
            cout << "EVEN POSITIVE" << endl;
        else if((num % 2 != 0) && num > 0)
            cout << "ODD POSITIVE" << endl;
        else if((num % 2 == 0) && num < 0)
            cout << "EVEN NEGATIVE" << endl;
        else
            cout << "ODD NEGATIVE" << endl;
    }
 
    return 0;
}
