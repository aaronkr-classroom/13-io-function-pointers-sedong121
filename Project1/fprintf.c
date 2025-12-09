#include <stdio.h>

int main(void) {
	char* string = "World, Hello!";
	short int data = 0xACFC;

	FILE* p_file = fopen("hello.txt", "wt");

	if (NULL != p_file) {
		fprintf(p_file, "%s\n", string);
		fprintf(p_file, "%s\n", data);

		printf("파일 내용을 이렇게 썼어요~!");

		fclose(p_file);

	}

	return 0;


}