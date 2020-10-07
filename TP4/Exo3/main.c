#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define _SIZE_ 20

int main() {
	char Nom[_SIZE_];
	char Prenom[_SIZE_];
	char Genre='A';
	char GenreUpper;
	printf("Entrez votre nom:\n");
	scanf_s("%s", Nom, (unsigned)_countof(Nom));
	printf("Entrez votre prenom:\n");
	scanf_s("%s", Prenom, (unsigned)_countof(Prenom));
	printf("Entrez votre genre:\n");
	Genre = _getch();
	Genre = toupper(Genre);
	switch (Genre) {
		case 'H': 
			printf("Monsieur");
			break;
		case 'F':
			printf("Madame");
			break;
		case 'O':
			printf("Damoixe");
			break;
	}
	printf(" %s %s", Nom, Prenom);
}