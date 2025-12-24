#include <stdio.h>

void printArray(int rows, int cols, int *arr){
    for(int i = 0; i <= 16;i++){
        printf(" ");
    }

    for(int i = 0; i < cols;i++){
        printf("[%d] ",i);
    }
    printf("\n");

    for(int i = 0; i < rows;i++){
            printf("studentGrades[%d] ",i);
            for(int j = 0; j < cols;j++){
                printf(" %d ", *(arr + (i * cols) +j));
            }
            printf("\n");
    }
}

int find_min(int rows, int cols, int *arr){
    int min_num = *arr;
    for(int i = 0;i < rows * cols;i++){
        if(*arr < min_num) min_num = *arr;
        arr ++;
    }
    return min_num;
}

int find_max(int rows, int cols, int *arr){
    int max_num = *arr;
    for(int i = 0;i < rows * cols;i++){
        if(*arr > max_num) max_num = *arr;
        arr ++;
    }
    return max_num;
}

void find_avg(int rows, int cols, int *arr){
    for(int i = 0; i < cols;i++){
        double tot = 0;
        for(int j = 0; j < rows; j++){
            tot += *(arr + (j * cols + i));
        }
        printf("The average for student %d is %.2f\n", i + 1, tot/rows);
    }
}
int main(){
    int arr[3][4] = { {85, 90, 78, 92},
                      {88, 76, 95, 89},
                      {91, 82, 84, 87}};

    while(1){
        printf("Enter a choice:\n");
        printf("0 Print the array of grades\n");
        printf("1 Find min grade\n");
        printf("2 Find max grade\n");
        printf("3 Find avg grade\n");
        printf("4 End\n");

        int choice;
        scanf("%d", &choice);
        if(choice == 0) printArray(3, 4,arr);
        else if(choice == 1) printf("The lowest grade is %d\n", find_min(3, 4, arr));
        else if(choice == 2) printf("The highest grade is %d\n", find_max(3, 4, arr));
        else if(choice == 3) find_avg(3, 4, arr);
        else if(choice == 4) {printf("Program Ended.\n"); break;}

        printf("\n");
    }
    return 0;
}
