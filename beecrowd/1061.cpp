#include <iostream>
 
using namespace std;


int main() {
 
    int w, x, y, z, total;
    int day, hr, min, sec, s1, s2;
    //add \n due to read issues otherwise
    scanf("Dia %d\n", &w);
    scanf("%d : %d : %d\n", &x, &y, &z);
    s1 = w*24*60*60 + x*60*60 + y *60 + z;
    scanf("Dia %d\n", &w);
    scanf("%d : %d : %d\n", &x, &y, &z);
    s2 = w*24*60*60 + x*60*60 + y *60 + z;
    
    total = s2 - s1;
    
    day = total/(24*60*60);
    total %= 24*60*60;
    hr = total / (60*60);
    total %= 60*60;
    min = total /60;
    total %= 60;
    sec = total;
    cout << day << " dia(s)" << endl;
    cout << hr << " hora(s)" << endl;
    cout << min << " minuto(s)" << endl;
    cout << sec << " segundo(s)" << endl;
    
    return 0;
}
