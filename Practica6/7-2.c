#include <stdio.h> 
#include <stdlib.h> 
#define DEBUG 0
int main(){ 
    int x= 15;
    //int y = 0;
    while (x<50){ 
        #if DEBUG
            printf("x= %d", x);
            y= y+1;
        #endif
            x++; 
    }
    return 0; 
}

//a) Con DEBUG establecido en 0, el código debería compilar y 
//ejecutarse sin problemas, ya que la sección de código dentro de 
//#if DEBUG se omite durante la precompilación. 
//Sin embargo, si y estuviera definido, el código se ejecutaría 
//infinitamente ya que y incrementaría en cada iteración, pero x 
//nunca cambiaría, creando un ciclo infinito.

//b) Al cambiar DEBUG a 1, la sección de código dentro de #if DEBUG 
//se incluirá en la compilación. Esto provocará un error de compilación 
//ya que y no está definido. Si y estuviera definido, el programa se 
//ejecutaría pero crearía un ciclo infinito como se explicó en la respuesta 
//a la pregunta a).

//El beneficio de la compilación condicional es que puede habilitar o 
//deshabilitar ciertas partes del código sin tener que eliminarlas o 
//comentarlas. Esto puede ser útil para la depuración o para crear 
//diferentes versiones de un programa a partir de un mismo código base.

//c) No, las constantes simbólicas definidas con #define no se pueden 
//cambiar en tiempo de ejecución. Estas se resuelven en tiempo de precompilación.

//d) La directiva #ifdef verifica si un identificador está definido, 
//independientemente de su valor. Por lo tanto, si usas #ifdef DEBUG 
//en lugar de #if DEBUG, el código dentro del bloque #ifdef se compilará 
//siempre que DEBUG esté definido, sin importar su valor. En este caso, 
//si DEBUG está definido (ya sea 0 o 1 o cualquier otro valor), el 
//resultado de la compilación dependería del código dentro del bloque #ifdef. 
//En este caso específico, daría un error de compilación debido a que y no 
//está definido.



