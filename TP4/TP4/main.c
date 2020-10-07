#include "tp4.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
	HEURE HeureDebut = { 12, 30 };
	HEURE Duree = { 0, 45 };
	HEURE HeureFin = { 0,0 };
	HeureFin.minute = (HeureDebut.minute + Duree.minute) % 60;
	HeureFin.heure = (HeureDebut.heure + Duree.heure) + (HeureDebut.minute + Duree.minute) / 60;
	printf("%d : %d", HeureFin.heure, HeureFin.minute);
}