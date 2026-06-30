/*
c program to find sum of following series
1 + 1/2 + 1/3 + 1/4 + ... + 1/n
where n is a positive integer input by the user.

*/
#include <stdio.h>
int main() {
    int n;
    float sum = 0.0f;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("series is:");
    for (int i = 1; i <= n; i++)
    {
      sum=sum+((float)1/i);
      printf("%d / %d+",1,i);
    }
    printf("=%f",sum);

    return 0;
}   