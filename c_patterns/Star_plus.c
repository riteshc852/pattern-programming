 #include <stdio.h>
 int main() {
     int n;
     printf("Enter Number (odd only) : ");
     scanf("%d",&n);
     int a = (n/2) + 1 ;  // n/2 + 1 = integer for computer 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j==a || i==a) 
            {
                printf("*");
            }
            else{
                printf(" ");
            } 
            
        }
        printf("\n");
    }
    
    
     return 0;
 }

