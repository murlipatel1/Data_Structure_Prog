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

    int m =2n;
    char s[m];
    for(int i=0, j=0; i<n; i++) {
        s[j++] = s1[i];
        s[j++] = s2[i];    
    }

    printf("%s\n", s);

    return 0;
}