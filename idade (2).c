#include <stdio.h>

int main ()
{
    int idade;
    int anodeNascimento;
    int anoAtual;
    char nome[100];
    scanf ("%d %s %d", &anoAtual, nome, &anodeNascimento);
    idade = anoAtual - anodeNascimento;
    printf ("%s, voce completa %d anos de idade neste ano.\n" , nome, idade);
    
}