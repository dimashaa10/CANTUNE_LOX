#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <time.h>
#include "lac.h"
//#include "main.h"
#ifdef _WIN32
#include <direct.h>
#define MKDIR(path) _mkdir(path)
#else
#include <sys/stat.h>
#define MKDIR(path) mkdir(path, 0755)
#endif

// // NASA ��

void museum();
void house();
void casino();
void cinema();
void money();
void buyfishki();
void arts();
void nashel_rubli();
void archives();
void SugarRush();
void hodim();
void casebattle();
void casebattle2(int cb_choice);
void rand_cb(int cb_choice, int color);
void sculpts();
void sell_fishki();
void watch_film();
void watch_cartoon();
void pomoika();
void ashan();
void buy();
void workscam();
void seller();
void ishem_bumagu();
void ishem_metall();
void ishem_electro();
void ishem_butilki();
void mainmenu();
void save_load();
void newgame();
void credits();
void gameover();
void save_test();
void live();
void gen_gameid();
void work_ads();

struct enemy {
	char name[32];
	int health;
	int damage;
};



//gameid 1000

int rubli;
int fishki;
int* pRubli = &rubli;
int* pFishki = &fishki;
int golod;
int jajda;
int color;
int* pColor = &color;
int* pGolod = &golod;
int* pJajda = &jajda;
int cb_choice;
int daylive;
int* pDaylive = &daylive;
int butilok;
int* pButilok = &butilok;
float metall;
int* pMetall = &metall;
float bumaga;
int* pBumaga = &bumaga;
int elec;
int* pElec = &elec;
char name[32];
int shiza;
int* pShiza = &shiza;

int main() {
	setlocale(LC_ALL, "Russian");
	gen_gameid();
	mainmenu();
	



	return 0;
}

void money() {
	printf("%s\n", name);
	printf("�� �������: %d ����\n", *pDaylive);
	printf("������: %d\n", *pRubli);
	printf("�����: %d\n", *pGolod);
	printf("�����: %d\n", *pJajda);
	printf("��������: %d\n", *pShiza);
	printf("�������/��: %d\n", *pButilok);
	printf("����������/��: %d\n", *pBumaga);
	printf("������/��: %d\n", *pMetall);
	printf("�����������/��: %d\n", *pElec);

	if (pGolod <= 1 || pJajda <= 1 || pShiza <= 1) {
		gameover();
	}
	live();
}

