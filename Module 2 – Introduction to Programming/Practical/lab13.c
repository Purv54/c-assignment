#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("file.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
    }
    else{
    fputs("Hello, my name is purv.\n", fp);                      
    }  
    fclose(fp);                  

    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
    }
    else{
        printf("\nContents of file:\n");
        while (fgets(str, 100, fp) != NULL) {
        printf("%s", str);
    }
}

    fclose(fp);
}
