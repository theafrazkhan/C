

#include <stdio.h>

void hi(char str1[], char str2[], char *ptr);
int main(void)
{

    char str1[100];
    char str2[100];

    printf("Enter string 1: ");
    gets(str1);

    printf("Enter string 2: ");
    gets(str2);

    int count1 = 0;

    while (str1[count1] != '\0')
    {
        count1++;
    }
    int count2 = 0;
    while (str2[count2] != '\0')
    {
        count2++;
    }

    int count = count1 + count2;

    char combined[count + 1];

    combined[count + 1] = '\0';

    hi(str1, str2, combined);

    puts(combined);
    return 0;
}
void hi(char str1[], char str2[], char *ptr)
{
    int count1 = 0;

    while (str1[count1] != '\0')
    {
        count1++;
    }
    int count2 = 0;
    while (str2[count2] != '\0')
    {
        count2++;
    }

    int count = count1 + count2;

    char combined[count + 1];

    int i = 0;

    for (; i < count1; i++)
    {
        *(ptr + i) = str1[i];
    }

    for (int j = 0; j < count2; j++)
    {
        *(ptr + i) = str2[j];
        i++;
    }
}