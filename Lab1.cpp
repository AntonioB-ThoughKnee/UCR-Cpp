#include <iostream>
using namespace std;

void problema1(double primerMasa, double segundaMasa){
    double tension = (2*primerMasa*segundaMasa);
    tension = tension/(primerMasa+segundaMasa)*(9.8); 
    cout << "La tensión es de: " + to_string(tension) << endl;
}

int main(){
    cout << "Problema 1:" <<endl;
    problema1(5,9);
}