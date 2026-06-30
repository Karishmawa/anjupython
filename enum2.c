#include<stdio.h>
enum permission 
{
    read=4, write=2, execute=1
};
int main()
{
    int permission=execute | write | read;
    printf("Permission: %d\n", permission); 
    return  0;
}