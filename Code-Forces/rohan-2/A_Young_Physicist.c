#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x = 0, y = 0, z = 0;
    
    for (int i = 0; i < n; i++) {
        int xi, yi, zi;
        scanf("%d %d %d", &xi, &yi, &zi);
        x += xi;
        y += yi;
        z += zi;
    }

    if (x == 0 && y == 0 && z == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}