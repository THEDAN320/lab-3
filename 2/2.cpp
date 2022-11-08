#include <iostream>
#include <fstream>
#include <locale.h>
#include <vector>
using namespace std;

double all(double n1, double n2, double n3) {
    double P, S;
    P = (n1 + n2 + n3) / 2;
    S = pow((P * (P - n1) * (P - n2) * (P - n3)), 0.5);
    cout << S << "\n";
    return S;
}

vector<double> get_v() {
    int number;
    vector<double> all;
    ifstream f1;
    f1.open("number.txt");

    while (!f1.eof()) {
        f1 >> number;
        all.push_back(number);
    }
    f1.close();

    f1.open("number.txt");
    f1 >> number;
    all.push_back(number);

    f1.close();
    return all;

}

int main() {
    setlocale(LC_ALL, "Russian");
    vector<int> all;

    all = get_v();
    int x = 0;

    for (int i = x; i < 3; i++) {
        all()
        x++;
    }

}
