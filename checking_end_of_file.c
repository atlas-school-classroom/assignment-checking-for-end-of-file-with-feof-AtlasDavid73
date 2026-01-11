#include <stdio.h>
#include <stdlib.h>

# define MAX_LINE_LENGTH 256

int main() {
    FILE *file;
    char line[MAX_LINE_LENGTH];

    // open file read mode
    file = fopen("example.txt", "r");

    // Check if opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // read file line by line until EOF
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        // Print the line
        printf("%s", line);

        // Check if read errors during file operation
        if (ferror(file)) {
            perror("Error reading file");
            fclose(file);
            return EXIT_FAILURE;            
        }

    }

    // After the loop, check if EOF was reached
    if (feof(file)) {
        // Successfully reached 
        // end of file

    } else if (ferror(file)) {
        // handle read error
        perror("Error reading file");
        fclose(file);
        return EXIT_FAILURE;
    }

    // close the file
    if (fclose(file) != 0) {
        perror("Error closing file");
        fclose(file);
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;

}