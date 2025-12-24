#include <stdio.h>

int main(){
    FILE *f1 = fopen("sample.txt","r");
    FILE *f2 = fopen("result.txt", "w");

    int a, b;
    while (fscanf(f1, "%d %d", &a, &b) == 2) {
        int total = a + b;
        fprintf(f2, "%d\n", total);
    }
    fclose(f1); fclose(f2);
    printf("done\n");

    return 0;
}
