/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
   
  
#include <iostream>
  using namespace std;

float ConvertirYardas (float pies);

float ConvertirPulgadas (float pies);

float ConvertirCm (float pies);

float ConvertirMetros (float pies);

 
int
main ()
{
  
int n;
  
cout << "Ingrese la medida (en pies)" << endl;
  
cin >> n;
  
cout << n << " pies son: " << ConvertirYardas (n) << " yardas." << endl;
  
cout << n << " pies son: " << ConvertirPulgadas (n) << " pulgadas." <<
    endl;
  
cout << n << " pies son: " << ConvertirCm (n) << " centímetros." << endl;
  
cout << n << " pies son: " << ConvertirMetros (n) << " metros." << endl;
  
return 0;

}


 
float
ConvertirYardas (float pies)
{
  
float yardas;
  
yardas = pies/3;
  


return yardas;
    
}


 
float
ConvertirPulgadas (float pies)
{
  
float pulgadas;
  
pulgadas = pies*12;
  
 
return pulgadas;

 
}


 
 
 
 
float
ConvertirCm (float pies)
{
  
float pulgadas = ConvertirPulgadas (pies);
  
float cm = pulgadas * 2.54;
  
 
return cm;

 
}


 
 
float
ConvertirMetros (float pies)
{
  
float cm = ConvertirCm (pies);
  
float metros = cm / 100;
  
 
return metros;

 
 
 
}


 
 
 
 
