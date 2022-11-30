#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#pragma pack(push, 1)		: 구조체 8바이트 할당 -> 1바이트 할당

//typedef struct USERDATA
//{
//	int nAge;
//	char szName[32];
//	char szPhone[32];
//}USERDATA;
//
//USERDATA GetUserData(void)
//{
//	USERDATA user = { 0 };
//	scanf_s("%d%*c", &user.nAge);
//	gets_s(user.szName, sizeof(user.szName));
//	gets_s(user.szPhone, sizeof(user.szPhone));
//	return user;
//}
//
//void PGetUserData(USERDATA* pUser)
//{
//	scanf_s("%d%*c", &pUser->nAge);
//	gets_s(pUser->szName, sizeof(pUser->szName));
//	gets_s(pUser->szPhone, sizeof(pUser->szPhone));
//}
//
//typedef struct MYBODY
//{
//	double nHeight;
//	double nWeight;
//	char sex;
//}MYBODY;
//
//typedef struct CLIENT
//{
//	char szName[32];
//	char szPhone[32];
//	MYBODY body;
//}CLIENT;
//
//typedef struct WINNER
//{
//	char szName[32];
//	char szPhone[32];
//	struct WINNER* pNext;
//}WINNER;
//
//typedef struct _DATAFLAG
//{
//	unsigned char main : 1;
//	unsigned char left : 2;
//	unsigned char right : 3;
//	unsigned char top : 2;
//}DATAFLAG;
//
//typedef union _IP_ADDR
//{
//	int nAddress;
//	short awData[2];
//	unsigned char addr[4];
//}IP_ADDR;

//#pragma pack(pop)

int main_struct(void)
{
	// struct

	/*USERDATA user = { 0, "", "" };

	user.nAge = 10;
	strcpy_s(user.szName, sizeof(user.szName), "Hoon");
	strcpy_s(user.szPhone, sizeof(user.szPhone), "010-1234-1234");

	printf("%d\n%s\n%s\n\n", user.nAge, user.szName, user.szPhone);*/


	// struct array

	/*USERDATA user_list[3] = {
		{ 10, "김어준", "1234" },
		{ 11, "정봉주", "3456" },
		{ 17, "주진우", "4567" }
	};

	int i = 0;

	for(i = 0; i < 3; i++)
		printf("%d\n%s\n%s\n", user_list[i].nAge, user_list[i].szName, user_list[i].szPhone);*/


	// struct alloc

	/*USERDATA* p_user = NULL;

	p_user = (USERDATA*)malloc(sizeof(USERDATA));

	p_user->nAge = 10;
	strcpy_s(p_user->szName, sizeof(p_user->szName), "Hoon");
	strcpy_s(p_user->szPhone, sizeof(p_user->szPhone), "010-1234-1234");

	printf("%d\n%s\n%s\n", p_user->nAge, p_user->szName, p_user->szPhone);

	free(p_user);*/


	// func

	/*USERDATA user = { 0 };
	user = GetUserData();
	printf("%d살, %s, %s\n", user.nAge, user.szName, user.szPhone);*/


	//func pointer

	/*USERDATA user2 = { 0 };
	PGetUserData(&user2);
	printf("%d살, %s, %s\n", user2.nAge, user2.szName, user2.szPhone);*/


	// struct of struct

	/*CLIENT user = {
		"Hoon",
		"15423",
		{ 175, 40, "M" }
	};

	printf("%s, %s, %dcm, %dkg, %c\n", user.szName, user.szPhone, user.body.nHeight, user.body.nWeight, user.body.sex);*/


	// Linked struct

	/*WINNER winnerList[3] = {
		{ "김어준", "1234", NULL },
		{ "정봉주", "3456", NULL },
		{ "주진우", "4567", NULL }
	};

	WINNER* pUser = NULL;

	winnerList[0].pNext = &winnerList[1];
	winnerList[1].pNext = &winnerList[2];
	winnerList[2].pNext = NULL;

	pUser = &winnerList[0];
	while (pUser != NULL)
	{
		printf("%s, %s\n", pUser->szName, pUser->szPhone);

		pUser = pUser->pNext;
	}*/


	// sizeof(struct)

	/*printf("%d\n%d\n", sizeof(USERDATA), sizeof(MYBODY));*/


	// bit field

	/*DATAFLAG flagSwitch = { 0, 3, 7, 5 };

	printf("%d\n", flagSwitch.main);
	printf("%d\n", flagSwitch.left);
	printf("%d\n", flagSwitch.right);
	printf("%d\n", flagSwitch.top);

	printf("%X\n", *((unsigned char*)&flagSwitch));
	printf("%d\n", sizeof(flagSwitch));*/

	
	// union

	IP_ADDR Data = { 0 };
	Data.nAddress = 0x41424344;

	printf("%c%c%c%c\n", Data.addr[0], Data.addr[1], Data.addr[2], Data.addr[3]);

	printf("%X, %d\n", Data.awData[0], Data.awData[0]);
	printf("%X, %d\n", Data.awData[1], Data.awData[1]);

	return 0;
}