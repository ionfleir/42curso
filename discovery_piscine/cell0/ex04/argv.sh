#!/bin/bash

# Verifica el número de argumentos proporcionados
if [ $# -gt 3 ]; 
then
    echo "Error: Se han proporcionado más de 3 argumentos."
    exit 1
fi

# Muestra los argumentos proporcionados
echo "Argumento 1: ${1:-No proporcionado}"
echo "Argumento 2: ${2:-No proporcionado}"
echo "Argumento 3: ${3:-No proporcionado}"

