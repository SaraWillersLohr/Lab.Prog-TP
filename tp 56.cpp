#include <bits/stdc++.h>
using namespace std;

string ProcesaPalabra(string palabra);
int main() {
    string palabra;
    cout<<"ingrese una palabra"<<endl;
    getline(cin,palabra);
    cout<<ProcesaPalabra(palabra)<<endl;
    return 0;
}

string ProcesaPalabra(string palabra) {
    for (int i = 0; i < palabra.size(); i++) {
        if (palabra[i] == 'A' || palabra[i] == 'a') {
            palabra[i] = 'B';
        }
        if (palabra[i] == 'B' || palabra[i] == 'b') {
            palabra[i] = 'b';
        }
    }
    return palabra;
}