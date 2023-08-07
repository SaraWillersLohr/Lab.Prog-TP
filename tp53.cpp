#include <iostream>
using namespace std;
void ImprimirNumero(int i);
int main() {
    int i;
    ImprimirNumero(i);
    return 0;
}
void ImprimirNumero(int i) {
    for(int i=1; i<=500; i++) {
        cout<<i<<endl;
        if(i%4==0) {
            cout<<"(multiplo de 4)"<<endl;
        }
        if(i%9==0) {
            cout<<"(multiplo de 9)"<<endl;
        }
        if(i%5==0) {
            cout<<"----------------"<<endl;
        }
    }
}