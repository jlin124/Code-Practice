#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double score = 0, avg = 0;
    int count = 0;
    while(count != 2){
        scanf("%lf", &score);
        if(score > 0 && score <= 10){
            count++;
            avg += score;
        }
        else
            cout << "nota invalida" << endl;
    }
    cout << "media = " << fixed << setprecision(2) << avg/2 << endl;
    return 0;
}
