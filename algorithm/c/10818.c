#include <stdio.h>
 
int main(void) {
    int input;
    int min = 1000001, max = -1000001;
    
    scanf("%d", &input);
    int num[input]; 
    
    for(int i=0; i<input; i++) {
        scanf("%d", &num[i]);
        if (num[i] > max) max = num[i];
        if (num[i] < min) min = num[i];
    }
    
    printf("%d %d", min, max);
}
#include <stdio.h>
 
int main(void) {
    int input;
    int min = 1000001, max = -1000001;
    
    scanf("%d", &input);
    int num[input]; 
    
    for(int i=0; i<input; i++) {
        scanf("%d", &num[i]);
        if (num[i] > max) max = num[i];
        if (num[i] < min) min = num[i];
    }
    
    printf("%d %d", min, max);
}
