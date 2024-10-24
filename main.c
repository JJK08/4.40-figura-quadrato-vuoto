#include <stdio.h>

int main(void) {
    int n;
    int i;
    do {
        printf("quanta lunghezza del lato vuoi?: ");
        scanf("%d",&n);
    }
    while(n<=0);
    for(i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i==0||i==n-1||j==0||j==n-1) {
                printf("*");
            }else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
