#include <iostream>

using namespace std;
float ObtenerPromedio (int a, int b, int c);
string ObtenerMensaje (float promedio);
int
main ()
{
  int n1, n2, n3;

  cout << "Ingrese la primera nota: " << endl;
  cin >> n1;
  cout << "Ingrese la segunda nota: " << endl;
  cin >> n2;
  cout << "Ingrese la tercera nota: " << endl;
  cin >> n3;
  float promedio = ObtenerPromedio (n1, n2, n3);
  cout << ObtenerMensaje (promedio) << endl;
  return 0;
}

float
ObtenerPromedio (int a, int b, int c)
{
  float promedio;
  promedio = (a + b + c) / 3;
  return promedio;

}

string
ObtenerMensaje (float promedio)
{
  string msg;
  if (promedio < 7)
    {
      msg = "DesaprobC3";
    }
  if (promedio == 7)
    {
      msg = "AprobC3";
    }
  if (promedio > 7)
    {
      msg = "Excelente";
    }
  return msg;
}
