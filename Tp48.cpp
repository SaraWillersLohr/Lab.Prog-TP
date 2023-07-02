/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
float CalcularPeso (float peso);

int
main ()
{
  int p, pl;
  cout << "Ingrese su peso en la tierra" << endl;
  cin >> p;
  pl = ((p / 9, 81) * 1622);
  cout << "Su peso en la luna es de " << CalcularPeso (p) << "kg" << endl;
//Peso en la Luna = (Peso en la Tierra/9,81) * 1.622
  return 0;
}

float
CalcularPeso (float peso)
{
  float pesoluna = ((peso / 9.81) * 1, 62);

  return pesoluna;

}
