#include <stdio.h>
main()
{
	double a,b,c,d,e,f,X,Y;
	int brk=1;
	printf("��Ԫһ�η��������Ver0.31By����һ\n");
	printf("�������X,Y�Ķ�Ԫһ�η���\naX+bY=c\ndX+eY=f�Ľ�\n\n");
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
	printf("�����޽�\a\n\n");
else{printf("X=(%lg*%lg-%lg*%lg)/(%lg*%lg-%lg*%lg)\n=%lg\n\n",c,e,f,b,a,e,b,d,X);printf("Y=(%lg*%lg-%lg*%lg)/(%lg*%lg-%lg*%lg)\n=%lg\n\n",c,d,f,a,b,d,a,e,Y);}
printf("����������?����\"0\"�˳�\n");
brk=getch();
	}
}
