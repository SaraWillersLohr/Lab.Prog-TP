#include <bits/stdc++.h>
using namespace std;

string Geringoso (string f);

 
int
main ()
{
  
string frase;
  
cout << "Escribe la frase a traducir" << endl;
  
getline (cin, frase);
  
 
cout << "Asi queda la frase en geringoso:  " << Geringoso (frase) <<
    endl;
  
 
return 0;

 
}


 
string Geringoso (string f)
{
  
 
string c;
  
for (int i = 0; i < f.size (); i++)
    {
      
c += f[i];
      
if (f[i] == 'a' || f[i] == 'e' || f[i] == 'i' || f[i] == 'o'
	   || f[i] == 'u')
	{
	  
c += 'p';
	  
c += f[i];
	
}
    
}
  
return c;

}
