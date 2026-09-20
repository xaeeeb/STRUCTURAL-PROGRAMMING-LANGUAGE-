#include <stdio.h>

int main() {
    int n;
start:
    scanf("%d", &n);
    if(n < 0)
        goto start;
    for(int i=1; i<=n; i++) {
        if(i%2==0)
            continue;
        if(i>7)
            break;

        printf("%d ", i);
    }

    return 0;
}