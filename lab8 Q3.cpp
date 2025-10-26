#include <stdio.h>

int main() {
    char seating[5][5]; 
    int students = 0, empty = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i + j) % 2 == 0) {  
                seating[i][j] = 'x';  
                students++;
            } else {
                seating[i][j] = 'o';  
                empty++;
            }
        }
    }

    printf("Classroom Seating Chart:\n");
    printf("=========================\n");
    printf("(x = Student, o = Empty)\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Row %d ", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%c ", seating[i][j]);
        }
        printf("\n");
    }

    printf("\nSummary:\n");
    printf("Students seated: %d\n", students);
    printf("Empty desks: %d\n", empty);
    printf("Total desks: %d\n", students + empty);

    return 0;
}

