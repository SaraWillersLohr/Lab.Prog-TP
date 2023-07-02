#include <iostream>
using namespace std;
bool EsPrimo (int a);


int
main ()
{
  int n1;

  cout << "Ingrese un número" << endl;
  cin >> n1;

      if (EsPrimo (n1))
	{
	  cout << n1 << " es primo";
	}
	else{
	    cout <<n1<<" no es primo"<<endl;
	}
    

  //cout<<msj<<endl;
  return 0;
}

bool EsPrimo(int a) {
    if (a <= 1) {
        return false;
    }

    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return false;
        }
    }

    return true;
}
  