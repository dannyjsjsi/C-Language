#include <stdio.h>
int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    printf("%d", *(arr + 2));
    return 0;
}