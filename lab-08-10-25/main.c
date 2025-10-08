#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARR_SIZE 10

void main() {
	srand(time(0));
	printf("0. Enter array\n1. Genereate array\n");
	unsigned int user_choose = 0;
	printf("Enter you choose: ");
	while (scanf("%d", &user_choose) != 1 || user_choose > 1) {
		printf("Encorrect value\n");
		while (getchar() != '\n' && getchar() != EOF);
		printf("Enter you choose: ");
	}
	unsigned char arr[ARR_SIZE] = {0};
	if (user_choose) {
		for(size_t i = 0; i < ARR_SIZE; ++i) {
			arr[i] = rand() % 256;
			printf("%u. %u\n", i, arr[i]);
		}
	}
	else {
		for (size_t i = 0; i < ARR_SIZE; ++i) {
			unsigned char temp = 0;
			printf("Enter element %d: ", i);
			scanf("%u", &temp);
		}
	}
	printf("\n\n\n\n");
	unsigned char counter_arr[256] = {0};
	for (size_t i = 0; i < ARR_SIZE; ++i) {
		counter_arr[arr[i]]++;
	}
	for (size_t i = 0; i < 256; ++i) {
		if (counter_arr[i]) {
			printf("%u - %u\n", i, counter_arr[i]);
		}
	}
}