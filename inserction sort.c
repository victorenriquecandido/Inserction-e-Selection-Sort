#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10 

void fInsertion_Sort(int *pVetor);

int main()
{
    int vVetor[TAM];
    int vAux;

    srand(time(NULL));
    for (vAux=0; vAux < TAM; vAux++)
    {
        vVetor[vAux] = (rand() % 9) + 1; // Preenche o vetor com valores aleat�rios de 1 at� 9
        printf(" %d,",vVetor[vAux]);
    }

    fInsertion_Sort(vVetor); // Chama a fun��o de Ordena��o

    printf("\n\n");
    for (vAux=0; vAux < TAM; vAux++)
    {
        printf(" %d,",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
}
	
void fInsertion_Sort(int *pVetor)
{
    int vAux;
    int vTemp;
    int vTroca;

    for (vAux=1; vAux < TAM; vAux++) 
    {
        vTemp = vAux; 

        while (pVetor[vTemp] < pVetor[vTemp-1]) 
        { 
            vTroca          = pVetor[vTemp];
            pVetor[vTemp]   = pVetor[vTemp-1];
            pVetor[vTemp-1] = vTroca;
            vTemp--; 

            if (vTemp == 0) 
                break;
        }

    }
}
