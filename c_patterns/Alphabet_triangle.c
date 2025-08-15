#include <stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int a=1;
        for (int j = 1; j <= i; j++)
        {
            int b = a + 64; // ascii value
            char ch = (char)b; // type conversion 
            printf("%c",ch);
            a++;
        }
        printf("\n");
        
    }
    

    return 0;
}