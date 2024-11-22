#include <stdio.h>
int main() {
    FILE *file;
    char line[256];
    int lineNum = 1;
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)){
        printf("%d: %s", lineNum++, line);
    }

    fclose(file);
    return 0;
}
