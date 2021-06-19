#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include<string.h>

#define WIDTH 20
#define HEIGHT 10

typedef struct
{
	int x;
	int y;

	int act;
}Star;

typedef struct
{
	int x;
}Player;

typedef struct
{
	int score;
	char name[20];
}User;

typedef struct
{
	int tmpscore;
	char tmpname[20];
}Tmp;

User user[1000];
Star star[WIDTH];
Player player;
Tmp tmp;

void gotoxy(int x, int y) 
{
	COORD pos = { 2 * x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int isKeyDown(int key) 
{
	return ((GetAsyncKeyState(key) & 0x8000) != 0);
}

void init()  //�ʱⰪ, �÷��̾ �߾ӿ� ��ġ�ϴ� �ڵ�
{
	int i;

	for (i = 0; i < WIDTH; i++)
		star[i].act = FALSE;

	player.x = WIDTH / 2;
}

void CreateStar() //���� �����ϴ� �ڵ�
{
	int i;

	for (i = 0; i < WIDTH; i++)
	{
		if (!star[i].act)
		{
			star[i].x = rand() % WIDTH;
			star[i].y = HEIGHT - 1;

			star[i].act = TRUE;

			return;
		}
	}
}

void MoveStar()  //���� ����Ʈ���� �ڵ�
{
	int i;

	for (i = 0; i < WIDTH; i++)
	{
		if (star[i].act)
		{
			star[i].y--;
		}
	}
}

void DeleteStar() //���� �� ���������� �����ִ� �ڵ�
{
	int i;

	for (i = 0; i < WIDTH; i++)
	{
		if (star[i].act && star[i].y < 0)
		{
			star[i].act = FALSE;
		}
	}
}

int PlayerContainsStar() //�÷��̿� ���� ������ ��������ִ� �ڵ�
{
	int i;

	for (i = 0; i < WIDTH; i++)
	{
		if ((star[i].act) && (star[i].y == 0) && (star[i].x == player.x))
		{
			return TRUE;
		}
	}

	return FALSE;
}

void MovePlayer() //�÷��̾ ������ �� �ְ� ���ִ� �ڵ�
{
	if (isKeyDown(VK_LEFT))
		player.x -= 1;
	if (isKeyDown(VK_RIGHT))
		player.x += 1;

	if (player.x < 0)
		player.x = 0;
	if (player.x > WIDTH - 1)
		player.x = WIDTH - 1;
}

void PrintMap() //��,��,�÷��̾ ȭ������ ������ִ� �ڵ�
{
	int i;

	for (i = 0; i < WIDTH; i++)
	{
		if (star[i].act)
		{
			gotoxy(star[i].x, HEIGHT - star[i].y);
			printf("��");
		}
	}

	gotoxy(player.x, HEIGHT);
	printf("��");

	gotoxy(0, HEIGHT + 1);
	for (i = 0; i < WIDTH; i++)
		printf("��");
}

int File(char name[],int cnt) {
	FILE* fp = fopen("production.txt", "a+");
	fprintf(fp, "%s: %d", name,cnt);
	fclose(fp);
}

void FileView() {
	int i = 0;
	int k = 0;

	FILE* fp;
	fp = fopen("production.txt", "r");
		char name[20] = "";
		int score;
		while (!feof(fp)) {
			fscanf(fp,"%s %d",name, &score);
				user[i].score = score;
				strcpy(user[i].name, name);
			i++;

			k++;
		}

		Sort(k);
		fclose(fp);
}

int Sort(int k) {

	int ranking = 1;
	for (int i = 0; i < k; i++) {
		for (int j = i + 1; j < k; j++) {
			if (user[i].score > user[j].score) {
				memcpy(&tmp, &user[i], sizeof(User));
				memcpy(&user[i], &user[j], sizeof(User));
				memcpy(&user[j], &tmp, sizeof(User));
			}
		}
	}
	for (int i = k-1; i >=0; i--)
		{
			printf("%d��: %s %d��\n", ranking++, user[i].name, user[i].score);
		}
}

void Count() {
	system("cls");
	for (int i = 3; i > 0; i--) {
	printf("��������������������������������������������������������������������\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��               %d                ��\n",i);
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��������������������������������������������������������������������\n");
	Sleep(700);
	system("cls");
	}
}

void StartView(){
	printf("��������������������������������������������������������������������\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��            �� ���ϱ�           ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��������������������������������������������������������������������\n");
}

void EndView() {
	system("cls");
	printf("��������������������������������������������������������������������\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��            GAME OVER           ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��                                ��\n");
	printf("��������������������������������������������������������������������\n");
}

void gmae() {

}

void main()
{	
	int cnt = 0;
	char name[20];

	StartView();

		printf("�̸�: ");
		scanf("%s", name);
		
		Count();
		init();

		do
		{
			system("mode con cols=40 lines=20");

			srand((int)malloc(NULL));

			CreateStar();
			MoveStar();
			DeleteStar();

			MovePlayer();

			PrintMap();


			printf("\n����: %d��", cnt);

			Sleep(50);
			cnt++;
		} while (!(PlayerContainsStar()));

	EndView();
	Sleep(1000);
	printf("\n\n%d�� �Դϴ�!\n", cnt);

	File(name,cnt);
	FileView();
}