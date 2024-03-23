//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: File Io fuctions
// Description: Detailed working

//*****************************************************************************************************

#include <stdio.h>

int main(void)
{

    // Reading from a file
    FILE *ptr = NULL; // Its best to initialize pointer as null to avoid it pointing to a garbage location,causing nasty bugs
    char str[55];
    ptr = fopen("my_file.txt", "r");
    fscanf(ptr, "%s", str);
    printf("The content is string is :%s", str);

    // writing into a file

    char str2[55] = "This string is from str2 being written into the file";
    ptr = fopen("my_file.txt", "w");
    fprintf(ptr, "%s\n", str2);

    // Appending mode adds the text from the ending of previous data

    ptr = fopen("my_file.txt", "a");
    fprintf(ptr, "%s\n", str2);

    return 0;
}