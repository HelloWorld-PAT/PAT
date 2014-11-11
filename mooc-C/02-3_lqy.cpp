#include<stdio.h>
#include<string.h>
int main() {
  char s[105];
  scanf("%s",s);
  int flag = 0;
  for(int i = 0, j = strlen(s)-1;i<j;++i,--j) {
    char ch = s[i];s[i] = s[j];s[j] = ch;
    if(ch != '0') flag = 1;
  }
  if(!flag) printf("0\n");
  else {
    int len = strlen(s);
    for(int i = 0; i < len; ++i) {
      if(s[i] != '0')
        printf("%c", s[i]);
    }
    puts("");
  }
}
