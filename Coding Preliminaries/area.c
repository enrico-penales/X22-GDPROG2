#include "area.h"

void runArea() {
	char cInput = '0';
    int aTiles[4] = {1, 0, 0, 0};
    int nEnemy;

    printf("Enter enemy location: ");
    scanf("%d",&nEnemy);

    nEnemy --;

    aTiles[nEnemy] = 2;

	do {
		displayArea(aTiles, 4);
		scanf(" %c", &cInput);
		processAreaInput(cInput, aTiles, 4);
	}
    while (cInput != '0');

}

void displayArea(int* pTiles, int nSize) {
    printf("\n");
    printf("\t╔════════════════════╗ \n");
    printf("\t│        AREA        │ \n");
    printf("\t╚════════════════════╝ \n");
    displayAreaBoard(pTiles, nSize); // call display area board
    printf("\t[PLAYER] :♥ ♥ ♥");
    printf("\n");
    printf("\t[INPUT] : ");
}

void displayAreaBoard(int* pTiles, int nSize){

    printf("\t ");
    for(int i = 0; i < nSize; i++) {
            switch(pTiles[i]) {
                case 2:
                    printf("┌───┐");
                    break;
                case 1:
                    printf("╔═══╗");
                    break;

                case 0:
                    printf("┌───┐");
                    break;
            }
    }
    printf("\n");

    printf("\t ");
    for(int i = 0; i < nSize; i++) {
        switch(pTiles[i]) {
            case 2:
                printf("│ E │");
                break;
            case 1:
                printf("║ ■ ║");
                break;

            case 0:
                printf("│   │");
                break;
            }
    }
    printf("\n");

    printf("\t ");
    for(int i = 0; i < nSize; i++) {

            switch(pTiles[i]) {
                case 2:
                    printf("└───┘");
                    break;
                case 1:
                    printf("╚═══╝");
                    break;

                case 0:
                    printf("└───┘");
                    break;
            }
    }
    printf("\n");
}

void processAreaInput(char cInput, int* pTiles, int nSize) {

    int nFound = 0;

	switch(cInput) { // -1 if a +1 if d
        case 'a':
        case 'A':
        for(int i = 0; i < nSize && nFound == 0; i++) {
            if (pTiles[i] == 1){
                if (pTiles[i - 1] == 2) {
                    pTiles[i] = 0; 
                } 
                else if (pTiles[i] == 1) {
                    pTiles[i] = 0;
                    pTiles[i - 1] = 1;
                }
                nFound = 1;
            } 
            break;
        case 'd':
        case 'D':
        for(int i = 0; i < nSize && nFound == 0; i++) {
            if (pTiles[i] == 1){
                if (pTiles[i + 1] == 2) {
                    pTiles[i] = 0; 
                } 
                else if (pTiles[i] == 1) {
                    pTiles[i] = 0;
                    pTiles[i + 1] = 1;
                }
                nFound = 1;
            }       
        }
            break;
    }
}