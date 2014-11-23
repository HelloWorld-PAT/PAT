#include<stdio.h>
int b[10][10];
int a[10], ma[10];
void dfs(int a[], int deep, int sum, int n) {
  if (deep == n) {
    int tmp = 0;
    for (int i = 0; i < n; ++i) tmp = tmp * 10 + a[i];
    if (sum == tmp && a[0] != 0) {
        for(int i = 0; i < n; ++i) {
          printf("%d", a[i]);
        }
        printf("\n");
    }
    return;
  }
  for (int i = 0; i <= 9; ++i) {
    sum += b[i][n];
    a[deep] = i;
    if (sum > ma[n]) return;
    dfs(a, deep + 1, sum, n);
    sum -= b[i][n];
  }
}
int main() {
  for (int i = 0; i < 10; ++i)
    for (int j = 0; j < 10; ++j)
      if (i == 0) b[i][j] = 0;
      else if (i == 1) b[i][j] = 1;
      else {
        if(j==0) b[i][j] = 1;
        else b[i][j] = b[i][j-1] * i;
      }
  for (int i = 0; i < 10; ++i) {
    if (i == 0) ma[i] = 0;
    else ma[i] = ma[i-1] * 10 + 9;
  }
  int n;
  scanf("%d", &n);
  dfs(a, 0, 0, n);
}

