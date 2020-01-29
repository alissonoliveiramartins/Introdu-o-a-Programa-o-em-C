#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char string1[12];
    char string2[12] ="Ola mundo !"; 
    //string1 = string2 // ERRADO
    for (int i = 0; string1[i] != '\0';i++)
        string1[i] = string2[i];
        //string2[i] = '\0'
    printf("%s", string2);
    return 0;
}
    