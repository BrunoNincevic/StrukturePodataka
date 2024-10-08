#define _CRT_SECURE_NO_WARNINGS
#define ERROR_OPPENING_FILE 1
#include <stdio.h>
#define BUFFER_SIZE 1024


int count_rows(char* filename);

int main() {

	printf("Hello svijete");

	return 0;

}
int count_rows(char* filename) {
	FILE* fp = NULL;
	char buffer[BUFFER_SIZE];
	int row_counter = 0;

	fp = fopen(filename, "r");
	if (fp == NULL) {
		printf("Error opening file\n");
		return ERROR_OPPENING_FILE;
	}
	while (!feof(fp)) {
		fgets(buffer, BUFFER_SIZE, fp);
		//sscanf() doma napravi mozda
		++row_counter;
	}

	fclose(fp);
	return 0;
}