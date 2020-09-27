#include <stdio.h>
main()
{
	double a,b,c,d,e,f,X,Y;
	int brk=1;
	printf("二元一次方程求解器Ver0.31By他天一\n");
	printf("可求关于X,Y的二元一次方程\naX+bY=c\ndX+eY=f的解\n\n");
	while(brk!=48&&brk!=26){
		printf("a=");
		scanf("%lf",&a);
		printf("b=");
		scanf("%lf",&b);
		printf("c=");
		scanf("%lf",&c);
		printf("d=");
		scanf("%lf",&d);
		printf("e=");
		scanf("%lf",&e);
		printf("f=");
		scanf("%lf",&f);
	X=(c*e-f*b)/(a*e-b*d);
	Y=(c*d-f*a)/(b*d-a*e);
	if(a*e==b*d)
	printf("错误：无解\a\n\n");
else{printf("X=(%lg*%lg-%lg*%lg)/(%lg*%lg-%lg*%lg)\n=%lg\n\n",c,e,f,b,a,e,b,d,X);printf("Y=(%lg*%lg-%lg*%lg)/(%lg*%lg-%lg*%lg)\n=%lg\n\n",c,d,f,a,b,d,a,e,Y);}
printf("继续计算吗?输入\"0\"退出\n");
brk=getch();
	}
}
