#include <stdio.h>

int main(void)
{
	data_list[5] = { 0,1,2,3,4 };
	char* text = "I'm Betnam! Swear to me!";
	FILE* p_file = fopen("jin.dat", "wb");

	if (NULL != p_file) {
		fwrite(&data1, sizeof(int), 1, p_file);
		fwrite(&data2, sizeof(int), 5, p_file);
		
	
	}



}