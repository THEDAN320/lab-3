#include <iostream>
#include <fstream>
#include <locale.h>
#include <cmath>
using namespace std;

double all(double n1,double n2,double n3){
    double P,S;
    P = (n1+n2+n3)/2;
    S = pow((P*(P-n1)*(P-n2)*(P-n3)),0.5);
    cout<<S<<"\n";
    return S;
}

int main(){
    setlocale(LC_ALL,"Russian");
    double n1,n2,n3,sum = 0;
    ifstream f1;
    f1.open("numbers.txt");
    
    while(!f1.eof()){
        f1>>n1;
        f1>>n2;
        f1>>n3;
        sum += all(n1,n2,n3);
   }
    f1.close();
    printf("%lf",sum);
}