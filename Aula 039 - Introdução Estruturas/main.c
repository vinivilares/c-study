#include <stdio.h>

int main(void) {

    // DEFINIÇÃO DE ESTRUTURA
    struct horario // TIPO da estrutura
    {
        int horas;
        int minutos;
        int segundos;
    };
    
    // DECLARAÇÃO DE ESTRUTURA
    struct horario agora; // NOME da estrutura
    
    // INICIALIZAÇÃO DOS MEMBROS DAS VARIAVEIS DAS ESTRUTURA
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

    return 0;
}