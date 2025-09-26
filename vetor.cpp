#include <iostream>
#include "vetor.h"

using namespace std;

void exibirVetor(tvetor vetor) {
    for (int i = 0; i < N; i++) {
        cout<<vetor[i]<<"\t";
    }
    cout<<endl;
}

void preencherVetor (tvetor vetor) {
    for (int i = 0; i < N; i++) {
        cout<<"["<<i<<"]: ";
        cin>>vetor[i];
    }
}
