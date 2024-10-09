#include <stdio.h>

/**
 * Procedimiento que imprime un texto una cantidad específica de veces.
 * @param texto Una cadena de caracteres ( char*) que se imprimirá.
 * @param veces Un número entero que indica cuántas veces se debe repetir la impresión del texto.
 */
void repetir( char* texto, int veces) {
    // Ciclo que repite la impresión del texto introducido en la variable 'texto' la cantidad de veces que se introduzca en la variable 'veces'.
    for (int i = 0; i < veces; i++) {
        printf("%s\n", texto);  // Imprime el texto seguido de un salto de línea
    }
}

/**
 * Procedimiento que muestra por pantalla un "cartel", es decir, repite un texto varias veces
 * y lo enmarca con líneas punteadas antes y después del bloque de texto.
 */
void cartel( char* texto, int veces) {
    // Imprime la línea punteada antes del texto
    printf("--------------------\n");
    
    // Llama al procedimiento 'repetir' para mostrar por pantalla el texto especificado varias veces
    repetir(texto, veces);
    
    // Imprime la línea punteada después del texto
    printf("--------------------\n");
}

/**
 * Función principal que ejecuta el programa.
 * En esta función se hacen varias llamadas a los procedimientos 'repetir' y 'cartel'.
 */
int main() {
    // Llama al procedimiento 'repetir' para mostrar por pantalla "juan" 3 veces
    repetir("juan", 3);
    
    // Llama al procedimiento 'repetir' para mostrar por pantalla "pepe" 2 veces
    repetir("pepe", 2);
    
    // Llama al procedimiento 'cartel' para mostrar por pantalla "Maria" 3 veces, con líneas punteadas anterior y posteriormente
    cartel("Maria", 3);

    // Llama al procedimiento 'cartel' para mostrar por pantalla "Marcos" 4 veces, con líneas punteadas anterior y posteriormente
    cartel("Marcos", 4);
    
    return 0;  // Indica que el programa terminó correctamente
}