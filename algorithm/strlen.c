#include <stdio.h>
#include <string.h>
int main(void)
{
    char *arr= "0123456789";
    int len = sizeof(arr)/sizeof(char);
    printf("%d\n", len);
    printf("%d",strlen(arr));
 
    return 0;
}
