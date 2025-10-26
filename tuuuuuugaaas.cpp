#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string obat[5][3] = {
       {"Paracetamol", "2", "5000"},
        {"Amoxcilin", "3", "1500"},
        {"Promag", "5", "1000"},
        {"CTM", "10", "2000"},
        {"GG", "150", "1500"}
    };

    for (int i = 0; i < 3; i++) {
        cout << obat[i][0] << "\t\t" << obat[i][1] << "\t" << obat[i][2] << endl;
    }

    return 0;
}