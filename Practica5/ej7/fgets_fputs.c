#include <stdio.h>
#define BUFFSIZE 1024

int main()
{
    FILE *srcFile, *dstFile;
    char buffer[BUFFSIZE];

    srcFile = fopen("sourceFile.txt", "r");
    dstFile = fopen("destinationFile.txt", "w");

    if (srcFile == NULL || dstFile == NULL)
    {
        printf("Unable to open file.\n");
        return 0;
    }

    while (fgets(buffer, BUFFSIZE, srcFile) != NULL)
    {
        fputs(buffer, dstFile);
    }

    printf("File copied successfully.\n");

    fclose(srcFile);
    fclose(dstFile);

    return 0;
}
