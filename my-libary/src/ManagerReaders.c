#include <stdio.h>
#include "ManagerReaders.h"

void showMenuReaders() {
	printf("1. Add readers\n");
	printf("2. Edit books\n");
	printf("3. Delete information by book name\n");
	printf("4. Search readers by CCCD\n");
	printf("5. Search readers by name\n");
	printf("6. Display listed readers\n");
	printf("0. Back menu\n");
}

void addReaders(){

}

void managerReaders() {
	int choose;
	showMenuReaders();
	scanf("%d", &choose);
	switch (choose) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	case 7:
		break;
	case 0:
		break;
	}
}
