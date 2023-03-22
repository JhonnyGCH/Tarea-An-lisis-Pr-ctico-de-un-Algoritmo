// Codificado por Carl0s25
#include <bits/stdc++.h>
#include <time.h>
using namespace std;
int main()
{	
	
    
        int f, c;
        cin >> f >> c;
		clock_t tStart = clock();
        int matriz[f][c];
        for (int j = 0; j < f; j++)
        {
            for (int k = 0; k < c; k++)
            {
                cin >> matriz[j][k];
            }
        }
    //Operamos
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            if (i % 2 == 0) {
                // Fila par
                matriz[i][j] += 1;
            }
            if (j % 2 == 0) {
                // Columna par
                matriz[i][j] += 2;
            }
            if (i % 2 != 0 && j % 2 != 0) {
                // Fila y columna impar
                matriz[i][j] -= 3;
            }
        }
    }

    //Imprimimos la matriz
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matriz[i][j];
            if (j != c - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
	
	
    /* Do your stuff here */
    printf("Time taken: %.8fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
}