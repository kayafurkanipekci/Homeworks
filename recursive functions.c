#include<stdio.h>

void function2(int bottom, int top, int sum);
int function1(int n);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld\n\n", n, function1(n));

    int bottom, top, sum = 0;
    printf("Enter the bottom of the interval: ");
    scanf("%d", &bottom);
    printf("Enter the top of the interval: ");
    scanf("%d", &top);
    function2(bottom, top, sum);
    return 0;
}

int function1(int n) {
    if (n>=1)
        return n*function1(n-1);
    else
        return 1;
}

void function2(int bottom, int top, int sum) {
    if (bottom % 2 != 0) {
        bottom++;
    }
    if (bottom > top) {
        printf("No even numbers in the interval.\n");
        return;
    }
    sum += bottom;
    if (bottom + 2 <= top) {
        function2(bottom + 2, top, sum);
    } else {
        printf("Sum of even numbers in the interval: %d\n", sum);
    }
}