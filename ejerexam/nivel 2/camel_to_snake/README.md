Nombre de la tarea: camel_to_snake
Archivos esperados: camel_to_snake.c
Funciones permitidas: malloc, free, realloc, write

Escribe un programa que tome una única cadena en formato lowerCamelCase y la convierta en una cadena en formato snake_case.

Una cadena en lowerCamelCase es una cadena donde cada palabra comienza con una letra mayúscula, excepto la primera palabra.
Una cadena en snake_case es una cadena donde cada palabra está en minúsculas y separada por un guion bajo "_".

Ejemplos:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$
