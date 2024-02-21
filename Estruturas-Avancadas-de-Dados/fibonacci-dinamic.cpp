#include <bits/stdc++.h>
long long int fb[1000];
int fibonacci(int x){
    if(fb[x-1]==-1){
        fb[x-1] = fibonacci(x-1) + fibonacci(x-2);
    }
    return fb[x-1];
}

int main(){
    memset(fb, -0x1, 1000);
    fb[0] = 0;
    fb[1] = 1;
    fb[2] = 1;
    int a, i;
    printf("Enter the number of terms: ");
    scanf("%d", &a);
    printf("%d", fibonacci(a));
    return 0;
}