#include <bits/stdc++.h>
using namespace std;

string DividirPalabra (string frase, string caracter);
int main(){
	string frase;
	string caracter;
	cout <<"Ingrese una frase"<<endl;
	getline(cin,frase);
	cout <<"Ingrese un caracter"<<endl;
	cin>>caracter;
	cout<<"Resultado:  "<<DividirPalabra (frase, caracter)<<endl;
	return 0;
	
}

string DividirPalabra (string frase, string caracter){
for (int i=0; i<frase.size();i++){
	
	if(frase[i]==' '){
		frase[i]=caracter[0];
	}
}
	return frase;
}
