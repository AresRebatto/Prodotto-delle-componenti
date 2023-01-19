#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int nElementi;
	do
	{
		cout << "Inserire il numero di elementi che si desiderano creare nell'array(da 1 a 10): ";
		cin >>nElementi;
		
		if(nElementi > 10 || nElementi < 1)
		{
			cout << "Valore non valido. Si prega di inserire un numero compreso tra 1 e 10" << endl;
		}
	}while(nElementi > 10 || nElementi < 1);
	
	int numeri[nElementi];
	int prod = 1; //Posti pari
	int sum = 0;  //Posti dispari
	
	for(int i = 0; i < nElementi; i++)
	{
		cout << "Inserire il " << i+1 << "o valore: ";
		cin >> numeri[i];
		
		if(i%2== 0)
		{
			prod = prod*numeri[i];
		}else
		{
			sum = sum + numeri[i];
		}
	}
	
	cout << "Il prodotto dei numeri nelle posizioni pari corrisponde a " << prod << ", mentre la somma dei numeri nei posti dispari corrisponde a " << sum << endl;
	return 0;
}
