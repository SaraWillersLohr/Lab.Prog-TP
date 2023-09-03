#include <iostream>
using namespace std;
//tp 69.2
string DevolverCadena(string cadena, string caracter);

int main(){
  string cadena;
	string caracter;
	cout <<"Ingrese una cadena"<<endl;
	getline(cin,cadena);
	cout <<"Ingrese un caracter"<<endl;
	cin>>caracter;
	cout<<"Resultado:  "<<DevolverCadena (cadena, caracter)<<endl;
	return 0;
}

string DevolverCadena(string cadena, string caracter){
    int contador=0;
    string cadenafinal;
    
    for (int i=0; i<cadena.size();i++){
        
        contador ++;
        cadenafinal+=cadena[i];
        
        if(contador == 1 and i != cadena.size () - 1){
            
            cadenafinal += caracter;
            contador = 0;
	
        }
        
        
    }
    
    return cadenafinal;
    
}