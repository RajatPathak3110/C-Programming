// All Operations of String

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];
    char str3[MAX_SIZE];
    char substring[MAX_SIZE];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Concatenation
    strcat(str1, str2);
    printf("Concatenation: %s\n", str1);

    // Copying
    strcpy(str3, str1);
    printf("Copying: %s\n", str3);

    // Comparison
    int result = strcmp(str1, str2);
    printf("Comparison: %d\n", result);

    // Length
    int length = strlen(str1);
    printf("Length: %d\n", length);

    // Substring
    printf("Enter the starting index of the substring: ");
    int start_index;
    scanf("%d", &start_index);
    printf("Enter the length of the substring: ");
    int substring_length;
    scanf("%d", &substring_length);
    strncpy(substring, str1 + start_index, substring_length);
    printf("Substring: %s\n", substring);

    return 0;
}
