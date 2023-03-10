#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr1, *fptr2;
	char filename[100], c;

	printf("Enter the filename to open for reading \n");
	scanf("%s", filename);

	//Open the first file for reading
	fptr1 = fopen(filename, "r");
	if(fptr1 == NULL)
	{
		printf("Cannot Open file \n");
		exit(0);
	}

	printf("Enter file name to write to\n");
	scanf("%s", filename);

	//Open file to write to
	fptr2 = fopen(filename, "w");
	if(fptr2 == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}

	
	//Reading content from the file
	c = fgetc(fptr1);
	while (c!=EOF)
	{
		fputc(c, fptr2);
		c = fgetc(fptr1);
	}

	
	printf("Contents Copied to %s!", filename);

	fclose(fptr1);
	fclose(fptr2);
	return 0;

}
