#include <bits/stdc++.h>
#include<vector>
using namespace std;

vector<int>Generarvector(vector<int> A, int n=1500);
vector<int>Sumavectores(vector<int> A, vector<int> B);
void MostrarVector(vector<int>C);



int main(){
	vector<int>A;
	vector<int>B;
	vector<int>C;
		
	int N;
	cout<<"Ingrese cantidad de elementos de los vectores:  "<<endl;
	cin>>N;
	
	A=Generarvector(A,N);
	B=Generarvector(B,N);
C=Sumavectores(A,B);
	
	MostrarVector(A);
	MostrarVector(B);
	MostrarVector(C);
	
	
	
	return 0;

}



vector<int>Generarvector(vector<int> a, int N){
	int i;

	int e;
	
	for(i=0;i<N;i++){
		
		
		e=rand()%1500;
		
		a.push_back(e);
	
		
	}
	
	return a;
	

	
}



vector<int> Sumavectores(vector<int>A, vector<int>B){
vector<int> vector1;
	int suma=0;
	
	//vector=A+B;
	for(int i=0;i<A.size();i++){
	
	suma =A[i]+ B[i];
	vector1.push_back(suma);
	
	}
	return vector1;
	
}

void MostrarVector(vector<int>C){
	
	int i;
	for(i=0; i<C.size(); i++){
		
			cout<<C[i]<<" / ";
		
	}
	
	cout<<endl;
	
}



