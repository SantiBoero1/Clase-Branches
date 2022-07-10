#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
	int a=0,rta;
	char s[100],palabra[100],palabra2[100];
	
	cout<< "ingrese una palabra: ";
	cin >>s;
	
	a = strlen(s);
	
	if (a==0)
	cout<< "La cadena dada es vacia";
	
	else
	cout<< "La cadena posee "<< a << " caracteres"<<endl ;
	
	cout<<"quiere concatenar 2 cadenas? ingrese 1 para si y 2 para no"<<endl;
	cin>>rta;
	
	if (rta==1){
		cout<<"Ingrese palabra 1: ";
		cin>> palabra;
		
		cout<<"Ingrese palabra 2: ";
		cin >> palabra2;
		
		cout<<"La concatenacion es: "<<palabra<<palabra2;
	}
	
	
	return 0;
}
