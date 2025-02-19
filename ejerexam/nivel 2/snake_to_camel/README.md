Nombre de la tarea: snake_to_camel
Archivos esperados: snake_to_camel.c
Funciones permitidas: malloc, free, realloc, write

Escribe un programa que tome una sola cadena en formato snake_case y la convierta en lowerCamelCase.

Una cadena en snake_case tiene todas sus palabras en minúsculas, separadas por un guion bajo (_).
Una cadena en lowerCamelCase tiene cada palabra iniciando con mayúscula, excepto la primera.

Ejemplos:
$> ./camel_to_snake "here_is_a_snake_case_word"
hereIsASnakeCaseWord

$> ./camel_to_snake "hello_world" | cat -e
helloWorld$

$> ./camel_to_snake | cat -e
$