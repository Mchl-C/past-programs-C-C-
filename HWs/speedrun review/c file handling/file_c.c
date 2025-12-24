#include <stdio.h>

int main(){
    FILE *cfPtr = fopen("sample_file.txt","w");
    char st[100];
    scanf("%s", st);
    while(!feof(stdin)){
        fprintf(cfPtr,  "%s\n", st);
        // printf("%s", cfPtr);
        scanf("%s", st);
    }

    fclose(cfPtr);
}
