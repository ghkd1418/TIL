#include <stdio.h>
 
int main() {
    int L, P, V, cnt;
    for (int i = 1;; i++) {
        scanf("%d %d %d", &L, &P, &V);
        if (!L && !P && !V) break;
 
        cnt = (V / P) * L;
        V = V % P;
        cnt += V < L ? V : L;
        printf("Case %d: %d\n", i, cnt);
    }
    return 0;
}