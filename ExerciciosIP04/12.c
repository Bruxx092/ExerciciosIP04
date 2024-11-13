#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h> 

// Função para verificar se uma tecla foi pressionada
int kbhit(void) {
    return _kbhit(); 
}

// Função para simular o _sleep() do Windows
void sleep_ms(int milliseconds) {
    Sleep(milliseconds); 
}

int npa() {
    static unsigned s = 0;
    auto unsigned n = s % 100;
    s += s / 10;
    while (s == 0) {
        s = time(NULL) % 1000;
    }
    return n;
}

int main(void) {
    while (!kbhit()) {
        printf("%d\n", npa());
        sleep_ms(1000);
    }
    return 0;
}