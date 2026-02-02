// Program to write data into a file and read it back

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "w");
    printf("Enter text (end with #): ");

    while ((ch = getchar()) != '#')
    {
        fputc(ch, fp);
    }
    fclose(fp);

    fp = fopen("data.txt", "r");
    printf("\nFile contents:\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}
