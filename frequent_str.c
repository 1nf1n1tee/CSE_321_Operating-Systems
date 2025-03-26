#include <stdio.h>
#include <string.h>

char most_repeated_char(char *str) {
    int i,j,count;
    char letter;
    count = 0;
    for(i=0;str[i] != '\0';i++){
        int temp=1;
        for(j=i+1;str[j] != '\0';j++){
            if(str[i]==str[j]){
                temp+=1;
            }
        }
        if(temp>count){
            count = temp;
            letter = str[i];
        }
    }
    return letter;
}
void main(){
    printf("%c",most_repeated_char("Coddy"));
}