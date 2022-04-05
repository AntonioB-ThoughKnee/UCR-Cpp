#include <iostream>
using namespace std;

void problema1(double primerMasa, double segundaMasa){
    double tension = (2*primerMasa*segundaMasa);
    tension = tension/(primerMasa+segundaMasa)*(9.8); 
    cout << "La tensión es de: " + to_string(tension) << endl;
}


float myRrandom(int a, int b){
  srand(time(0));
  return a + static_cast <float> (rand()) / static_cast <float> (RAND_MAX/(b-a));
}

void problema5(int a, int b){
 
    double pregunta = myRrandom(a,b);
    cout << to_string(pregunta) << endl;
}

void problema6(int numero){
    string lista = "";
    int numeroPrimo = 2;
    bool pregunta = false;
    for (int contador = 1; contador < numero + 1; contador++){
        pregunta = false;

        if (numeroPrimo == 2){
            lista = lista + to_string(contador) + " -> " + to_string(numeroPrimo) + "\n";
            numeroPrimo = numeroPrimo + 1;
        }
        else{
            while (pregunta == false){
                for (int contador2 = 2; contador2 < numeroPrimo; contador2++){

                    if (numeroPrimo % contador2 == 0){
                        contador2 = numeroPrimo;
                        numeroPrimo++;
                    }
                    else{
                        if(contador2 == numeroPrimo-1){
                            lista = lista + to_string(contador) + " -> " + to_string(numeroPrimo) + "\n";
                            pregunta = true;
                            numeroPrimo++; 
                            contador2 = numeroPrimo;
                        }
                    }
                }
            }
        }
    }
    cout << lista << endl;
}

int main(){
    cout << "Problema 1:" <<endl;
    problema1(5,9);

    cout << "\nProblema 5:" << endl;
    problema5(5,10);

    cout << "\nProblema 6:" << endl;
    problema6(5);

}