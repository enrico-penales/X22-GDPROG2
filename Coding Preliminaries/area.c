#include "area.h"


void runArea() {
	int nInput = -1;

	do {
		displayArea();
		scanf("%d", &nInput);
		processAreaInput(nInput);
	} while(nInput != 0);
}

void displayArea() {
    printf("\n");
    printf("\t╔════════════════════╗ \n");
    printf("\t│        AREA        │ \n");
    printf("\t╚════════════════════╝ \n");
    printf("\t[PLAYER] :  ♥  ♥  ♥");
    printf("\n");
    printf("\t\n	[INPUT] : ");
}

void processAreaInput(int nInput) {
	switch(nInput) {}
}