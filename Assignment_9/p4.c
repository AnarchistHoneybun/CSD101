#include <stdio.h>
#include <stdlib.h>

void reversal(char text[], int *len){
    char temp;
    int temp_len = *len;
    temp_len-=1;
    for(int i=0;i<((*len)/2);i++){
        temp = *(text+i);
        *(text+i) = *(text+temp_len-1);
        *(text+temp_len-1) = temp;
        temp_len--;
        //printf("%c %c\n",temp, *(text+i));
    }
}

int main()
{
    int len;
    char dump;
    printf("Enter length of string: ");
    scanf("%d%c", &len, &dump);
    len+=1;
    char text[len];
    len;
    printf("Enter your text: ");
    fgets(text, len, stdin);
    reversal(text, &len);
    /*char temp;
    temp = *(text);
    *(text) = *(text+5);
    *(text+5) = temp;*/
    printf("reversed string is %s", text);
}
