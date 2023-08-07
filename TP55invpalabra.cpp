#include<bits/stdc++.h>
using namespace std;

string InvertirPalabra(string palabra);

int main() {
    string palabra;
    cout<<"ingrese una palabra"<<endl;
    getline(cin,palabra);
    cout<<InvertirPalabra(palabra)<<endl;
    return 0;
}
string InvertirPalabra(string palabra) {
    int i;
    int c=0;
    int n=palabra.size()-1;
    char aux;
    for(i=0; i<palabra.size()/2; i++ ) {
        aux=palabra[i];
        palabra[i]=palabra[n-i];
        palabra[n-i]=aux;
    }
    return palabra;
}