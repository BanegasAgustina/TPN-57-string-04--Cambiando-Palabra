
#include <bits/stdc++.h>

using namespace std;
string CambiarPalabra (string palabra, int posicion) ;
int main()
{
    int p;
    string pa;
    cout<<"ingrese una palabra :  ";
    getline(cin,pa);
    cout<<"ingrese posicion de la letra q quiera modificar:  ";
    cin>>p;
    cout<<CambiarPalabra (pa,p);
    return 0;
}
string CambiarPalabra (string palabra, int posicion)
{
	int i;
	int contador=0;
	for(i=0;i< palabra.size();i++)
	{
	    palabra[posicion]='X';
	
	}
	return palabra;
	
}