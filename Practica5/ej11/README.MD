# Cálculo del Tamaño de un Archivo Binario

Este programa en C abre un archivo binario generado previamente y calcula su tamaño en bytes. Utiliza las funciones estándar de la biblioteca de C para manejo de archivos, específicamente `fopen()`, `fseek()`, `ftell()` y `fclose()`.

## Descripción del Programa

El programa sigue los siguientes pasos:

1. Abre el archivo binario en modo de lectura binaria ("rb").
2. Mueve el indicador de posición de archivo al final del archivo con `fseek()`.
3. Usa `ftell()` para obtener la posición actual del indicador de posición de archivo, que resulta ser el tamaño total del archivo en bytes.
4. Imprime el tamaño del archivo en la salida estándar.
5. Cierra el archivo con `fclose()`.

## Uso

Para usar este programa, simplemente compílalo y ejecútalo. Asegúrate de que el archivo binario exista en el mismo directorio y tenga el nombre correcto.

## Explicación del Tamaño del Archivo

El tamaño del archivo depende de la estructura de los datos que se escriben en el archivo y de cuántas veces se haya escrito dicha estructura. En un archivo binario, los datos se escriben tal cual, sin delimitadores ni caracteres especiales. Por lo tanto, el tamaño del archivo en bytes es simplemente el total de los bytes de los datos que se han escrito en él.
