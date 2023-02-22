#include<math.h>
#include<stdio.h>
int main(){ 
    int a,b,n,s[100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        scanf("%d%d",&a,&b); 
        s[i]=a+b; 
    }
    for(int i=1;i<=n;i++) {
        printf("%d\n",s[i]);
    }
}