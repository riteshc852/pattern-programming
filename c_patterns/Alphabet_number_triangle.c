#include <stdio.h>

int main() {

    for (int i = 1; i <= 5; i++)
    {
        int a=1;
        for (int j = 1; j <= i; j++)
        {
            int b = a + 64;
            char ch = (char)b;
            if (i%2!=0) // check for odd iteration
            {
                printf("%d" , j);

            }
            else    // else even iteration 
            {    
            printf("%c" ,ch );
            a++;
            }
        }
       printf("\n"); 
    }
    

    return 0;
}