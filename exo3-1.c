
int GCD(int a , int b){
    int r; //r:rest

    while (a%b!=0)
    {
        r=a%b;
        a=b;
        b=r;
        /*
        e.g:
        a=b*c+r
        32=20*1+12
        20=12*1+8
        12=8*1+4
        8=4*2+0
        */
    }
    return b;
}
int main(){
    int a,b,lcm;
    printf("enter a :");
    scanf("%d",&a);
    printf("enter b :");
    scanf("%d",&b);

    /*
        the relationship between LCM and GCD is :
        LCM=(a*b)/GCD
    */
   lcm=(a*b)/GCD(a,b);
   printf("the LCM is :%d",lcm);
    return 0;
}
