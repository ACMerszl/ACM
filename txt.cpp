#include<bits/stdc++.h>
using namespace std;
const int maxn = 1010;
char s[maxn];
int a[maxn], ans;
char *p;
int v;

int main() {
	while(gets(s)) {
		ans = 0;
		p = strtok(s, "5");//（地址，"分隔符"）
		while(p){
			sscanf(p, "%d", &v);//把 p 写入 v
			a[ans++] = v;
			p = strtok(NULL, "5");//第二次调用NULL
		}
		sort(a, a+ans);
		for(int i=0;i<ans;i++) {
			if(i == 0)
				printf("%d", a[i]);
			else
				printf(" %d", a[i]);
		}
		printf("\n");
	}
}
