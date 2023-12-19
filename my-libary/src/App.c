#include <stdio.h>
#include "ManagerReaders.h"

int main(void) {

	int input;

	do {
		printf("1. Input readers\n");
		printf("2. Input books\n");
		printf("3. Find information by book name\n");
		printf("4. Borrow books\n");
		printf("5. Listed borrow books by readers\n");
		printf("6. Listed readers borrow books out of date by decending\n");
		printf("7. Print 10 most books have quantity borrow \n");
		printf("8. Load Data\n");
		printf("9. Save Data\n");
		printf("0. Exit\n");
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
