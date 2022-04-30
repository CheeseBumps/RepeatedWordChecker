#include<stdio.h>
#include<string.h>

int main(void){
    char words[100000][20];
    int value;

    for (int i = 0; i < 100000; i++)
    {
        printf("Enter word:\n");
        scanf(" %s", words[i]);
         
        for (int j = 0; j < i; j++)
        {
            value = strcmp(words[j], words[i]); // returns 0 if two strings are equal
            if (value==0)
            {
                printf("This word is repeated!\n");
            }
            
        }
        
    }
    return 0;
}

/*












*/