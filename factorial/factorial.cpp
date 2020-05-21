#include<iostream>
using namespace std;

int factorial(int n){
        if(n > 1) return n*factorial(n-1); /* Recursividad*/
       return 1;
}
int main(){
    cout << "Ingrese su numero" << endl;
    int numero;
    cin >> numero;
    int fact;
    fact = factorial(numero);
    cout << "El factorial de " << numero << " es "<< fact << endl;
    return 0;}
    