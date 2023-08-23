#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n1, avg;
    int count;
    for(int i = 0; i < 6; i++){
        scanf("%lf", &n1);
        if(n1 >= 0){
            count++;
        }
    }
    cout << count << " valores positivos" << endl;
    return 0;
}
