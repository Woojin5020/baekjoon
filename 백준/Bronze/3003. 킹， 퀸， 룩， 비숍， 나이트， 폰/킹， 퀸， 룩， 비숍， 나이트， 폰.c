#include <stdio.h>

int main(void)
{
    int ary[6] = {1,1,2,2,2,8};
    int input[6] = {0};
    int output[6] = {0};
    int *pi = input;
    
    for(int i=0; i<6; i++) scanf("%d", (pi + i));
    
    for(int j=0; j<6; j++)
        *(output +j) = *(ary + j) - *(input + j);
    
    for(int k=0; k<6; k++) printf("%d ",*(output + k));
}