#include <stdio.h>
#define SQ(y) ((y)*(y))
int main(){
    int i=1;
    while(i<=5){
        printf("%d^2 = %d\n", i, SQ(i++));
    }
    return 0;
}
