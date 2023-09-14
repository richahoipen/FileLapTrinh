#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,x;
	//ax+b=0
	printf("Nhap vao he so a: ");
	scanf("%f", &a);
	printf("Nhap vao he so b: ");
	scanf("%f", &b);
	if(a!=0)
	{
		x=-b/a;
		printf("Phuong trinh co nghiem x = %.2f", x);
	}else
	{
		if(b==0)
        {
			printf("Phuong trinh co vo so nghiem");
		}else
		{
			printf("Phuong trinh vo nghiem");
		}
	}
}

