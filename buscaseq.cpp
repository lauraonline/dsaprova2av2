#include <iostream>
#include "vetor.h"

using namespace std;

int buscaSequencial(int valor, tvetor vetor) {
    int erro = -1;
    for (int i = 0; i < N; i++) {
        if (vetor[i] == valor) {
            return i;
        }
    }
    return erro;
}

main() {
    tvetor vetor;
    preencherVetor(vetor);
    cout<<"Vetor:"<<endl;
    exibirVetor(vetor);
    int valor;
    cout<<"Valor a ser buscado:";
    cin>>valor;
    cout<<valor<<" está no índice "<<buscaSequencial(valor, vetor)+1<<endl;
}
