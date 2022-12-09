#include<stdio.h>
#include<string.h>

int isPalindrome(char word[10]) {
    int length = strlen(word)-1;
    for (int i = 0; i <= length; i++) {
        if (word[i] == word[length-i]) {
            return 1;
        }else{
            return 0;
        }
    }
    
}

int main() {
    char word[10];
    scanf("%s", word);

    if (isPalindrome(word) == 1) {
        printf("Palindrome");
    }else{
        printf("Not palindrome");
    }
    
    return 0;
}