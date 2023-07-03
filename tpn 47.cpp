#include <iostream>
using namespace std;
bool EsAbundante (int a);


int main()
{
  string  msj="NO ES ABUNDANTE";
  int n1,i;
  
    cout << "Ingrese hasta qué número quiere ver los números abundantes" << endl;
    cin >> n1;
    for(i=1;i<=n1;i++)
    {
    
    if( EsAbundante (i))
    {
     cout<<i<<"-";
    }
    }
    
  
    return 0;
}
bool EsAbundante (int a)
{
  int n=0;
  bool flag=false;
  for (int i = 1; i <= a / 2; i++)
    {
      if (a % i == 0)
	{
	  n =n+i;
	}
    }
    
    if (n>a)
    {
        flag=true;
    }
return flag;
}
