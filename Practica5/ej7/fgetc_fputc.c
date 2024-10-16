#include <stdio.h>

int main()
{
    FILE *srcFile, *dstFile;
    char ch;

    srcFile = fopen("sourceFile.txt", "r");
    dstFile = fopen("destinationFile.txt", "w");

    if (srcFile == NULL || dstFile == NULL)
    {
        printf("Unable to open file.\n");
        return 0;
    }

    ch = fgetc(srcFile);
    while (ch != EOF)
    {
        fputc(ch, dstFile);
        ch = fgetc(srcFile);
    }

    printf("File copied successfully.\n");

    fclose(srcFile);
    fclose(dstFile);

    return 0;
}
