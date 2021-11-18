#include <iostream>

using namespace std;

void MN();

int main(){
    cout << "Programa que diz qual o maior e o menos peso!\n\n" ;
    MN();
    return 0;
}

void MN(){
    double maior = 0;
    double menor = 0;
    double peso = 0.0;
    for (int i = 0; i <= 5; i++){
        cout << "Digite seu peso (EX.: 67.0)" ;
        cin >> peso;
        if(peso>maior){
            maior = peso;
        }
        else{
            menor = peso;
        }
        
    }
    cout << "O maior peso foi " << maior << " e o menor foi " << menor ;
}