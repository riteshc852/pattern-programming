#include <stdio.h>

int main() {
    for (int i = 0; i < 4; i++)
    {
        int a=1;
        for (int j = 0; j < 4; j++)
        {
          int b = a+64; // ascii value 
          char ch = (char)b; // type conversion 
          printf("%c", ch);  
          a++;  
        }
     printf("\n");   
    }
    
    

    return 0;
}