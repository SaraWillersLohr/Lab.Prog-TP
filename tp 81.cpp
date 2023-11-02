#include<bits/stdc++.h>
using namespace std;

vector<int>GenerarVector(vector<int> A , int N);

string DentaduraPerfecta(vector<int>A, vector<int>B);

void MostrarVector(vector<int>A);

int main(){
	
	vector<int>  A={1,3,2,3,2,2};
	vector<int>B;

string Dientes;
	int N;
	
	cout<<"Ingrese cantidad de elementos del vector: "<<endl;
	cin>>N;
	

	B=GenerarVector(B, N);
	
	Dientes=DentaduraPerfecta(A,B);
	
	MostrarVector(A);
	
	cout<<endl;
	MostrarVector(B);
	
	cout<<"¿Es perfecta la dentadura?    "<<Dientes<<endl;
	
	return 0;
	
	
}


vector<int>GenerarVector(vector<int> A , int N)
{
	int i;        
	srand (time (NULL));
	int e;
	for(i=0; i<N; i++)
	{
		e=rand()%3;
		
	A.push_back (e);
	}
	return A;
}

string DentaduraPerfecta(vector<int>A,vector<int>B){
	
	int i=0;
string Contador="SI";
	
	for(i=0;i<A.size();i++){
		if(A[i]!= B[i]){
			Contador="NO";
		}
		
	}
	
	return Contador;
	
}

void MostrarVector(vector<int>A){
	
	int i;
	for(i=0;i<A.size(); i++){
		
		cout<<A[i]<<"|";
		
	}
	cout<<endl;
}
