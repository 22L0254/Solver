#include <stdio.h>
#include <math.h> 

main()
{
	double a,b,c,d,e,f,i,delta,x,y;
	unsigned short cmplx,brk=512;
	printf("һԪ���η��������V0.51by����һ\n");
	printf("�������X��һԪ���η���aX^2+bX+c=0��X�Ľ⡣\n");
	while(brk!=48&&brk!=26){
		printf("�Ƿ���������Ĺ���?�������������,����0�رա�\n");
		cmplx=getch();
		printf("a=");
		scanf("%lf",&a);
		printf("b=");
		scanf("%lf",&b);
		printf("c=");
		scanf("%lf",&c);
	delta=(b*b-4*a*c);
	f=(sqrt(delta));
	d=((-b+f)/(2*a));
	e=((-b-f)/(2*a));
	i=(2*a);
	x=((-b)/(2*a));
	y=((sqrt(-delta))/(2*a));
		if (a==0.)
			printf("\a����:a��ֵ����Ϊ0\n\n");
		else if (delta<0.){
			if (cmplx==48)
				printf("\a����:��ʵ��\n\n");
			else printf("��=%g\nX1 = %.10G+%.10G*i\nX2 = %.10G-%.10G*i\n\n",delta,/*delta,b,*/x,y,/*delta,a,*/x,y);//�����ⷽʽ�������磬����֪��ʵ���㷨����δ������ 
		}
		else if (delta>0.)
			printf("��=%g\n(-%.10g-��(%.10g))/2*(%.10g)\n(-%.10g-%.10g)/(%.10g)\nX1 = %.10G\n\n(-(%.10g+��(%.10g))/2*(%.10g)\n(-%.10g+%.10g)/(%.10g)\nX2 = %.10G\n\n",delta,b,delta,a,b,f,i,e,b,delta,a,b,f,i,d);
		else if (delta==0.)
			printf("��=%g\n(-(%.10g)+��(%.10g))/2*(%.10g)\n(-(%.10g)+(%.10g))/(%.10g)\nX = %.10G\n\n",delta,b,delta,a,b,f,i,e);
	printf("�Ƿ��������?�������������,����0�˳���\n");
	brk=getch();
	}
}
