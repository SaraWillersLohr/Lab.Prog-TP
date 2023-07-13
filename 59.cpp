#include <iostream>
#include <string>

using namespace std;

int ContarVocales(string frase);

int main() {
    string frase;
    cout << "Ingrese una frase inspiradora: ";
    getline(cin, frase);
    cout <<"Las vocales de la frase son "<< ContarVocales(frase) <<" en total "<< endl;
    return 0;
}

int ContarVocales(string frase) {
    int vocal = 0;
    for (int i = 0; i < frase.size(); i++) {
        char c = (frase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocal++;
        }
    }
    return vocal;
}