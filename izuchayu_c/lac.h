#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <time.h>
#include <string.h>


#ifdef _WIN32
#include <direct.h>
#define MKDIR(path) _mkdir(path)
#else
#include <sys/stat.h>
#define MKDIR(path) mkdir(path, 0755)
#endif
//lox anti cheat 
void lacstatus();
void online();
void ban();
void firstrun();
void ban_check();
void check_game();


void lox() {
	setlocale(LC_ALL, "Russian");
	lacstatus();

}


void lacstatus() {
	int test;
	bool status = false; //поставь false чтобы отключить античит
	if (status == true) {
		FILE* d_fr = fopen("save/first_run.lox", "r");
		fscanf_s(d_fr, "%d", &test);
		fclose(d_fr);
		if (test == 1) {
			online();
		} else {
			firstrun();
		}
	}
}

void online() {
	FILE* d_save1 = fopen("save/lac1.lox", "r");
	if (d_save1 == NULL) {
		ban();
	} else {
		fclose(d_save1);
		ban_check();
	}
}

void ban() {
	FILE* banning = fopen("lac_test.lox", "r");
	fprintf(banning, "228");
	fclose(banning);
	exit(0);
}

void firstrun() {
	MKDIR("save");
	FILE* d_fr = fopen("save/first_run.lox", "w");
	fprintf(d_fr, "1");
	fclose(d_fr);
	FILE* d_save1 = fopen("save/lac1.lox", "w");
	fprintf(d_save1, "1");
	fclose(d_save1);
	FILE* d_save2 = fopen("save/lac2.lox", "w");
	fprintf(d_save2, "1");
	fclose(d_save2);
	online();
}

void ban_check() {
	int banned;
	FILE* banning = fopen("lac_test.lox", "r");
	if (fscanf_s(banning, "%d", &banned) == 228);
		printf("Вы забанены");
		fclose(banning);
	exit(0);
}

void check_game() {
	int gameid;
	FILE* gameid_num = fopen("gameid.txt", "r");
	fscanf_s(gameid_num, "%d", &gameid);
	fclose(gameid_num);


	switch (gameid) {
	case 1000:
		
		break;
	default:
		printf("Неизвестная игра");
		break;
	}

}