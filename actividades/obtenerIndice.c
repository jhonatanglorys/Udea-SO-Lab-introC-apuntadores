#include <stdio.h>

int obtenerIndice(char *, char);
int contarCaracter(char *, char);
void test(void);

int main(){
    test();
    return 0;
}

int obtenerIndice(char *array, char ch){
    int indice = -1;
    while (*array != '\0' && *array != ch){
        indice++;
        array++;
    }
    return indice+2;
}

int contarCaracter(char *array, char ch){
    int cnt = -1;
    while (*array != '\0'){
        if(ch == *array ){
            cnt++;
        }
        array++;
    }    
        return cnt;
}
void test(void){
    char caracter = 'r';
    char cadena[] = "palabra";
    int veces = contarCaracter(cadena, caracter);
    if(veces!= -1){
        int indice = obtenerIndice(cadena, caracter);
        printf("La posición del caracter %c es %d\n", caracter, indice);
    } else {
        printf("El caracter %c no se encuentra en la cadena. \n", caracter);
    }
}
