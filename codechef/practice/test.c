#include <stdio.h>
#include <stdlib.h>
int main(){
	int t,i,j,a[26][2],c;
	char s[202];
	scanf("%d",&t);
	while(t--){
		scanf("%s",s);
		for(i=0;i<26;i++){
			a[i][0]=a[i][1]=0;
		}
		i=0;
		while(s[i]!='\0'){
			if(s[i]>='a'&&s[i]<='z'){
				a[s[i]-'a'][0]++;
			}
			else{
				a[s[i]-'A'][1]++;
			}
			i++;
		}
		c=0;
		for(i=0;i<26;i++){
			for(j=0;j<2;j++){
				if(a[i][j]&1){
					a[i][j]--;c++;
				}
				c=c+(a[i][j]/2);
			}
		}
		printf("%d\n",c);
	}
	return 0;
}

