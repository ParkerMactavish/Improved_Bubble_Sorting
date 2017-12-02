#include <stdio.h>
#define SIZE 10

int main(void)
{
    //initialize a
    int a[SIZE]={2,6,4,8,10,12,89,68,45,37};
    int pass;//pass counter
    size_t i;//comparison counter
    int hold;//temporary location used to swap array elements
    int continue_flag=1;//whether to continue the sorting or not
    puts("Data items in original order");

    for(i=0; i<SIZE; i++){
        printf("%4d", a[i]);
    }

    for(pass=1; pass<SIZE&&continue_flag==1; pass++){
        continue_flag=0;
        for(i=0; i<SIZE-pass; i++){
            if(a[i]>a[i+1]){
                hold=a[i];
                a[i]=a[i+1];
                a[i+1]=hold;
                continue_flag=1;
            }
        }
    }

    puts("\nData items in ascending order");

    for(i=0; i<SIZE; i++){
        printf("%4d", a[i]);
    }
    puts("");
    return 0;
}
