#include <stdio.h>

int main(){
    char word[100];
    scanf("%[^\n]", &word);

    int arr[26] = {0};
    printf("%s", word);
    for(int i = 0;i < strlen(word);i++){
        char ch = word[i];
        int ascii = ch;
        if(ascii >= 'a' && ascii <= 'z'){
            arr[ascii - 'a'] ++;
        }
        else if(ascii >= 'A' && ascii <='Z'){
            arr[ascii - 'A'] ++;
        }
        printf("%d\n",ascii);
    }

    for(int i = 0;i < 26;i++){
        char ch = 'a' + i;
        printf("%c : %d\n", ch, arr[i]);
    }
    return 0;
}
