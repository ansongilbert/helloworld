#include <stdio.h>
int main(void)
{
	int x=0,y=0;
    float Pi=3.1415926f;
	float radius=0.0f;
	float diameter=0.0f;
	float circumference=0.0f;
	float area=0.0f;
	printf("This is a small program for calculating the two basic data of circular subject.\n");
	do
	{
	printf("You want to know the circumference or the area of the subject?\n");
	printf("The first is1,the latter is 2,for both is 3\n");
	scanf("%d",&x);
    printf("Input the diameter of the circular subject.\n");
	scanf("%f",&diameter);
	radius=0.5f*diameter;
	circumference=2.0f*Pi*radius;
    area=Pi*radius*radius;
	if(x=1)
		printf("The circumference is %.3f\n\a",circumference);
	else if(x=2)
		printf("The area is %.3f\n\a",area);
	else
        printf("The circumference is %.3f\nThe area is %.3f\n\a",circumference,area);
		printf("Do you want to continue\n");
	    printf("For yes,please input 2,for no input 1\n");
		scanf("%d",&y);
	}
	while(y!=1);
}
