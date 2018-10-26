#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a, b, c;
	printf("请输入a,b,c的值：");
	scanf("%lf%lf%lf",&a,&b,&c);
	double judge = b*b - 4 * a*c;
	if (judge > 0) printf("x有两个解分别为:x1=%.2lf x2=%.2lf\n", ((-1 * b + sqrt(b*b - 4 * a*c) / (2 * a)), (-1 * b - sqrt(b*b - 4 * a*c) / (2 * a))));
	else if (judge == 0) printf("x有且只有一个解x= %.2lf\n", (-1 * b + sqrt(b*b - 4 * a*c) / (2 * a)));
	else printf("无解\n");
	system("pause");
}