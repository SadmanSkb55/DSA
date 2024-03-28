#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int **raggedArray = (int **)malloc(rows * sizeof(int *));
    if (raggedArray == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        int cols;
        printf("Enter number of columns for row %d: ", i + 1);
        scanf("%d", &cols);

        raggedArray[i] = (int *)malloc(cols * sizeof(int));
        if (raggedArray[i] == NULL) {
            printf("Memory allocation failed!\n");
            for (int j = 0; j < i; j++) {
                free(raggedArray[j]);
            }
            free(raggedArray);
            return 1;
        }

        printf("Enter elements for row %d:\n", i + 1);
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &raggedArray[i][j]);
        }
    }

    printf("The ragged array is:\n");
    for (int i = 0; i < rows; i++) {
        int cols;
        printf("Row %d: ", i + 1);
        printf("[");
        for (int j = 0; raggedArray[i][j] != '\0'; j++) {
            printf("%d", raggedArray[i][j]);
            if (raggedArray[i][j + 1] != '\0') {
                printf(", ");
            }
        }
        printf("]\n");
    }

    for (int i = 0; i < rows; i++) {
        free(raggedArray[i]);
    }
    free(raggedArray);

    return 0;
}
