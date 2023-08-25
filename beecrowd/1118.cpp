#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double score, avg;
    int count = 0, desc = 0;
    while(count != 3){
        cin >> score;
        if(score < 0 || score > 10)
            cout << "nota invalida" << endl;
        else{
            avg += score;
            count++;
        }
        if(count == 2)
            cout << fixed << setprecision(2) << "media = " << (float)avg/2 << endl;
        while(count == 2){
            cout << "novo calculo (1-sim 2-nao)" << endl;
            scanf("%d", &desc);
            if(desc == 1){
                count = 0;
                avg = 0;
            }
            if(desc == 2){
                count = 3;
            }
        }
    }
    return 0;
}
