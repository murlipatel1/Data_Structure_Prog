#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *alternateConcatenation(char s1[], char s2[], int n) {
    // char *s = (char *)malloc(2*n*sizeof(char));
    for(int i=0, j=0; i<n; i++) {
        s[j++] = s1[i];
        s[j++] = s2[i];    
    }
    return s;
}

int main() {
    printf("Enter length of the strings: ");
    int n; 
    scanf("%d", &n); 
    getchar();

    char s1[n], s2[n];

    printf("Enter first string of %d characters: ", n);
    gets(s1);
    printf("Enter second string of %d characters: ", n);
    gets(s2);

    char *s3 = alternateConcatenation(s1, s2, n);
    printf("%s\n", s3);

    free(s3);
    s3 = NULL;

    return 0;
}