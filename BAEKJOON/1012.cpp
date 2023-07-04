#include<ios>
int A[50][50],r,t,m,n,k,x,y;
void s(int a, int b){ 
    if(a<0||a>=m||b<0||b>=n||!A[b][a])return;
    A[b][a]=0;
    s(a+1,b); s(a-1,b); s(a,b+1); s(a,b-1);
}
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&m,&n,&k);
        r = 0;
        while(k--){
            scanf("%d %d",&x,&y);
            A[y][x]=1;
        }
        for(int i=0;i<n;i++){
            for(int l=0;l<m;l++)
                if(A[i][l]) s(l,i), r++;
        }
        printf("%d\n",r);
    }
}