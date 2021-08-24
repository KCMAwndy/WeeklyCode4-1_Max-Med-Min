#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x, y, z, max = 0, min = 0, med = 0;
	printf("Enter 3 Number : ");
	scanf("%d%d%d", &x, &y, &z);
	if (x > y) {
		if (x > z) {
			max = x;
			if (y > z) {
				med = y;
				min = z;
			}
			else {
				med = z;
				min = y;
			}
		}
		else {
			med = x;
			min = y;
			max = z;
		}
	}
	else {
		if (x > z) {
			med = x;
			max = y;
			min = z;
		}
		else {
			min = x;
			if (y > z) {
				max = y;
				med = z;
			}
			else {
				med = y;
				max = z;

			}
		}
	}
	printf("max = %d,med = %d,min = %d", max, med, min);
	return 0;
}