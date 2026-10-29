Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    int ch;

    // Open the input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open the output file in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(inputFile); // Close the already opened input file
        return 1;
    }

    // Read character by character until the end of the file (EOF)
    while ((ch = fgetc(inputFile)) != EOF) {
        // Convert to uppercase and write to the output file
        fputc(toupper(ch), outputFile);
    }

    // Close both files to free up resources
    fclose(inputFile);
    fclose(outputFile);

    printf("File conversion completed successfully!\n");
    return 0;
}
