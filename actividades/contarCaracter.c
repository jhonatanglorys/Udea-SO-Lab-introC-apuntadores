#include <stdio.h>

void test(void);
int contarCaracter(char *, char);

int main(){
    test();
    return 0;
}

int contarCaracter(char *array, char ch){
    int cnt = -1;
    while (*array != '\0'){
        if(ch == *array ){
            cnt++;
        }
        array++;
    }    
    if (cnt == -1){
        return cnt;
    }  else {
        return cnt+1;
    }
}

void test(){
    char caracter = 'y';
    char cadena[]="palabra";
    int veces= contarCaracter(cadena,caracter);
    printf("La cantidad de veces que aparece la letra %c es : %d\n", caracter, veces);
}