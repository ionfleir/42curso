#!/bin/bash

# Verifica si se proporcionaron argumentos
if [ $# -eq 0 ]; then
    echo "No se proporcionaron argumentos."
    echo "Uso: $0 nombre_carpeta1 nombre_carpeta2 ..."
    exit 1
fi

# Mientras haya argumentos
while [ $# -gt 0 ];
do
    # Obtiene el primer argumento
    nombre=$1
    
    # Añade el prefijo "ex" al nombre
    nuevo_nombre="ex$nombre"
    
    # Crea la carpeta con el nuevo nombre
    mkdir -p "$nuevo_nombre"
    
    # Verifica si la carpeta se creó correctamente
    if [ $? -eq 0 ];
then
        echo "Carpeta '$nuevo_nombre' creada."
    else
        echo "Error al crear la carpeta '$nuevo_nombre'."
    fi
    
    # Elimina el primer argumento y pasa al siguiente
    shift
done

