#include<cstdio>
#include<cstring>
char s[500000];
int main() {
  gets(s);
  int len_s = strlen(s);
  for (int i = 0, j = len_s - 1; i < j; ++i,--j) {
    char tmp = s[i];s[i] = s[j]; s[j] = tmp;
  }
  for (int i = 0; i < len_s; ++i) {
    if (s[i] != ' ') {
      int j = i+1;
      while(j < len_s && s[j] != ' ') ++j;
      int begin = i, end = j - 1;
      for (int _i = begin, _j = end; _i < _j; ++_i, --_j) {
        char tmp = s[_i];s[_i] = s[_j]; s[_j] = tmp;
      }
      i = j - 1;
    }
  }
  //puts(s);
  int flag = 0;
  for (int i = 0; i < len_s; ++i) {
    if (s[i] != ' ') {
      int j = i+1;
      while(j < len_s && s[j] != ' ') ++j;
      int begin = i, end = j - 1;
      if (!flag)flag=1;else printf(" ");
      for(int p = begin; p <= end; ++p)
        printf("%c", s[p]);
      i = j - 1;
    }
  }
  puts("");
}
