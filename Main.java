import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int f = sc.nextInt();
        int c = sc.nextInt();
        int[][] matriz = new int[f][c];

        for (int i = 0; i < f; i++) {
            for (int j = 0; j < c; j++) {
                matriz[i][j] = sc.nextInt();
            }
        }

        // Operamos
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

        // Imprimimos la matriz
        for (int i = 0; i < f; i++) {
            for (int j = 0; j < c; j++) {
                System.out.print(matriz[i][j]);
                if (j != c - 1) {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}