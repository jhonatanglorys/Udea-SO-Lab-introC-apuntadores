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
        return cnt;
}

void test(){
    char cadena[]="palabra";
    int veces= contarCaracter(cadena,'f');
    printf("La cantidad de veces que aparece la letra 'a' es : %d\n", veces);
}