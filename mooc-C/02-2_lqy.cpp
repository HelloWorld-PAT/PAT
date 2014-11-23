#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
    char s[105], ss1[105], ss2[154];
    int delt;
    int h, m;
    scanf("%s %d", s, &delt);
    if (strlen(s) == 3) {
        sscanf(s, "%1d%2d", &h, &m);
    } else {
        sscanf(s, "%2d%2d", &h, &m);
    }
    int now = h * 60 + m;
    now = now + delt;
    printf("%d%02d", now/60, now%60);
}

