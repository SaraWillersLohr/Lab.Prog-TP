#include <iostream>
using namespace std;
bool EsPerfecto (int a);


int
main ()
{
  string msj = "NO ES PERFECTO";
  int n1, i;

  cout << "Ingrese hasta qué número desea ver los perfectos" << endl;
  cin >> n1;
  for (i = 1; i <= n1; i++)
    {

      if (EsPerfecto (i))
	{
	  cout << i << "-";
	}
    }

  //cout<<msj<<endl;
  return 0;
}

bool
EsPerfecto (int a)
{
  int n = 0;
  bool flag = false;
  for (int i = 1; i <= a / 2; i++)
    {
      if (a % i == 0)
	{
	  n = n + i;
	}
    }

  if (n == a)
    {
      flag = true;
    }
  return flag;
}
