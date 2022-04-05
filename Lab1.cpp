#include <iostream>
using namespace std;

void problema1(double primerMasa, double segundaMasa){
    double tension = (2*primerMasa*segundaMasa);
    tension = tension/(primerMasa+segundaMasa)*(9.8); 
    cout << "La tensión de la cuerda es de: " + to_string(tension) << endl;
}

void p2_efficiency(float miles, float gallons)
{
	float efficiency = miles/gallons;
	float l_every_hundred_km = (gallons*3.785 / (miles*1.609344)) * 100;
	std::cout <<"La eficiencia es "<<efficiency<<"mi/gal, igual a "
	<<l_every_hundred_km<<"l /km\n";
}

void p3_height(float feet, float inches)
{
	float result = inches*2.54 + feet*30.48;
	std::cout << inches << "  pulgadas  y " << feet 
	<< "  pies es igual a " << result << " cm\n";

}

void p4_british(float p, float c, int l)
{
	float result = (c/20) + (p/240) + l/1;
	std::cout <<p<<" d(peniques) "<<c<<" s(cheniques) "<<l
	<<" l(libras) es igual a "<<result<< "l en el sistema monetario actual\n";
}

float myRrandom(int a, int b){
  srand(time(0));
  return a + static_cast <float> (rand()) / static_cast <float> (RAND_MAX/(b-a));
}

void problema5(int a, int b){
 
    double pregunta = myRrandom(a,b);
    cout << "Un número al azar entre " + to_string(a) +
    " y " + to_string(b) + " es: " + to_string(pregunta) << endl;
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
    cout << "Problema 1:" << endl;
    problema1(5,9);

    cout << "\nProblema 2:" << endl;
    p2_efficiency(394.5707, 15.059444);

    cout << "\nProblema 3:" << endl;
	p3_height(6, 5);

    cout << "\nProblema 4:" << endl;
	p4_british(6, 10, 20);

    cout << "\nProblema 5:" << endl;
    problema5(5,10);

    cout << "\nProblema 6:" << endl;
    problema6(5);

}