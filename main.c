#include <stdio.h>
//計算三角形面積
int main(){
    int width, heigth;
    while (scanf("%d %d",&width, &heigth) != EOF) {
        double ans = width * heigth;
        ans /= 2;
        printf("%.1f\n", ans);
    }
    return 0;
}