void museum() {
	money();
	printf("�� � �����.\n");
	printf("1. ���������� ���������� - 100 ������\n");
	printf("2. ���������� ���������� - 200 ������\n");
	printf("3. ���������� ������ - 50 ������\n");
	printf("4. �����\n");
	int choice;
	scanf_s("%d", &choice);
	switch (choice) {
	case 1:
		if (pRubli >= 100) {
			printf("�� ������� ���������� ����������.\n");
			arts();
			} else {
			printf("� ��� ������������ �����.\n");
			museum();
			}
			break;
				
				break;
			case 2:
				if (pRubli >= 200) {
				printf("�� ������� ���������� �� ����������.\n");
				sculpts();
				} else {
				printf("� ��� ������������ �����.\n");
				museum();
				}
				
				break;
			case 3:
				if (pRubli >= 50) {
				printf("�� ������� ���������� ������.\n");
				archives();
				} else {
				printf("� ��� ������������ �����.\n");
				museum();
				}
				break;
				case 4:
				printf("�� ������� �����.\n");
				house();
				break;

			default:
				printf("������� �������� �����.\n");
				museum();
				break;
			}
		}

		void house() {
			money();
			printf("�� ����.\n ���� �����?\n");
			printf("1. �������� �����\n");
			printf("2. �������� ���������\n");
			printf("3. �������� ������\n");
			printf("4. ���������� �����\n");
			printf("5. ����� � ������� ����\n");
			int choice;
			scanf_s("%d", &choice);
			switch (choice) {
			case 1:
				printf("�� ������ ����������� ��������.\n");
				hodim();
				museum();
				break;
			case 2:
				printf("�� �������� ���������� ������.\n");
				hodim();
				cinema();
				break;
			case 3:
				printf("�� �������� �������� ��� ����� � ������.\n");
				hodim();
				casino();
				break;
			case 4:
				printf("׸ �� ������, ����?\n");
				hodim();
				workscam();
				break;
			case 5:
				printf("�� ������� �����.\n");
				mainmenu();
				break;
			default:
				printf("������� �������� �����.\n");
				house();
				break;
				}
		}

		void cinema() {
			money();
			printf("�� � ����������.\n");
			printf("1. ���������� �����.\n");
			printf("2. ���������� ������.\n");
			printf("3. ���������� ����������.\n");
			printf("4. �����\n");
			int choice;
			scanf_s("%d", &choice);
			switch (choice) {
			case 1:
				printf("�� ������� ���������� ������.\n");
				hodim();
				break;
			case 2:
				printf("�� ������� ���������� �������.\n");
				hodim();
				break;
			case 3:
				printf("�� ������� ���������� �������������� ������.\n");
				hodim();
				break;
			case 4:
				printf("�� ������� �����.\n");
				house();
				break;
			default:
				printf("������� �������� �����.\n");
				break;
			}
		}

		
		void casino() {
			money();
			printf("�� � ������\n");
			printf("1. ������� �����\n");
			printf("2. ������ �����\n");
			printf("3. ������� �����\n");
			printf("4. ������ � �������\n");
			printf("5. �����\n");
			int choice;
			scanf_s("%d", &choice);
			switch (choice) {
			case 1:
				printf("�� ������� ����� ��������� �����.\n");
				hodim();
				SugarRush();
				break;
			case 2:
				printf("�� ������� ������ �����.\n");
				hodim();
				buyfishki();
				break;
			case 3:
				printf("�� ������� ������� �����.\n");
				hodim();
				sell_fishki();
				break;
			case 4:
				printf("�� ������� ����� ������ � �������.\n");
				casebattle();
				hodim();
				break;
			case 5:
				printf("�� ������� �����.\n");
				house();
				break;
			default:
				printf("������� �������� �����.\n");
				break;
			}
		}
		
		void buyfishki() {
			money();
			printf("������� �� ������ ������ �����? - 1 ����� 10 ������\n");
			int choice;

			if (scanf_s("%d", &choice) != 1) {
				printf("������ �����.\n");
				return;
			}

			if (choice <= 0) {
				printf("������� ������������� ���������� �����.\n");
				return;
			}

			if (choice <= *pRubli / 10) {
				*pRubli -= choice * 10;
				*pFishki += choice;
				printf("�������! �� ������ %d �����. � ������ ������� ������� %d ������\n", choice, choice * 10);
				casino();
			}
			else {
				printf("� ��� ������������ ������\n");
				casino();
			}


		}

		void sell_fishki() {
			money();
			printf("������� �� ������ ������� �����? - 1 ����� 10 ������\n");
			int choice;
			if (scanf_s("%d", &choice) != 1) {
				printf("������ �����.\n");
				return;
			}

			if (choice <= 0) {
				printf("������� ������������� ���������� �����.\n");
				return;
			}

			if (choice <= *pFishki) {
				*pRubli += choice * 10;
				*pFishki -= choice;
				printf("�������! �� ������� %d �����. ��� ������ �������� �� %d ������\n", choice, choice * 10);
				casino();
			}
			else {
				printf("� ��� ������������ �����\n");
				casino();
			}
		}

		void SugarRush() {
			srand(time(0));
			money();
			int choice;
			printf("�������� ������:\n");
			printf("1. 10 ������\n 2. 100 ������\n 3. 1000 ������\n 4. �����\n");

			
			
			scanf_s("%d", &choice);
			switch (choice) {
			case 1:
				if(*pRubli >= 10) {
				printf("�� ������� ������ 10 ������\n");
				int kaz = rand() % 3;
				if(kaz == 0) {
					printf("����� ����!? �� ���� ��� ������\n");
					*pRubli -= 10;
					*pShiza -= 10;
					SugarRush();
				} else if(kaz == 1) {
					printf("�� ������� 10 ������. ���� �� �� � �����\n");
					*pShiza -= 3;
					SugarRush();
				} else {
					printf("�����!! �� ������ �2!!\n");
					*pRubli += 20;
					*pShiza += 20;
					SugarRush();

				}
				break;
			} else {
				printf("������������ �������\n");
				SugarRush();
			}
			case 2:
				if(*pRubli >= 100) {
				printf("�� ������� ������ 100 ������\n");
				int kaz = rand() % 2;
				if(kaz == 0) {
					printf("����� ����!? �� ���� ��� ������\n");
					*pRubli -= 100;
					*pShiza -= 20;
					SugarRush();
				} else if(kaz == 1) {
					printf("�� ������� 100 ������. ���� �� �� � �����\n");
					
					SugarRush();
				} else {
					printf("�����!! �� ������ �2!!\n");
					*pRubli += 200;
					*pShiza += 35;
					SugarRush();
				}
				
				break;
			} else {
				printf("������������ �������\n");
				SugarRush();
			}
			case 3:
				if(*pRubli >= 1000) {
				printf("�� ������� ������ 1000 ������\n");
				int kaz = rand() % 2;
				if(kaz == 0) {
					printf("����� ����!? �� ���� ��� ������\n");
					*pRubli -= 1000;
					*pShiza -= 40;
					SugarRush();
				} else if(kaz == 1) {
					printf("�� ������� 1000 ������. ���� �� �� � �����\n");
					*pShiza += 10;
					SugarRush();
				} else {
					printf("�����!! �� ������ �2!!\n");
					*pShiza += 99;
					*pRubli += 2000;
					SugarRush();

				}
				
				break;
			} else {
				printf("������������ �������\n");
				SugarRush();
			}
			case 4:
				printf("�� ����� ������� � ������\n");
				casino();
				break;
			default:
				printf("������� �������� �����.\n");
				SugarRush();
				break;
			}
		}

		void casebattle() {
			money();
			printf("� ��� %d �����\n", *pFishki);
			printf("�������� ������\n");
			printf("1. ���� �����\n2. ���� �����\n3. ������ �����\n 4. �����\n");
			int cb_choice;
			scanf_s("%d", &cb_choice);
			switch(cb_choice) {
				case 1:
					if(*pFishki >= 1) {
						printf("���� ������ ����� 1 �����\n");
						cb_choice = 1;
						casebattle2(cb_choice);
						break; 
					} else {
						printf("������������ �������\n");
						casebattle();
						break;
				}
				case 2:
					if(*pFishki >= 5) {
						printf("���� ������ ����� 5 ������\n");
						cb_choice = 2;
						casebattle2(cb_choice);
						break;				
					} else {
						printf("������������ �������\n");
						casebattle();
						break;
				}
				case 3:
					if(*pFishki >= 10) {
						printf("���� ������ ����� 10 ������\n");
						cb_choice = 3;
						casebattle2(cb_choice);
						break;
					} else {
						printf("������������ �������\n");
						casebattle();
						break;
				}	
				case 4:
					printf("�� ����� �� ������\n");
					casino();
					break;

				default:
					printf("������� �������� �����\n");
					casebattle();
					break;

			}

		}

		void casebattle2(int cb_choice) {
			money();
			printf("��� �� �������, ����� ���� �������?\n");
			printf("1. �������\n2. ������\n3. �������\n");

			if (scanf_s("%d", &color) != 1 || color < 1 || color > 3) {
				printf("������������ ����.\n");
				casebattle2(cb_choice);
				return;
			}

			switch (color) {
			case 1:
				printf("�� ������� �������\n");
				rand_cb(cb_choice, color);
				break;
			case 2:
				printf("�� ������� ������\n");
				rand_cb(cb_choice, color);
				break;
			case 3:
				printf("�� ������� �������\n");
				rand_cb(cb_choice, color);
				break;
			}
			rand_cb(cb_choice, color);
		}

		void rand_cb(int cb_choice, int color) {
			int winnumb = rand() % 37;
			int wincolor;

			if (winnumb == 0) {
				wincolor = 3; // ������
			}
			else if (winnumb >= 1 && winnumb <= 18) {
				wincolor = 1; // �������
			}
			else {
				wincolor = 2; // ������
			}

			if (wincolor == 1) {
				printf("������ �������\n");
			}
			else if (wincolor == 2) {
				printf("������ ������\n");
			}
			else {
				printf("������ �������\n");
			}

			if (wincolor == color) {
				printf("�� ��������!\n");
				switch (cb_choice) {
				case 1: *pFishki += 2; *pShiza += 2; break;
				case 2: *pFishki += 10; *pShiza += 10; break;
				case 3: *pFishki += 20; *pShiza += 20; break;
				}
			}
			else {
				printf("�� ���������\n");
				switch (cb_choice) {
				case 1: *pFishki -= 1; *pShiza -= 1; break;
				case 2: *pFishki -= 5; *pShiza -= 5; break;
				case 3: *pFishki -= 10; *pShiza -= 10; break;
				}
			}

			printf("������ � ��� %d �����\n", *pFishki);
			casebattle();
		}

		

		void arts() {
			money();
			printf("����� ������� �� ������ ����������?\n");
			printf("1. ����� �����\n");
			printf("2. ������\n");
			printf("3. ������ ���*����\n");
			printf("4. �����\n");
				int choice;
				scanf_s("%d", &choice);
				switch (choice) {
				case 1:
					printf("� ��� ����� ����� �� ����� �����.\n");
					*pShiza += 15;
					
					arts();
					break;
				case 2:
					printf("� ��� ����� ����� �� ������.\n");
					*pShiza += 7;
					
					arts();
					break;
				case 3:
					printf("� ��� ���� ����� �� ������ ���*���.\n");
					*pShiza -= 4;
					hodim();
					arts();
					break;
				case 4:
					printf("�� ������� �����.\n");
					museum();
					break;
				default:
					printf("������� �������� �����.\n");
					arts();
					break;
				}
			}

		void archives() {
			money();
			printf("�� � �������.\n");
			printf("1. ���������� ���������\n");
			printf("2. ���������� �����\n");
			printf("3. �������� � �����\n");
			int choice;
			scanf_s("%d", &choice);
			switch (choice) {
			case 1:
				printf("����� ������ ���������� �� �� ����� ������ �����������.\n");
				*pShiza += 1;
				hodim();
				archives();
				break;
			case 2:
				printf("�� �� ����� �������� ����, �� �� �� ����� ������ �����������.\n");
				*pShiza += 1;
				hodim();
				archives();
				break;
			case 3:
				printf("�� ������� ��������� � �����.\n");
				hodim();
				museum();
				break;
			default:
				printf("������� �������� �����.\n");
				archives();
				break;
			}
		}

		
		void hodim() {
			srand(time(0));
			int hodim = 1 + rand() % 100;
			if (hodim == 50) {
				nashel_rubli();
			}
		

		}

		void nashel_rubli() {
			//1, 2, 5, 10, 50, 100

			srand(time(0));
			int skolko_nashel;
			int kakuyu_nashel = 1 + rand() % 6;
			switch (kakuyu_nashel) {
			case 1:
				*pRubli += 1;
				skolko_nashel = 1;
				break;
			case 2:
				*pRubli += 2;
				skolko_nashel = 2;
				break;
			case 3:
				*pRubli += 5;
				skolko_nashel = 5;
				break;
			case 4:
				*pRubli += 10;
				skolko_nashel = 10;
				break;
			case 5:
				*pRubli += 50;
				skolko_nashel = 50;
				break;
			case 6:
				*pRubli += 100;
				skolko_nashel = 100;
				break;
			}
			
			printf("�� ����� %d ������\n", skolko_nashel);
			money();

		}

	void sculpts() {
		money();
		printf("�� ����� ���������� �� ������ ����������?\n");
		printf("1. ������ ������\n");
		printf("2. ����� ����\n");
		printf("3. �����-���������\n");
		printf("4. ������ ˸��\n");
		printf("5. �����\n");
		int choice;
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			printf("�� �� ���� ������� �����, �� ��� ���� �������.\n");
			*pShiza += 8;
			
			hodim();
			sculpts();
			break;
		case 2:
			printf("������ ���� �� � ���� ��������.\n");
			*pShiza += 5;
			
			hodim();
			sculpts();
			break;
		case 3:
			printf("��� ��� �� ������? � ���� �� ���� ��������.\n");
			*pShiza -= 1;
			
			hodim();
			sculpts();
			break;
		case 4:
			printf("� ˸�� � ����� � ������ ����� ���.\n");
			*pShiza += 4;
			
			hodim();
			sculpts();
			break;
		case 5:
			printf("�� ��������� �������.\n");
			hodim();
			museum();
			break;
		default:
			printf("������� �������� �����.\n");
			sculpts();
			break;
		}
	}

	void watch_film() {
		money();
		printf("�������� �����:\n");
		printf("1. ����� �� ����\n");
		printf("2. ������\n");
		printf("3. ��������\n");
		printf("4. �����\n");
		printf("5. ��� �������������\n");
		printf("6. �� �� �� �� ���� ��������\n");
		
		int choice;
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			printf("�� ����� ������ ���������� �� �������� ����� � ��� �������� �����.\n");
			*pShiza += 11;
			
			cinema();
			break;
		case 2 :
			printf("��� ���� ����� ������.\n");
			*pShiza -= 4;
			
			cinema();
			break;
		case 3:
			printf("�� ������� � ����� ������.\n");
			*pShiza += 7;
			
			cinema();
			break;
		case 4:
			printf("��� ���� ������� ��� ��� ��������� ����� �����.\n");
			*pShiza += 5;
			
			cinema();
			break;
		case 5:
			printf("��� ���� ����� �������� �� ������ �������.\n");
			*pShiza += 10;
			
			cinema();
			break;
		case 6:
			printf("�� ������� �� �������� �����.\n");
			cinema();
			break;
		default:
			printf("������� �������� �����.\n");
			watch_film();
			break;
		}
	}
	
	void watch_series() {
		money();
		printf("�������� �����:\n");
		printf("1. ������������ �� ...\n");
		printf("2. �������\n");
		printf("3. �� ��������\n");
		
		int choice;
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			printf("��� ����� ��� ���� ������ � ���� �����\n");
			*pShiza += 16;

			cinema();
			break;
		case 2 :
			printf("��� ����� �� ������\n");
			*pShiza -= 4;

			cinema();
			break;
		case 3:
			printf("�� ����� �� ���\n");
			cinema();
			break;

		default:
			printf("������� �������� �����.\n");
			watch_series();
			break;
		}
	}

	void watch_cartoon() {
		money();
		printf("�������� ����������:\n");
		printf("1. ���� ���\n");
		printf("2. ˸��=�������\n");
		printf("3. ������ ������\n");
		printf("4. �� ��������\n");

		int choice;
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			printf("��������� ��� ������.\n");
			*pShiza += 3;
			
			cinema();
			break;
		case 2:
			printf("��������� ������� ��� ������\n");
			*pShiza += 2;
			
			cinema();
			break;
		case 3:
			printf("����� ������ �������.\n");
			*pShiza += 16;

			cinema();
			break;
		case 4:
			printf("*���� ���� ��� ����� ���*(� ��� ����������� ���������� ����������).\n");
			*pShiza -= 35;

			cinema();
			break;
		default:
			printf("������� �������� �����.\n");
			watch_cartoon();
			break;
		}
	}

	void workscam() {
		money();
		printf("���� ����� �������?\n");
		printf("1. �������� �������\n");
		printf("2. ����� �� �����\n");
		printf("3. ���������� ���������� ������ ������\n");
		printf("4. �����\n");

		int choice;
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			pomoika();
			hodim();
			break;
		case 2:
			ashan();
			hodim();
			break;
		case 3:
			work_ads();
			hodim();
			break;
		case 4:
			printf("�� ������� �����.\n");
			house();
			break;
		default:
			printf("������� �������� �����.\n");
			workscam();
			break;
		}
	}
	
	void ashan() {
		money();
		printf("��� �� ������ �������?\n");
		int choice;
		printf("1.������\n2.�������\n3.����� �� �����\n");
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			printf("�� ������ ����� ����������\n");
			buy();
			break;
		case 2:
			printf("�� ����� ���������\n");
			seller();
			break;
		case 3:
			printf("�� ������� ��������.\n");
			hodim();
			workscam();
			break;
		default:
			printf("������� �������� �����.\n");
			ashan();
			break;
		}
			
			
		}		


	void buy() {
		money();
		printf("��� �� ������ ������?\n");
		int choice;
		printf("1. ���� 1,5� - 20 ������\n2. ������� - 25 ������\n3. ��������� 1�� - 38 ������\n4. �������� -  120 ������\n5. �����\n");
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			*pRubli -= 20;
			*pJajda += 100;
			printf("�� ������ ���� 1,5� �� 20 ������.\n");
			buy();
			break;
		case 2:
			*pRubli -= 25;
			*pGolod += 20;
			printf("�� ������ ������� �� 25 ������.\n");
			buy();
			break;
		case 3:
			*pRubli -= 28;
			*pGolod += 35;
			printf("�� ������ ��������� 1�� �� 38 ������.\n");
			buy();
			break;
		case 4:
			*pRubli -= 180;
			*pGolod += 70;
			printf("�� ������ �������� �� 120 ������.\n");
			buy();
			break;
		case 5:
			printf("�� ������� �����.\n");
			ashan();
			break;
		default:
			printf("������� �������� �����.\n");
			buy();
			break;


		}
	}
	void seller() {
		money();
		printf("��� �� ������ �������?\n");
		printf("1. ������� - 1�� = 1�\n2. ���������� - 1�� = 6�\n3. ������ - 1�� = 17�\n4. ����������� - 1�� = 100�\n5. �����\n");
		int choice;
		scanf_s("%d", &choice);
		switch (choice) {
			case 1:
				if(*pButilok != 0){
					*pRubli += *pButilok;
					printf("�� ���������� %d ������\n", *pButilok);
					*pButilok *= 0;
					
				} else {
					printf("� ��� ������������ �������.\n");
					seller();	
				}
				break;
			case 2:
				if(*pBumaga != 0) {
					*pRubli += *pBumaga * 6;
					printf("�� ���������� %d ������\n", *pBumaga * 6);
					*pBumaga *= 0;
				} else {
					printf("� ��� ������������ ������.\n");
					seller();	
				}
				break;
			case 3:
				if(*pMetall != 0) {
					*pRubli += *pMetall * 17;
					printf("�� ���������� %d ������\n", *pMetall * 17);
					*pMetall *= 0;
				} else {
					printf("� ��� ������������ �������.\n");
					seller();	
				}
				break;
			case 4:
				if(*pElec != 0) {
					*pRubli += *pElec * 100;
					printf("�� ���������� %d ������\n", *pElec * 100);
					*pElec *= 0;
				} else {
					printf("� ��� ������������ �����������.\n");
					seller();	
				}
				break;
			case 5:
				printf("�� ������ ����\n");
				ashan();
				break;
			default:
				printf("������� �������� �����.\n");
				seller();
				break;
		}
	}
	//1 ������� - 1��
	//������ 17��/��
	//���������� 6��/��




	void pomoika() {
		money();
		printf("�� ������ �� �������. ��� ������?\n");
		printf("1. �������� �������\n");
		printf("2. �������� ����������\n");
		printf("3. ������ ������\n");
		printf("4. ��������� �������� ���\n");
		printf("5. �������� �����\n");
int choice;
scanf_s("%d", &choice);
switch (choice) {
case 1:
	printf("�� ������ ���������� �������.\n");
	ishem_butilki();
	pomoika();
	break;
case 2:
	printf("�� ������ ������� ����������.\n");
	ishem_bumagu();
	pomoika();
	break;
case 3:
	printf("�� ������ ������.\n");
	ishem_metall();
	pomoika();
	break;
case 4:
	printf("�� ��������� �������� ���.\n");
	ishem_electro();;
	pomoika();
	break;
case 5:
	printf("�� ������ �������� �������.\n");
	workscam();
	break;
default:
	printf("������� �������� �����.\n");
	pomoika();
	break;
}
	}

	
	void ishem_butilki() {
		srand(time(0));
		int hodim = 1 + rand() % 5;
		if (hodim == 2) {
			*pButilok += 1;
			printf("�� ������� 1 �������.\n");
		}
	}

	void ishem_bumagu() {
		srand(time(0));
		int hodim = 1 + rand() % 5;
		if (hodim == 2) {
			*pBumaga += 0.1f;
			printf("�� ������� 0.1�� ����������.\n");
		}
	}

	void ishem_metall() {
		srand(time(0));
		int hodim = 1 + rand() % 5;
		if (hodim == 2) {
			*pMetall += 0.01f;
			printf("�� ������� 0.01 �� �������.\n");
		}
	}

	void ishem_electro() {
		srand(time(0));
		int hodim = 1 + rand() % 32;
		if (hodim == 1) {
			*pElec += 1;
			printf("�� ����� ������ �������.\n");
		} if (hodim == 2) {
			*pElec += 2;
			printf("�� ����� ����������� �����.\n");
		} if (hodim == 4) {
			*pElec += 3;
			printf("�� ����� ����� ������������.\n");
		} if (hodim == 8) {
			*pElec += 4;
			printf("�� ����� �������.\n");
		} if (hodim == 16) {
			*pElec += 5;
			printf("�� ������ �� �����.\n");
		}
		else {
			printf("�� �� ����� ������.\n");
		}
	}
	// ����� ������ ������ ����� ����

	void mainmenu() {
		printf("CANTUNE LOX\n");
		printf("1. ���������� ����\n");
		printf("2. ����� ����\n");
		printf("3. ������\n");
		printf("4. �����\n");
		int choice;
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			printf("�� ������� ���������� ����.\n");
			save_test();
			break;
		case 2:
			printf("�� ������� ������ ����� ����.\n");
			newgame();
			break;
		case 3:
			printf("�� ������� ������ � ����������.\n");
			credits();
			break;
		case 4:
			printf("�� ������� �����.\n");
			exit(0);
			break;
		default:
			printf("������� �������� �����.\n");
			mainmenu();
			break;
		}
	}

	void save_load() { // ����� ���� 
		MKDIR("save");
		FILE *s_file = fopen("save/nick.lsf", "r");
		fgets(name, 32, s_file);
		fclose(s_file);
		
		FILE *s_daylive = fopen("save/daylive.lsf", "r");
		fscanf_s(s_daylive, "%d", &daylive);
		fclose(s_daylive);
		FILE *s_rubli = fopen("save/rubli.lsf", "r");
		fscanf_s(s_rubli, "%d", &rubli);
		fclose(s_rubli);
		FILE *s_golod = fopen("save/golod.lsf", "r");
		fscanf_s(s_golod, "%d", &golod);
		fclose(s_golod);
		FILE *s_butilok = fopen("save/butilok.lsf", "r");
		fscanf_s(s_butilok, "%d", &butilok);
		fclose(s_butilok);
		FILE *s_bumaga = fopen("save/bumaga.lsf", "r");
		fscanf_s(s_bumaga, "%d", &bumaga);
		fclose(s_bumaga);
		FILE *s_metall = fopen("save/metall.lsf", "r");
		fscanf_s(s_metall, "%d", &metall);
		fclose(s_metall);
		FILE *s_elec = fopen("save/elec.lsf", "r");
		fscanf_s(s_elec, "%d", &elec);
		fclose(s_elec);
		FILE *s_jajda = fopen("save/jajda.lsf", "r");
		fscanf_s(s_jajda, "%d", &jajda);
		fclose(s_jajda);
		FILE *s_shiza = fopen("save/shiza.lsf", "r");
		fscanf_s(s_shiza, "%d", &shiza);
		fclose(s_shiza);
		house();
	}

	void newgame() {

		daylive = 0;
		rubli = 1000;
		golod = 100;
		butilok = 0;
		bumaga = 0;
		metall = 0;
		elec = 0;
		jajda = 100;
		shiza = 100;

		MKDIR("save");

		printf("��� ���� �����?\n");
		scanf_s("%s", name, 32);
		printf("������, %s.\n", name);

		FILE* s_nick = fopen("save/nick.lsf", "w");
		if (s_nick) {
			fprintf(s_nick, "%s", name);
			fclose(s_nick);
		}

		FILE* s_daylive = fopen("save/daylive.lsf", "w");
		if (s_daylive) {
			fprintf(s_daylive, "%d", daylive);
			fclose(s_daylive);
		}


		FILE* s_rubli = fopen("save/rubli.lsf", "w");
		if (s_rubli) {
			fprintf(s_rubli, "%d", rubli);
			fclose(s_rubli);
		}

		FILE* s_golod = fopen("save/golod.lsf", "w");
		if (s_golod) {
			fprintf(s_golod, "%d", golod);
			fclose(s_golod);
		}


		FILE* s_jajda = fopen("save/jajda.lsf", "w");
		if (s_jajda) {
			fprintf(s_jajda, "%d", jajda);
			fclose(s_jajda);
		}


		FILE* s_shiza = fopen("save/shiza.lsf", "w");
		if (s_shiza) {
			fprintf(s_shiza, "%d", shiza);
			fclose(s_shiza);
		}


		FILE* s_butilok = fopen("save/butilok.lsf", "w");
		if (s_butilok) {
			fprintf(s_butilok, "%d", butilok);
			fclose(s_butilok);
		}


		FILE* s_bumaga = fopen("save/bumaga.lsf", "w");
		if (s_bumaga) {
			fprintf(s_bumaga, "%d", bumaga);
			fclose(s_bumaga);
		}


		FILE* s_metall = fopen("save/metall.lsf", "w");
		if (s_metall) {
			fprintf(s_metall, "%d", metall);
			fclose(s_metall);
		}


		FILE* s_elec = fopen("save/elec.lsf", "w");
		if (s_elec) {
			fprintf(s_elec, "%d", elec);
			fclose(s_elec);
		}


		printf("�� ������ ����� ����.\n");
		house();
	}

	void credits() { //�������
		printf("DimTenCorp 2025\n");
		printf("������ ����:\n");
		printf("dimashaa10\n");
		printf("Krytago Pasaan\n");
		printf("������ �����.\n");
		
		mainmenu();
	}

	void gameover() { //��� ����
		printf("�� ������, ������ %d ����.\n", daylive);
		const char* files[] = {
			"save/daylive.lsf",
			"save/golod.lsf",
			"save/jajda.lsf",
			"save/shiza.lsf",
			"save/rubli.lsf",
			"save/butilok.lsf",
			"save/bumaga.lsf",
			"save/metall.lsf",
			"save/elec.lsf"
		};

		int count = sizeof(files) / sizeof(files[0]);
		for (int i = 0; i < count; i++) {
			if (remove(files[i]) == 0) {
				mainmenu();
			}
		}

		
	}

	void live() { // ���� ����� ��� ����� ��� ������ ���� ����������, ��� ����� ��������,���
		if (*pGolod > 0) *pGolod -= 1;
		if (*pJajda > 0) *pJajda -= 2;
		*pDaylive += 1;
		if (*pShiza > 0) *pShiza -= 1;
		FILE *s_daylive = fopen("save/daylive.lsf", "w");
		fprintf(s_daylive, "%d", *pDaylive);
		fclose(s_daylive);
		FILE *s_golod = fopen("save/golod.lsf", "w");
		fprintf(s_golod, "%d", *pGolod);
		fclose(s_golod);
		FILE *s_jajda = fopen("save/jajda.lsf", "w");
		fprintf(s_jajda, "%d", *pJajda);
		fclose(s_jajda);
		FILE *s_shiza = fopen("save/shiza.lsf", "w");
		fprintf(s_shiza, "%d", *pShiza);
		fclose(s_shiza);
	}

	void save_test() { //��������� �� ����� ����������
		MKDIR("save");
		FILE* s_nick = fopen("save/nick.lsf", "r");
		FILE* s_daylive = fopen("save/daylive.lsf", "r");
		FILE* s_rubli = fopen("save/rubli.lsf", "r");
		FILE* s_golod = fopen("save/golod.lsf", "r");
		FILE* s_butilok = fopen("save/butilok.lsf", "r");
		FILE* s_bumaga = fopen("save/bumaga.lsf", "r");
		FILE* s_metall = fopen("save/metall.lsf", "r");
		FILE* s_elec = fopen("save/elec.lsf", "r");
		FILE* s_jajda = fopen("save/jajda.lsf", "r");
		FILE* s_shiza = fopen("save/shiza.lsf", "r");

		if (s_nick == NULL || s_daylive == NULL || s_rubli == NULL || s_golod == NULL || s_butilok == NULL || s_bumaga == NULL || s_metall == NULL || s_elec == NULL || s_jajda == NULL || s_shiza == NULL) {
			newgame(); //����� �� �����
		}
		else {
			save_load(); //�����
		}

		fclose(s_nick);
		fclose(s_daylive);
		fclose(s_rubli);
		fclose(s_golod);
		fclose(s_butilok);
		fclose(s_bumaga);
		fclose(s_metall);
		fclose(s_elec);
		fclose(s_jajda);
		fclose(s_shiza);
	}
		
	void gen_gameid() { //�������� ��������
	int gameid_num = 1000;
	FILE* gameid = fopen("gameid.txt", "w");
	fprintf(gameid, "%d", gameid_num);
	fclose(gameid);
	}

	void work_ads() {
		money();
		srand(time(0));
		printf("�� ������ ����� �������� ������\n");
		printf("1. �������\n");
		printf("2. �������\n");
		printf("3. ���������\n");
		printf("4. ��������\n");
		printf("5. ��������\n");
		printf("6. ��������� �������\n");
		int choice;
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			printf("�� ����� ���������� ����.\n");
			*pRubli += 480 + rand() % (480 - 900 + 1);
			*pShiza -= 16;
			work_ads();
			break;
		case 2:
			printf("�� ����� ��������� �����.\n");
			*pRubli += 320 + rand() % (320 - 470 + 1);
			*pShiza -= 12;
			work_ads();
			break;
		case 3:
			printf("�� ����� �������� �� �������.\n");
			*pRubli += 1895 + rand() % (1895 - 2350 + 1);
			*pShiza -= 75;
			work_ads();
			break;
		case 4:
			printf("�� ������ ���������� ���������� � ������� �����������.\n");
			*pRubli += 600 + rand() % (600 - 780 + 1);
			*pShiza -= 50;
			work_ads();
			break;
		case 5:
			printf("�� ����� ��������� �� �����.\n");
			*pRubli += 930 + rand() % (930 - 1340 + 1);
			*pShiza -= 60;
			work_ads();
			break;
		case 6:
			printf("�� ��������� �������.\n");
			workscam();
			break;
		default:
			printf("������� �������� �����.\n");
			work_ads();
			break;
		}
		
	}

	