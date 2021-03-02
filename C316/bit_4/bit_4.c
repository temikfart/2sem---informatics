#include <stdio.h>
#include <stdlib.h>

void det_sex(unsigned int n)
{
    // ma = ???? ???1; fe = ???? ???0
    if(n & 1)
        printf("ma\n");
    else
        printf("fe\n");
}
void det_brain(unsigned int n)
{
    if(n >> 1)
        printf("cl\n");
    else
        printf("du\n");
}
void det_hat(unsigned int n)
{
    //if(n & 4)
    if(n >> 2)
        printf("ha\n");
    else
        printf("nh\n");
}
void det_bottom(unsigned int n)
{
    if(n >> 3)
        printf("tr\n");
    else
        printf("sk\n");
}
void det_hair_col(unsigned int n)
{
    if(((n >> 4) & 3) == 3) //???? ??11
        printf("bk\n");
    else if(((n >> 4) & 1) == 1) //???? ??01
        printf("rd\n");
    else if(((n >> 4) & 2) == 2) //???? ??10
        printf("bw\n");
    else
        printf("bn\n"); //???? ??00
}
void det_eyes_col(unsigned int n)
{
    if(((n >> 6) & 3) == 3) //???? ??11
        printf("da\n");
    else if(((n >> 6) & 1) == 1) //???? ??01
        printf("ge\n");
    else if(((n >> 6) & 2) == 2) //???? ??10
        printf("gy\n");
    else
        printf("bu\n"); //???? ??00
}

int main()
{
    unsigned int n;
    
    scanf("%x", &n);
    //printf("Num: %x\n", n);
    
    det_sex(n);
    det_brain(n);
    det_hat(n);
    det_bottom(n);
    det_hair_col(n);
    det_eyes_col(n);
    
    return 0;
}
