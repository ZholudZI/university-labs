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
		printf("Second circle:\n");
		printf(" - Enter x coordinate: ");
		scanf_s("%f", &circle2.x);
		printf(" - Enter y coordinate: ");
		scanf_s("%f", &circle2.y);
		printf(" - Enter radius: ");
		scanf_s("%f", &circle2.r);

		float distance = sqrt((circle1.x - circle2.x) * (circle1.x - circle2.x) + (circle1.y - circle2.y) * (circle1.y - circle2.y));

		if (circle1.r == circle2.r && distance == 0) {
			printf("circle1 = circle2");
		} 
		else if (distance > circle1.r + circle2.r) {
			printf("circles no intersect");
		} 
		else if (distance == circle1.r + circle2.r) {
			printf("circles touches outside");
		}
		else if (distance > circle1.r && distance > circle2.r) {
			printf("circles intersects outside");
		} 
		else if (distance + circle1.r < circle2.r || distance + circle2.r < circle1.r) {
			printf("circle in circle");
		}
		else if (distance + circle1.r == circle2.r || distance + circle2.r == circle1.r) {
			printf("circles touches inside");
		}
		else { //think about it (distance <= circle1.r || distance <= circle2.r
			printf("circles intersects inside");
		}
}