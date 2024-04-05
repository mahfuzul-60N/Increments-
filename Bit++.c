#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int x = 0; // Initial value of variable x

    for (int i = 0; i < n; i++) {
        char statement[4]; // Array to store the statement
        scanf("%s", &statement);

        // Check the operation in the statement and update variable x accordingly

        if (strcmp(statement, "++X") == 0 || strcmp(statement, "X++") == 0){
            x++;}

        if (strcmp(statement, "--X") == 0 || strcmp(statement, "X--") == 0){
            x--;}
    }

    printf("%d\n", x); // Print the final value of x

    return 0;
}
