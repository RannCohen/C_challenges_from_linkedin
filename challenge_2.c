#include <stdio.h>
#include <string.h>

void center_text(int width, char *text)
{
    if(strlen(text) >= width)
    {
        for(int i = 0; i <= (80 - 36) / 2; i++)
            putchar(' ');
        printf("string is too long, can't center it\n");

        return;
    }

    int indent = (80 - strlen(text)) / 2;
    
    for(int i = 0; i <= indent; i++)
    {
        putchar(' ');
    }
    printf("%s", text);
    for(int i = 0; i <= indent; i++)
    {
        putchar(' ');
    }
    puts("");
}

int main()
{

    char *titles[] = {
        "March Sales",
        "My First Project",
        "Centering output is so much fun!",
        "This title is very long, just to see whether the code can handle such a long title"
    };
     
    for(int x = 0; x < 4; x++)
    {
        center_text(80, titles[x]);
    }

    return 0;
}