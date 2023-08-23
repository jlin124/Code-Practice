#include <iostream>
#include <array>
using namespace std;

int main(){
    int n1, count;
    for(int i = 1; i < 6; i++){
        scanf("%d", &n1);
        if(n1 %2 == 0)
            count++;
    }
    cout << count << " valores pares" << endl;
    return 0;
}
