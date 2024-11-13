#include <stdio.h>
#include <windows.h>

// Função para verificar se uma tecla foi pressionada
int kbhit(void) {
    
    for (int i = 0; i < 256; i++) {
        
        if (GetAsyncKeyState(i) & 0x8000) {
            return 1; // Tecla pressionada
        }
    }
    return 0; // Nenhuma tecla pressionada
}

// Função para simular o _sleep() do Windows
void sleep_ms(int milliseconds) {
    Sleep(milliseconds); // Sleep aceita milissegundos
}

void sequencia(void) {
    static int n = 0;
    printf("%d,", n++);
    fflush(stdout);
}

int main(void) {
    while(!kbhit()) {
        sequencia();
        sleep_ms(1000);
    }
    return 0;
}