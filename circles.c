#include <stdio.h>
#include <math.h>

struct  circle
{
	float x, y, r;
};

void main() {
	struct circle circle1;
	struct circle circle2;
	printf("First circle:\n");
	printf(" - Enter x coordinate: ");
	scanf_s("%f", &circle1.x);
	printf(" - Enter y coordinate: ");
	scanf_s("%f", &circle1.y);
	printf(" - Enter radius: ");
	scanf_s("%f", &circle1.r);
	printf("------------------------------------\n");
	printf("First circle:\n");
	printf(" - Enter x coordinate: ");
	scanf_s("%f", &circle1.x);
	printf(" - Enter y coordinate: ");
	scanf_s("%f", &circle1.y);
	printf(" - Enter radius: ");
	scanf_s("%f", &circle1.r);

	float distance = sqrt((circle1.x - circle2.x) * (circle1.x - circle2.x) + (circle1.y - circle2.y) * (circle1.y - circle2.y));
	if (circle1.r == circle2.r && distance == 0) {
		printf("circle1 = circle2");
	}
	else if (distance > circle1.r + circle2.r) {
		printf("circles no touches");
	}
}