#include <iostream>
#include <string>
using namespace std;

 
string InsertarPunto (string frase);

 
int
main () 
{
  
string f;
  
 
cout << "Ingrese una cadena: " << endl;
  
getline (cin, f);
  
 
cout << InsertarPunto (f) << endl;
  
 
return 0;

}


 
string InsertarPunto (string frase) 
{
  
string resultado;
  
int contador = 0;
  
 
for (int i = 0; i < frase.size (); i++)
    
    {
      
resultado += frase[i];
      
contador++;
      
 
if (contador == 3 and i != frase.size () - 1)
	
	{
	  
resultado += '.';
	  
contador = 0;
	
}
    
}
  
 
return resultado;

}


