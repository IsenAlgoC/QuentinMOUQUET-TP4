#include <stdlib.h>
#include <stdio.h>

#define SEPARATEUR '/'
#define TAILLETAB1 20

int main() {
	int MyTab1[TAILLETAB1];
	int i = 0;
	for (i = 0; i < TAILLETAB1; i++) {
		MyTab1[i] = i + 1;
	}
	for (i = 0; i < TAILLETAB1; i++) {
		printf(" %d %c",MyTab1[i] ,SEPARATEUR );
	}
	char* MyPtr1;
	MyPtr1 = &MyTab1[TAILLETAB1 - 1];
	printf("\n");
	for (i = 0; i < TAILLETAB1; i++) {
		printf(" %d %c", *MyPtr1 - i, SEPARATEUR);
	}
}