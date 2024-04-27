#include <stdio.h>

using namespace std;

int main()
{

    FILE *text = NULL;

    text = fopen("output.txt","w");

    if(text != NULL) {
        fprintf(text, "Hello World");
        fclose(text);
    }
    return 0;
}