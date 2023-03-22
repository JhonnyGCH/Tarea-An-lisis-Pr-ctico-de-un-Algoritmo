const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let f, c;
let matriz = [];

rl.question("Introduce las dimensiones de la matriz (fila columna): ", function(dimensiones) {
    [f, c] = dimensiones.split(' ').map(Number);

    rl.on('line', function(line) {
        matriz.push(line.split(' ').map(Number));
        if (matriz.length === f) {
            rl.close();
        }
    });
});

rl.on('close', function() {
    // Operamos
    for (let i = 0; i < f; i++) {
        for (let j = 0; j < c; j++) {
            if (i % 2 === 0) {
                // Fila par
                matriz[i][j] += 1;
            }
            if (j % 2 === 0) {
                // Columna par
                matriz[i][j] += 2;
            }
            if (i % 2 !== 0 && j % 2 !== 0) {
                // Fila y columna impar
                matriz[i][j] -= 3;
            }
        }
    }

    // Imprimimos la matriz
    for (let i = 0; i < f; i++) {
        console.log(matriz[i].join(' '));
    }
});