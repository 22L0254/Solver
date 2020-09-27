#include <stdio.h>
#include <math.h> 

main()
{
	double a,b,c,d,e,f,i,delta,x,y;
	unsigned short cmplx,brk=512;
	printf("一元二次方程求解器V0.51by他天一\n");
	printf("可求关于X的一元二次方程aX^2+bX+c=0中X的解。\n");
	while(brk!=48&&brk!=26){
		printf("是否开启复数解的功能?输入任意键开启,输入0关闭。\n");
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
			printf("\a错误:a的值不能为0\n\n");
		else if (delta<0.){
			if (cmplx==48)
				printf("\a错误:无实根\n\n");
			else printf("△=%g\nX1 = %.10G+%.10G*i\nX2 = %.10G-%.10G*i\n\n",delta,/*delta,b,*/x,y,/*delta,a,*/x,y);//这段求解方式来自网络，并不知道实际算法，遂未给出（ 
		}
		else if (delta>0.)
			printf("△=%g\n(-%.10g-√(%.10g))/2*(%.10g)\n(-%.10g-%.10g)/(%.10g)\nX1 = %.10G\n\n(-(%.10g+√(%.10g))/2*(%.10g)\n(-%.10g+%.10g)/(%.10g)\nX2 = %.10G\n\n",delta,b,delta,a,b,f,i,e,b,delta,a,b,f,i,d);
		else if (delta==0.)
			printf("△=%g\n(-(%.10g)+√(%.10g))/2*(%.10g)\n(-(%.10g)+(%.10g))/(%.10g)\nX = %.10G\n\n",delta,b,delta,a,b,f,i,e);
	printf("是否继续计算?输入任意键继续,输入0退出。\n");
	brk=getch();
	}
}
