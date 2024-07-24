// chuyen he thap phan sang he nhi phan

#include <stdio.h>

int change(int n){
    if(n == 0) return;
    else{
        change(n / 2);
        printf("%d", n % 2);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    change(n);

    return 0;
}