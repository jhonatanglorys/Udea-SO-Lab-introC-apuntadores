#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *obtenerSubcadena(char *, int);
void test(void);

int main(){
    test();
    return 0;
}

char *obtenerSubcadena(char *array, int index){
    int tamano = strlen(array) - index;
    char *dest = (char*)malloc(sizeof(char)*tamano+1);
    for (int i=index; i < strlen(array) && (*array != '\0'); i++){
        *dest = *(array+i);
        dest++;
    }
    *dest = '\0';
    return dest - tamano;
}

void test(void){
    char cadena[] = "Hola que tal";
    char* sub = obtenerSubcadena(cadena, 5);
    printf("La nueva subcadena es: %s\n", sub); 
}