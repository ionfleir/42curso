Assignment name : ft_atoi_base
Expected files : ft_atoi_base.c
Allowed functions: None
Escribe una función que convierta el argumento de cadena str (base N <= 16)
a un entero (base 10) y lo devuelva.

Los caracteres reconocidos en la entrada son: 0123456789abcdef
Estos, por supuesto, se limitan según la base solicitada. Por ejemplo, la base 4 reconoce "0123" y la base 16 reconoce "0123456789abcdef".

También deben reconocerse las letras mayúsculas: "12fdb3" es lo mismo que "12FDB3".

Los signos menos ('-') se interpretan solo si son el primer carácter de la cadena.

Tu función debe declararse de la siguiente manera:

int ft_atoi_base(const char *str, int str_base);