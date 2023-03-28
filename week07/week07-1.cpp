#include <stdio.h>
int main()
{
    FILE*fout = fopen("file.txt", "w");

    fprintf(fout, "Hello Would\n");

    printf("檔案就出現了喔,請檢察檔案總管");
}
