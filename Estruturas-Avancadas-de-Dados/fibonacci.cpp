#include <iostream>

// Fibonacci Funcion
int fibonacci(int n) {
    if((n==1) || (n==2)) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int a, i;
    printf("Enter the number of terms: ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}