#include <bits/stdc++.h>

int main() {
    int *p; \\ Create the pointer
    p = (int *) malloc(sizeof(int)); \\ Reserves the memory adress
    *p = 10; \\ Defines a initial value for p
    
    scanf("%d", p); \\ Get a value to p
    
    printf("The value of 'P' is: %d\n", *p); \\
    
    printf("The adress of 'P' is: %p\n", p);
    
    return 0;
}
