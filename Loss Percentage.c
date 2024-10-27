#include<stdio.h>
int main(){
 double cp, sp;
    scanf("%lf %lf", &cp, &sp);
    double loss = cp - sp;
    double loss_percentage = (loss / cp) * 100;
    printf("%.2f\n", loss_percentage);
    return 0;
}