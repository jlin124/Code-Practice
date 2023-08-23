#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n1, n2, n3, n4;
    double exam;
    cin >> n1 >> n2 >> n3 >> n4;
    cin >> exam;
    double avg = ((n1)*2 + (n2)*3 + (n3)*4 + n4)/10;
    cout << "Media: " << fixed << setprecision(1) << avg << endl;
    if(avg >= 7.0)
        cout << "Aluno aprovado." << endl;
    else if(avg >= 5.0 && avg <= 6.9)
        cout << "Aluno em exame." << endl;
    else
        cout << "Aluno reprovado." << endl;
    if(exam > 0){
        cout << "Nota do exame: " << fixed << setprecision(1) << exam << endl;
        avg = (avg + exam)/2;
        if(avg >= 5.0)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;
        cout << "Media final: " << fixed << setprecision(1) << avg << endl;
    }
    return 0;
}
