// Date :
// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char str1[20], str2[20];
//     // int strcmp();
//     printf("\t Program to compare two string : \n");
//     printf("Enter  2 string  : ");
//     scanf("%s \n%s", str1, str2);

//     if (strcmp(str1, str2) == 0)
//         printf("\n\t Two strings are equal ");
//     else
//         printf("\n\t Two strings are not equal ");
//     return 0;

//     // Coded by Mayur
// }

#include <string.h>
#include <stdio.h>
int main()
{
    char str1[20] = {"mayur patil"};
    char str2[20];
    // int strcmp();
    printf("\t Program for password: \n");
    printf("Enter  your password  : ");
    gets(str2);

    //  m = strcmp(str1, str2);

    if (strcmp(str1, str2) == 0)
        printf("\n\t Password is correct  ");
    else
        printf("\n\t Password is not correct  ");
    return 0;

    // Coded by Mayur
}