#include <bits/stdc++.h>

int main()
{
	FILE* fptr;

	char file[50] = { "file.txt" };
	char ch;

	fptr = fopen(file, "r");
	ch = fgetc(fptr);

	while (ch != EOF) {

		ch = toupper(ch);
		printf("%c", ch);
		ch = fgetc(fptr);
	}

	fclose(fptr);

	return 0;
}

