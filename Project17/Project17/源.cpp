#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a, b, c;
	printf("������a,b,c��ֵ��");
	scanf("%lf%lf%lf",&a,&b,&c);
	double judge = b*b - 4 * a*c;
	if (judge > 0) printf("x��������ֱ�Ϊ:x1=%.2lf x2=%.2lf\n", ((-1 * b + sqrt(b*b - 4 * a*c) / (2 * a)), (-1 * b - sqrt(b*b - 4 * a*c) / (2 * a))));
	else if (judge == 0) printf("x����ֻ��һ����x= %.2lf\n", (-1 * b + sqrt(b*b - 4 * a*c) / (2 * a)));
	else printf("�޽�\n");
	system("pause");
}