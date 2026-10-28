#include<stdio.h>
#define Max 100
int main(){
int A[3][3]=
{
    {1,0,3},
    {0,5,0},
    {0,0,2}
};
int B[3][3]=
{
    {0,2,4},
    {6,0,0},
    {0,1,1}
};

int a[Max][3],b[Max][3],sum[Max][3];
int k=1;
a[0][0]=3;
a[0][1]=3;
for(int i=0 ;i<3 ;i++){
    for(int j= 0 ;j<=3;j++){
        if(A[i][j]!=0){
            a[k][0]=i;
            a[k][1]=j;
            a[k][2]=A[i][j];
            k++;
        }
    }
}
b[0][0]=3;
b[0][1]=3;
for(int i=0 ;i<3 ;i++){
    for(int j= 0 ;j<=3;j++){
        if(B[i][j]!=0){
            b[k][0]=i;
            b[k][1]=j;
            b[k][2]=B[i][j];
            k++;
        }
    }
}
k=1;

sum[0][0]= 3;
sum[0][1]= 3;
for(int i=0 ;i<3 ;i++){
    for(int j= 0 ;j<=3;j++){
        int x =0, y=0;
        for(int p=1;p<=a[0][2];p++){
            if(a[p][0]==i && a[p][1]==j){
                x=a[p][2];
            }
        }
        for(int p=1;p<=b[0][2];p++){
            if(b[p][0]==i && b[p][1]==j){
                y=b[p][2];
            }
        }
        if(x+y!=0){
            sum[k][0]=i;
            sum[k][1]=j;
            sum[k][2]=x+y;
            k++;
        }
        sum[0][2]=k-1;
        printf("Sum of sparse matrices:\n");
        for(int i=0;i<=sum[0][2];i++){
            printf("%d %d %d\n",sum[i][0],sum[i][1],sum[i][2]);
        }
        return 0;
    }
}
}