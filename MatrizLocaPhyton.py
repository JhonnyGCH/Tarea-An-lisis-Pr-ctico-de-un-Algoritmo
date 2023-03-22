import timeit


f, c = map(int, input().split())


matriz = []

start = timeit.default_timer()

for j in range(f):
    matriz.append(list(map(int, input().split())))

# Operamos
for i in range(f):
    for j in range(c):
        if i % 2 == 0:
            # Fila par
            matriz[i][j] += 1
        if j % 2 == 0:
            # Columna par
            matriz[i][j] += 2
        if i % 2 != 0 and j % 2 != 0:
            # Fila y columna impar
            matriz[i][j] -= 3

# Imprimimos la matriz
for i in range(f):
    for j in range(c):
        print(matriz[i][j], end="")
        if j != c - 1:
            print(" ", end="")
    print()

stop = timeit.default_timer()

print('Time: ', stop - start)

