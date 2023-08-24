#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int n = 0;
    cin >> n;
    int c = 0, r = 0, s = 0, total = 0;
    int num = 0;
    char a;
    for(int i = 0; i < n; i++){
        scanf("%d %c", &num, &a);
        total += num;
        if(a == 'C')
            c += num;
        if(a == 'R')
            r += num;
        if(a == 'S')
            s += num;
    }
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    float cc, rr, ss;
    cc = (float)(c*100)/total;
    rr = (float)(r*100)/total;
    ss = (float)(s*100)/total;
    printf("Percentual de coelhos: %.2f %\n", cc);
    printf("Percentual de ratos: %.2f %\n", rr);
    printf("Percentual de sapos: %.2f %\n", ss);
    return 0;
}
