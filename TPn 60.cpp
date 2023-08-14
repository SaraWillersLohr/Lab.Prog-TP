#include <bits/stdc++.h>

using namespace std;

string BuscarPosicion (string frase, string letra);

int
main ()
{
  string frase;
  string letra;
  cout << "Ingrese una frase: ";
  getline (cin, frase);
  cout << "Ingrese la letra de la que quiere buscar su posicion: " << endl;
  cin >> letra;
  cout << "La letra se encuentra en la/s posicion/es:  " <<
    BuscarPosicion (frase, letra) << endl;
  return 0;
}

string
BuscarPosicion (string frase, string letra)
{
  string p;
  for (int i = 0; i < frase.size (); i++)
    {
      if (frase[i] == letra[0])
	{

	  p += to_string (i) + "";
	}


    }

  if (p.empty ())
    {
      p =
	"Lo lamento, la letra no se encontro en la frase. Puedes intentarlo con otra letra.";
    }

  return p;
}
