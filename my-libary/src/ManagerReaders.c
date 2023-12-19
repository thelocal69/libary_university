#include <stdio.h>
#include <string.h>
#include "ManagerReaders.h"

void showMenuReaders() {
	printf("\n1. Add readers\n");
	printf("\n2. Edit books\n");
	printf("\n3. Delete information by book name\n");
	printf("\n4. Search readers by CCCD\n");
	printf("\n5. Search readers by name\n");
	printf("\n6. Display listed readers\n");
	printf("\n0. Back menu\n");
}

void addReaders() {
	//initial value
	char readersID[100];
	char name[100];
	int cccd = 0;
	int day = 0;
	int month = 0;
	int year = 0;
	char gender[10];
	char email[100];
	char address[100];
	int createdDay = 0, expiredDay = 0;

	//enter readers id
	printf("\nEnter readers ID: \n");
	scanf("%s", readersID);
	printf("\nReaders ID is: ");
	puts(readersID);

	//enter name
	printf("\nEnter readers name: \n");
	scanf("%s", name);
	printf("\nReaders name is: ");
	puts(name);

	//enter cccd
	printf("\nEnter CCCD: \n");
	scanf("%d", &cccd);
	printf("\nReaders CCCD is: %d\n", cccd);

	//birth day
	printf("\nEnter readers birth day: \n");
	printf("\nEnter day: \n");
	scanf("%d", &day);
	printf("\nEnter month: \n");
	scanf("%d", &month);
	printf("\nEnter year: \n");
	scanf("%d", &year);
	printf("\nReaders birth day is: %d/%d/%d\n", day, month, year);

	//gender
	printf("\nEnter readers gender(M/F): \n");
	scanf("%s", gender);
	if (gender[0] == 'm' || gender[0] == 'M') {
		printf("\nReaders gender is Male(%c) \n", gender[0]);
	} else {
		printf("\nReaders gender is Female(%c) \n", gender[0]);
	}

	//email
	printf("\nEnter readers email: \n");
	scanf("%s", email);
	printf("\nReaders email is: ");
	puts(email);

	//address
	printf("\nEnter readers address: \n");
	scanf("%s", address);
	printf("\nReaders address is: ");
	puts(address);

	//created day
	printf("\nEnter readers created day: \n");
	scanf("%d", &createdDay);
	printf("\nReaders created day is: %d\n", createdDay);

	//expired day
	printf("\nEnter readers expired day: \n");
	scanf("%d", &expiredDay);
	printf("\nReaders expired day is: %d\n", expiredDay);
}

void managerReaders() {
	int choose;
	showMenuReaders();
	scanf("%d", &choose);
	switch (choose) {
	case 1:
		addReaders();
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
