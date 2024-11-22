#include <stdio.h>
#include <ctype.h>
int main(){
    FILE *sourceFile, *destinationFile;
    char ch;
    sourceFile = fopen("source.txt", "r");
    if(sourceFile == NULL) {
        printf("Could not open source file.\n");
        return 1;
    }
    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        printf("Could not open destination file.\n");
        fclose(sourceFile);
        return 1;
    }
    while((ch = fgetc(sourceFile)) != EOF) {
        fputc(toupper(ch), destinationFile);  
    }
    printf("File copied successfully with lowercase letters converted to uppercase.\n");
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}


