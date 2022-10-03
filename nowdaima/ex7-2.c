#include <stdio.h>
#include <string.h>
#define N 5
void bubbleSort(char str[][20], int n);
int main()
{
    char name[N][20] = {"Linziyang", "Zhouzijun", "Fuze", "Wdnmd", "Theshy"};
    int i;
    bubbleSort(name, N);
    for (i = 0; i < 5; i++)
        puts(name[i]);
    return 0;
}

void bubbleSort(char str[][20], int n)
{
    int i, j;
    char t[20];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                strcpy(t, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], t);
            }
        }
    }
}