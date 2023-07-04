#pragma warning(disable:4996)
#include<ios>
int t,a,i,j,s[200],n[3][101];int main(){scanf("%d",&t);for(i=0;i<t;i++){for(j=0;j<3;j++){scanf("%d",&a);n[j][a]==0?n[j][a]=i+1:n[j][a]=-1;}}for(i=0;i<3;i++)for(j=1;j<101;j++)s[n[i][j]-1]+=(n[i][j]>0)*j;for(j=0;j<t;j++)printf("%d\n",s[j]);}