Nombre de la tarea: ulstr
Archivos esperados: ulstr.c
Funciones permitidas: write

Descripción de la tarea:

Escribe un programa que tome una cadena de texto (string) y cambie la capitalización de todas sus letras (minúsculas a mayúsculas y viceversa). Los demás caracteres permanecen sin cambios.

El programa debe mostrar el resultado seguido de un salto de línea ( \n).

Si el número de argumentos no es exactamente 1, el programa debe mostrar solo un salto de línea ( \n).

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$