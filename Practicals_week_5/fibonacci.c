#include <stdio.h>
#include <stdlib.h>


void fibonacci(int *a, int *b); // function to create fibonacci series

int main(){
    int n, i;
    int f1 = 1, f0 = 0;
    printf("Enter a positive integer n\n");
    scanf("%d", &n); // Input 1

    if(n < 1){ // error checking
        printf("The number is not positive \n");
        exit(1);
    }

    printf("The fibonacci sequence is : \n");
    printf("%d, %d,", f0, f1);

    for(i = 2; i <= n; i++){
        fibonacci(&f1, &f0); // function call
        printf("%d, ", f1); // fibonacci seires output

        if(((i + 1) % 10) == 0){
            printf("\n");
        }
    }
    return 0;
}

void fibonacci(int *a, int *b){
    int next;

    // *a = f(n-1), *b = f(n-2) next = f(n)
    next = *a + *b;

    // *a = f(n), *b = f(n-1)
    *b = *a;
    *a = next;

}
