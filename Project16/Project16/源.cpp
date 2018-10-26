#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	printf("«Î ‰»Îabcdef:");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	printf("x=  \n", ((c*e) - (b*f)) / (((a*e)-(b*d))));
	printf("y=  \n",((c*d)-(a*f))/((b*d)-(a*e)));
	
}