#include <bits/stdc++.h>

 using namespace std;

 
bool Esgrito (string frase);

 
 
int main () {
  
 
string frase;
  
 
 
cout << "Ingrese una frase: ";
  
 
getline (cin, frase);
  
 
 
 
cout << Esgrito (frase) << endl;
  
 
if (Esgrito (frase))
    
    {
      
 
cout << "ESGRITO" << endl;
    
 
}
  
  else
    
    {
      
 
cout << "escrito" << endl;
    
 
}
  
 
 
return 0;

 
}


 
 
 
bool Esgrito (string frase) 
{
  
if (frase.back () == '!')
    {
      
return true;
    
}
  else
    {
      
return false;
    
}

}


 
 
 
 
 
