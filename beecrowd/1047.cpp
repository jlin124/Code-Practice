#include <iostream>
using namespace std;

int main(){
    int ih, im, fh, fm, hr, min;
    cin >> ih >> im >> fh >> fm;
    int initial = (ih * 60) + im;
    int final = (fh * 60) + fm;
    int duration = final - initial;
    
    if(final <= initial){
        duration = duration + (24*60);
    }
    hr = duration/60;
    min = duration % 60;
    
    cout << "O JOGO DUROU " << hr << " HORA(S) E " << min << " MINUTO(S)" << endl;
    return 0;
}
