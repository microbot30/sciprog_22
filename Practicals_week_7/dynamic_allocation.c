#include <stdio.h>
#include <stdlib.h>


int *allocatearray(int n){ // Allocate the array
    int *p;
    p = (int *) malloc((n)*sizeof(int));
    if(p == NULL){
        printf("Error in allocating memory \n");
    }
    return p;
}

void fillwithones(int *array , int n){ // Fill the array with ones
    int i;
    for(i = 0; i < n; i++){
        array[i] = 1;
    }
}

void printarray(int *array ,int n){ // print array
    int i;
    for(i = 0; i < n; i++){
        printf("a[%d] = %d\n", i, array[i]);
    }
}

void freearray(int *array){ // deallocation of the array
    free(array);
}
int main(){
    int length, *a;
    printf("Please enter the size of the array: \n");
    scanf("%d", &length);
    a = allocatearray(length);
    fillwithones(a,length);
    printarray(a,length);
    freearray(a);
    a = NULL;

    return 0;
}