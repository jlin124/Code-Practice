#include <iostream>
using namespace std;
int main(){
    string in1, in2, in3;
    cin >> in1 >> in2 >> in3;
    
    if(in1 == "vertebrado"){
        if(in2 == "ave"){
            if(in3 == "carnivoro"){
                cout << "aguia" << endl;
            }
            else
                cout << "pomba" << endl;
        }
        else{
            if(in3 == "onivoro")
                cout << "homem" << endl;
            else
                cout << "vaca" << endl;
        }
    }
    else{
        if(in2 == "inseto"){
            if(in3 == "hematofago")
                cout << "pulga" << endl;
            else
                cout << "lagarta" << endl;
        }
        else{
            if(in3 == "hematofago")
                cout << "sanguessuga" << endl;
            else
                cout << "minhoca" << endl;
        }
    }
    
    
    return 0;
}
