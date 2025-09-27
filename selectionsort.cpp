#include "vetor.h"

using namespace std;

void selectionSort(tvetor vetor) {
    for (int i = 0; i < N-1; i++) {
        int menor = 0;
        for (int j = i+1; j < N; j++) {
            if (vetor[j] < vetor[menor]) menor = j;
        }
        if (i != menor) troca(vetor[i], vetor[menor]);
    }
}

main() {
    tvetor vetor;
    preencherVetor(vetor);
    exibirVetor(vetor);
    selectionSort(vetor);
    exibirVetor(vetor);
}
