#include <stdio.h>

int main(void) {
    printf("DeAlunoParaAluno\a");
    
    getchar();
    return 0;
}

/*
    \a - Alarm, Alarme = Toca o alarme sonoro do sistema
    \b - Back space, Retrocesso = Apaga o caractere à esquerda do cursor
    \n - NewLine, Nova linha = Pula uma linha
    \t - Tabulação horizontal = Equivale à dar um TAB na string
    \r - Carriage Return, Retorno do Carro = Volta para o início da linha.
    \0 - Null, Nulo = Caracter nulo ou zero geralmente estabelecido como fim de string
    \v – Tabulação Vertical
    \\ – Caracter \
    \’ – Caracter ‘
    \” – Caracter “
    \? – Caracter ?
    \000 – Caracter cujo código ASCII em Octal é 000
    \Xnn – Caracter cujo código ASCII em Hexadecimal é nn
    %% – Caracter %
*/