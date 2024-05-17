#include "area.h"

void runArea() {
	char cInput = '0';
    int nPlayerLocation = 0;

	do {
		displayArea(nPlayerLocation);
		scanf(" %c", &cInput);
		processAreaInput(cInput, &nPlayerLocation);
	} while(cInput != '0');
}

void displayArea(int nPlayerLocation) {
    printf("\n");
    printf("\t╔════════════════════╗ \n");
    printf("\t│        AREA        │ \n");
    printf("\t╚════════════════════╝ \n");
    displayAreaBoard(nPlayerLocation); // call display area board
    printf("\t[PLAYER] :♥ ♥ ♥");
    printf("\n");
    printf("\t[INPUT] : ");
}

void displayAreaBoard(int nPlayerLocation){
    int nTiles = 4;
    
    printf("\t ");
    for(int i = 0; i < nTiles; i++) {
        if (nPlayerLocation == i)
            printf("╔═══╗");
        else
            printf("┌───┐");
    }
    printf("\n");

    printf("\t ");
    for(int i = 0; i < nTiles; i++) {
        if (nPlayerLocation == i)
            printf("║ ■ ║");
        else
            printf("│   │");
    }
    printf("\n");

    printf("\t ");
    for(int i = 0; i < nTiles; i++) {
        if (nPlayerLocation == i)
            printf("╚═══╝");
        else
            printf("└───┘");
    }
    printf("\n");

}

void processAreaInput(char cInput, int* pPlayerLocation) {
	switch(cInput) { // -1 if a +1 if d
        case 'a':
        case 'A':
            (*pPlayerLocation)--;
            if (*pPlayerLocation == -1)
                (*pPlayerLocation = 3);
            break;

        case 'd':
        case 'D':
            (*pPlayerLocation)++;
            if (*pPlayerLocation >= 4)
                (*pPlayerLocation = 0);
            break;
    }
}