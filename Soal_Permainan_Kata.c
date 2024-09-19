#include <stdio.h>
#include <string.h>

int main(){
    
    char word1[100], word2[100];
    scanf("%s", word1);
    scanf("%s", word2);
        
    if (strcmp(word1, word2) == 0){
        printf("IDENTIK");
    }
    
    else if (strlen(word1) == strlen(word2)) {
        printf("MIRIP");
    }
    
    else {
        printf("BERBEDA");
    }

    return 0;
}