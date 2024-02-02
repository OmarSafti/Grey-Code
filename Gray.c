#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; // Number of bits in your binary number
    int i;
    int x;
    int loop;

    printf("%s", "Please enter the number of bits in your binary number\n");
    scanf("%d", &n);
    int num[n]; // Create an array for your binary number
    int gray[n]; // Create an array for Gray Code

    // Populate the array with your number
    printf("%s", "Please enter your number\n");
    printf("%s", "Start from the right\n");
    for(i = 0;i < n;i++){
        scanf("%d", &num[i]);
    }
    // Making the first bit of Gray Code
    gray[n-1] = num[n-1];

    // Populating the Gray Code arrey
    for(x = 0;x < n-1;x++){
        gray[x] = num[x] ^ num[x+1];
    }

    // Printing the Gray Code arrey in reverse
    printf("%s", "Your Gray Code is: \n");
    for(loop = n-1; loop >= 0; loop--){
        printf("%d ", gray[loop]);
    }
    return 0;
}
