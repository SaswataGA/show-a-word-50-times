#include<stdio.h>
int main()
{
    int i;
    char word[50];
    printf("Write a word:");
    scanf("%s",word);
    for (i=0; i<50; i++)
        printf("%s\t",word);


}
