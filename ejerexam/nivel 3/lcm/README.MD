Nombre del ejercicio : lcm
Archivos esperados : lcm.c
Funciones permitidas :

Escribe una función que reciba dos unsigned int como parámetros y devuelva el LCM calculado de esos parámetros.

LCM (Mínimo Común Múltiplo) de dos enteros no nulos es el menor entero positivo divisible por ambos enteros.

Un LCM puede calcularse de dos maneras:

Puedes calcular todos los múltiplos de cada entero hasta que encuentres un múltiplo común distinto de 0

Puedes usar el HCF (Máximo Común Divisor) de estos dos enteros y calcularlo de la siguiente forma:

LCM(x, y) = | x * y | / HCF(x, y)

| x * y | significa "valor absoluto del producto de x por y"

Si al menos uno de los enteros es cero, el LCM es igual a 0.

Tu función debe estar prototipada de la siguiente manera:

unsigned int lcm(unsigned int a, unsigned int b);