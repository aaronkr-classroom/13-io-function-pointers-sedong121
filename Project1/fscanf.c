#include <stdio.h>

int main(void) {
	int temp;
	FILE* p_file = fopen("nums.txt", "rt");

	if (NULL != p_file) {

		printf("파일이 열었습니다!");
	}
	return 0;
}