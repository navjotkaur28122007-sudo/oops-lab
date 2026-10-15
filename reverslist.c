
// #include <stdio.h>
// #define MAX 100

// int main() {
//     int list[MAX], stack[MAX];
//     int n, i, top = -1;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter list elements:\n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &list[i]);
//     }

//     // Push elements onto stack
//     for (i = 0; i < n; i++) {
//         stack[++top] = list[i];
//     }

//     // Pop elements back into list
//     for (i = 0; i < n; i++) {
//         list[i] = stack[top--];
//     }

//     printf("Reversed list:\n");
//     for (i = 0; i < n; i++) {
//         printf("%d ", list[i]);
//     }

//     return 0;
// }

#include <stdio.h>
#define MAX 100

int main() {
    int stack[MAX];
    int n, i, top = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    // Directly push user input into stack
    for (i = 0; i < n; i++) {
        scanf("%d", &stack[++top]);
    }

    printf("Reversed list:\n");

    // Pop elements to display in reverse order
    while (top >= 0) {
        printf("%d ", stack[top--]);
    }

    return 0;
}

