#include <stdio.h>

int main()
{
    int n,a,k,d,b,c;
    k=0;
    printf("Enter the NUMBER:");
    scanf("%d",&b);
    printf("\n\n");
    n=b-2;
    c=2*b-1;
    for(int i=0;i<c;i++){
        if(i<b){
        a=b;
        for(int j=i;j<c;j++){
            if(j==i){
                for(k=0;k<i;k++){
                    printf("%d ",a);
                    a--;
                }}
                if(a<=1){
                    for(j=k+1;j<c;j++){
                        printf("%d ",a);
                        a++;
                    }
                }
                if(j==(c-i)){d=b;
                    for(int y=(c-i);y<c;y++){
                        printf("%d ",d-i+1);
                        d++;
                    }
                    break;
                }
                printf("%d ",a);
        }
        printf("\n");}
        else{
             a=b;
        for(int j=n;j<c;j++){
            if(j==n){
                for(int k=0;k<n;k++){
                    printf("%d ",a);
                    a--;
                }}
                if(a<=1){
                    for(j=k+1;j<c;j++){
                        printf("%d ",a);
                        a++;
                    }
                }
                if(j==(c-n)){d=b;
                    for(int y=(c-n);y<c;y++){
                        printf("%d ",d-n+1);
                        d++;
                    }
                    break;
                }
                printf("%d ",a);
        }n--;
        printf("\n");
        }
        }


    return 0;
}
