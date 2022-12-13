#include <stdio.h>
#include <string.h>
int main()
{
    char line[3000];

    scanf("%s", line);

    int N = strlen(line);

    for(int i=N-1; i>=0; i--){
        printf("%c", line[i]);
    }
}
