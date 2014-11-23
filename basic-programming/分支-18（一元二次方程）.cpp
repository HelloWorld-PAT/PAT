#includecstdio
#includecmath
#includealgorithm
const double eps = 0.000001;
bool isZero(double x) {
  return abs(x)  eps;
}
int main() {
  double a, b, c;
  scanf(%lf%lf%lf, &a, &b, &c);
  if (isZero(a)) {
    if (isZero(b)) {
      if (isZero(c)) {
        puts(Zero Equation);
      } else {
        puts(Not An Equation);
      }
    } else {
      printf(%.2lfn, -c  b);
    }
  } else {
    double delt = b  b - 4  a  c;
    if (isZero(delt)) {
      printf(%.2lfn, -b  a  0.5);
    } else {
      if (delt  0) {
        double x1 = -b  a  0.5 + sqrt(delt)  a  0.5;
        double x2 = -b  a  0.5 - sqrt(delt)  a  0.5;
        printf(%.2lfn%.2lfn, x1, x2);
      } else {
        double x11 = -b  a  0.5, x12 = sqrt(-delt)  a  0.5;
        double x21 = -b  a  0.5, x22 = - sqrt(-delt)  a  0.5;
        if (isZero(x11)) {
            printf(%.2lf+%.2lfin%.2lf%.2lfin, x11, x12, x21, x22);
            printf(0.00+%.2lfin0.00%.2lfin, x12, x22);
        } else {
            printf(%.2lf+%.2lfin%.2lf%.2lfin, x11, x12, x21, x22);
        }
      }
    }
  }
}
