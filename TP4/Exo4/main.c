#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main() {
    char mot[100];
    int i;
    int palindrom = 1;
    printf("entrer un mot : ");
    scanf_s("%s", mot, (unsigned)_countof(mot));
    int taille = strlen(mot);
    if (taille % 2 == 0) {
        for (i = 0; i < (taille / 2); i++) {
            if (mot[i] != mot[taille - 1 - i]) {
                palindrom = 0;
            }
        }
    }
    if (taille % 2 == 1) {
        for (i = 0; i < (taille - 1) / 2; i++) {
            if (mot[i] != mot[taille - 1 - i]) {
                palindrom = 0;
            }
        }
    }
    if (palindrom == 1) {
        printf("c'est un palindrom");
    }
    if (palindrom == 0) {
        printf("ce n'est pas un palindrom");
    }
}