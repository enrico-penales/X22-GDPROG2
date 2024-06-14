#include "arrays.h"

void printArray(int* pArray, int nSize){
    if(pArray != NULL){
        for(int i = 0; i < nSize; i++)
          printf("[%d] : %d\n", i, pArray[i]);
    }
    else
        printf("[pArray] is NULL");
}

void initializeArray(int* pArray, int nSize){
    for(int i = 0; i < nSize; i++)
        pArray[i] = i + 1;
}

int* createArray(int nSize){
    int* pReturn = malloc(sizeof(int) * nSize);
    initializeArray(pReturn, nSize);

    printArray(pReturn, nSize);

    return pReturn;
}

void runArrays (){
    int* pArray;
    pArray = createArray(5);
    
    printArray(pArray,5);
}