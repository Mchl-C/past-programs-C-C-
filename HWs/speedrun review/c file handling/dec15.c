#include <stdio.h>

int main(){
    FILE *f = fopen("sample.txt", "w");
    while(1){
        int a, b;
        if(scanf("%d %d", &a, &b) == 2){
            int total = a + b;
            printf("%d\n", total);
            fprintf(f,"%d\n",total);
        }else break;
    }
    fclose(f);
    return 0;
}
