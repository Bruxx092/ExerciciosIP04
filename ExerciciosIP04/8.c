#include <stdio.h>

void minuscula(char c) {
    if(c >= 65 && c <= 90) {
        printf("%c � mai�sculo", c);
    } else if(c >= 97 && c <= 122) {
        printf("%c n�o � mai�sculo", c);
        char maiusculo = c - 32;
        printf(", mas seu equivalente em mai�sculo � %c\n", maiusculo);
    } else {
        printf("%c n�o � uma letra", c);
    }
}

int main(void){
    char c;
    printf("Digite uma letra: ");
    scanf("%c", &c);

    minuscula(c);

    return 0;
}