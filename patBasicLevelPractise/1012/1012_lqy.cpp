#include<cstdio>
int main() {
    int A1=0,A2=0,A3=0,A5=0;
    double A4=0;
    int n;
    scanf("%d", &n);
    int i=0,j=-1,count=0,temp=0;
    int a[1005];
    int f[15] = {0};
    for (int i = 0; i <n; ++i) {
        scanf("%d", a + i);
    }
    for(i=0 ; i<n; i++){
        switch(a[i]%5){
            case 0: if(a[i]%2==0){A1 += a[i];f[0]=true;}break;
            case 1: f[1]=true;A2 += ((temp % 2 == 0)? a[i]:(-1*a[i]));temp++;break;
            case 2: f[2]=true;A3++;break;
            case 3: f[3]=true;A4 += a[i];count++; break;
            case 4: f[4]=true;if(a[i] > A5){A5 = a[i];}break;
            default:break;
        }
    }
    if(!f[0]){
        printf("N ");
    }else{
        printf("%d ", A1);
    }
    if(!f[1]){
        printf("N ");
    }else{
        printf("%d ", A2);
    }
    if(!f[2]){
        printf("N ");
    }else{
        printf("%d ", A3);
    }
    if(!f[3]){
        printf("N ");
    }else{
        printf("%.1lf ", A4/count);
    }
    if(!f[4]){
        printf("N\n");
    }else{
        printf("%d\n", A5);
    }
}
