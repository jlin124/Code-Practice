#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int j = 2;
    float s = 1.00;
    for(int i = 3; i < 39; i+=2){
        s += (float)i/(float)j;
        j *= 2;
    }
    printf("%.2f\n",s);
    return 0;
}
