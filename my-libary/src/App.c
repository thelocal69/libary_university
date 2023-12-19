#include <stdio.h>
#include "ManagerReaders.h"

int main(int argc, char **argv) {

	int input;

	do {
		printf("\n1. Input readers\n");
		printf("\n2. Input books\n");
		printf("\n3. Find information by book name\n");
		printf("\n4. Borrow books\n");
		printf("\n5. Listed borrow books by readers\n");
		printf("\n6. Listed readers borrow books out of date by decending\n");
		printf("\n7. Print 10 most books have quantity borrow \n");
		printf("\n8. Load Data\n");
		printf("\n9. Save Data\n");
		printf("\n0. Exit\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			managerReaders();
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:
			printf("test");
			break;
		case 5:
			printf("test");
			break;
		case 6:
			printf("test");
			break;
		case 7:
			printf("test");
			break;
		case 8:
			printf("test");
			break;
		case 9:

			break;
		default:
			printf("Program is closed !\n");
			break;
		}
	} while (input != 0);

	return 0;
}
