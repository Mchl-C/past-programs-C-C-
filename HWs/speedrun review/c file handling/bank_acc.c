#include <stdio.h>
#include <string.h> // Needed for strcpy

struct acc {
    int account;
    char name[100];
    double balance;
};

int main() {
    FILE *cfPtr = fopen("sample_file.txt", "r");

    int a;
    char b[100];
    double c;
    struct acc xinyi[10];
    int idx = 0;

    while (fscanf(cfPtr, "%d%s%lf", &a, b, &c) == 3) {
        xinyi[idx].account = a;
        strcpy(xinyi[idx].name, b);
        xinyi[idx].balance = c;
        idx++;
    }
    fclose(cfPtr);

    while(1){
        for (int i = 0; i < idx; i++) {
            printf("%d %s %.2f\n", xinyi[i].account, xinyi[i].name, xinyi[i].balance);
        }
        printf("1 - zero\n");
        printf("2 - credit\n");
        printf("3 - debit\n");
        printf("4 - end\n");

        int n;
        scanf("%d", &n);
        if(n == 1){
             for (int i = 0; i < idx; i++) {
                    if(xinyi[i].balance == 0){
                        printf("%d %s %.2f\n", xinyi[i].account, xinyi[i].name, xinyi[i].balance);
                    }
            }
        }
        else if(n == 2){
             for (int i = 0; i < idx; i++) {
                    if(xinyi[i].balance > 0){
                        printf("%d %s %.2f\n", xinyi[i].account, xinyi[i].name, xinyi[i].balance);
                    }
            }
        }
        else if(n == 3){
             for (int i = 0; i < idx; i++) {
                    if(xinyi[i].balance < 0){
                        printf("%d %s %.2f\n", xinyi[i].account, xinyi[i].name, xinyi[i].balance);
                    }
            }
        }
        else break;
        printf("\n\n");

    }
    return 0; // Good practice to return 0 from main
}
