#include <bits/stdc++.h>
using namespace std;
bool EsElegante (string nombre);

int
main ()
{
  string n;
  cout << "Ingrese el nombre (en letras minusculas)" << endl;
  cin >> n;
  bool o=EsElegante (n);
  if (o == false)
    {

      cout << "Lo sentimos, tu nombre no es elegante"
	<< endl;

    }
  else
    {
      cout << "Buenas noticias! tu nombre es elegante" << endl;
    }
  return 0;
}


bool
EsElegante (string nombre)
{
  bool es = false;
  if (nombre[0] == 'a') 
    {
        if (nombre[nombre.size() - 1] == 'a' )
        {
            return true;
        }
    }
    return false;
}
