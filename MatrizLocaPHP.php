<?php
$n = intval(fgets(STDIN));
for ($i = 0; $i < $n; $i++) {
    list($f, $c) = array_map('intval', explode(' ', trim(fgets(STDIN))));
    $matriz = array();
    for ($j = 0; $j < $f; $j++) {
        $matriz[$j] = array_map('intval', explode(' ', trim(fgets(STDIN))));
    }

    // Operamos
    for ($i = 0; $i < $f; $i++) {
        for ($j = 0; $j < $c; $j++) {
            if ($i % 2 == 0) {
                // Fila par
                $matriz[$i][$j] += 1;
            }
            if ($j % 2 == 0) {
                // Columna par
                $matriz[$i][$j] += 2;
            }
            if ($i % 2 != 0 && $j % 2 != 0) {
                // Fila y columna impar
                $matriz[$i][$j] -= 3;
            }
        }
    }

    // Imprimimos la matriz
    for ($i = 0; $i < $f; $i++) {
        for ($j = 0; $j < $c; $j++) {
            echo $matriz[$i][$j];
            if ($j != $c - 1) {
                echo " ";
            }
        }
        echo "\n";
    }
}
?>
