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

// // NASA ли

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
	printf("Вы прожили: %d дней\n", *pDaylive);
	printf("Рублей: %d\n", *pRubli);
	printf("Голод: %d\n", *pGolod);
	printf("Жажда: %d\n", *pJajda);
	printf("Рассудок: %d\n", *pShiza);
	printf("Бутылок/шт: %d\n", *pButilok);
	printf("Макулатуры/кг: %d\n", *pBumaga);
	printf("Чермет/кг: %d\n", *pMetall);
	printf("Электроника/шт: %d\n", *pElec);

	if (pGolod <= 1 || pJajda <= 1 || pShiza <= 1) {
		gameover();
	}
	live();
}

void museum() {
	money();
	printf("Вы в музее.\n");
	printf("1. Посмотреть фотографии - 100 рублей\n");
	printf("2. Посмотреть скульптуры - 200 рублей\n");
	printf("3. Посмотреть архивы - 50 рублей\n");
	printf("4. Выйти\n");
	int choice;
	scanf_s("%d", &choice);
	switch (choice) {
	case 1:
		if (pRubli >= 100) {
			printf("Вы выбрали посмотреть фотографии.\n");
			arts();
			} else {
			printf("У вас недостаточно денег.\n");
			museum();
			}
			break;
				
				break;
			case 2:
				if (pRubli >= 200) {
				printf("Вы выбрали посмотреть на скульптуры.\n");
				sculpts();
				} else {
				printf("У вас недостаточно денег.\n");
				museum();
				}
				
				break;
			case 3:
				if (pRubli >= 50) {
				printf("Вы выбрали посмотреть архивы.\n");
				archives();
				} else {
				printf("У вас недостаточно денег.\n");
				museum();
				}
				break;
				case 4:
				printf("Вы выбрали выйти.\n");
				house();
				break;

			default:
				printf("Выбрана неверная опция.\n");
				museum();
				break;
			}
		}

		void house() {
			money();
			printf("Вы дома.\n Куда пойти?\n");
			printf("1. Посетить музей\n");
			printf("2. Посетить кинотеатр\n");
			printf("3. Посетить казино\n");
			printf("4. Заработать денег\n");
			printf("5. Выйти в главное меню\n");
			int choice;
			scanf_s("%d", &choice);
			switch (choice) {
			case 1:
				printf("Вы решили просвятится знаниями.\n");
				hodim();
				museum();
				break;
			case 2:
				printf("Вы захотели посмотреть дерьма.\n");
				hodim();
				cinema();
				break;
			case 3:
				printf("Вы захотели просрать все бабки в казике.\n");
				hodim();
				casino();
				break;
			case 4:
				printf("Чё за бизнес, сука?\n");
				hodim();
				workscam();
				break;
			case 5:
				printf("Вы выбрали выйти.\n");
				mainmenu();
				break;
			default:
				printf("Выбрана неверная опция.\n");
				house();
				break;
				}
		}

		void cinema() {
			money();
			printf("Вы в кинотеатре.\n");
			printf("1. Посмотреть фильм.\n");
			printf("2. Посмотреть сериал.\n");
			printf("3. Посмотреть мультфильм.\n");
			printf("4. Выйти\n");
			int choice;
			scanf_s("%d", &choice);
			switch (choice) {
			case 1:
				printf("Вы выбрали посмотреть фильмы.\n");
				hodim();
				break;
			case 2:
				printf("Вы выбрали посмотреть сериалы.\n");
				hodim();
				break;
			case 3:
				printf("Вы выбрали посмотреть документальные фильмы.\n");
				hodim();
				break;
			case 4:
				printf("Вы выбрали выйти.\n");
				house();
				break;
			default:
				printf("Выбрана неверная опция.\n");
				break;
			}
		}

		
		void casino() {
			money();
			printf("Вы в казино\n");
			printf("1. Крутить слоты\n");
			printf("2. Купить фишки\n");
			printf("3. Продать фишки\n");
			printf("4. Играть в рулетку\n");
			printf("5. Выйти\n");
			int choice;
			scanf_s("%d", &choice);
			switch (choice) {
			case 1:
				printf("Вы выбрали пойти покрутить слоты.\n");
				hodim();
				SugarRush();
				break;
			case 2:
				printf("Вы выбрали купить фишки.\n");
				hodim();
				buyfishki();
				break;
			case 3:
				printf("Вы выбрали продать фишки.\n");
				hodim();
				sell_fishki();
				break;
			case 4:
				printf("Вы выбрали пойти играть в рулетку.\n");
				casebattle();
				hodim();
				break;
			case 5:
				printf("Вы выбрали выйти.\n");
				house();
				break;
			default:
				printf("Выбрана неверная опция.\n");
				break;
			}
		}
		
		void buyfishki() {
			money();
			printf("Сколько вы хотите купить фишек? - 1 фишка 10 рублей\n");
			int choice;

			if (scanf_s("%d", &choice) != 1) {
				printf("Ошибка ввода.\n");
				return;
			}

			if (choice <= 0) {
				printf("Введите положительное количество фишек.\n");
				return;
			}

			if (choice <= *pRubli / 10) {
				*pRubli -= choice * 10;
				*pFishki += choice;
				printf("Успешно! Вы купили %d фишек. С вашего баланса списано %d рублей\n", choice, choice * 10);
				casino();
			}
			else {
				printf("У вас недостаточно рублей\n");
				casino();
			}


		}

		void sell_fishki() {
			money();
			printf("Сколько вы хотите продать фишек? - 1 фишка 10 рублей\n");
			int choice;
			if (scanf_s("%d", &choice) != 1) {
				printf("Ошибка ввода.\n");
				return;
			}

			if (choice <= 0) {
				printf("Введите положительное количество фишек.\n");
				return;
			}

			if (choice <= *pFishki) {
				*pRubli += choice * 10;
				*pFishki -= choice;
				printf("Успешно! Вы продали %d фишек. Ваш баланс пополнен на %d рублей\n", choice, choice * 10);
				casino();
			}
			else {
				printf("У вас недостаточно фишек\n");
				casino();
			}
		}

		void SugarRush() {
			srand(time(0));
			money();
			int choice;
			printf("Выберите ставку:\n");
			printf("1. 10 рублей\n 2. 100 рублей\n 3. 1000 рублей\n 4. Выйти\n");

			
			
			scanf_s("%d", &choice);
			switch (choice) {
			case 1:
				if(*pRubli >= 10) {
				printf("Вы сделали ставку 10 рублей\n");
				int kaz = rand() % 3;
				if(kaz == 0) {
					printf("КАКОВ ШАНС!? Ты слил всю ставку\n");
					*pRubli -= 10;
					*pShiza -= 10;
					SugarRush();
				} else if(kaz == 1) {
					printf("Ты выиграл 10 рублей. Хотя бы не в минус\n");
					*pShiza -= 3;
					SugarRush();
				} else {
					printf("СЮДАА!! ТЫ СДЕЛАЛ Х2!!\n");
					*pRubli += 20;
					*pShiza += 20;
					SugarRush();

				}
				break;
			} else {
				printf("Недостаточно средств\n");
				SugarRush();
			}
			case 2:
				if(*pRubli >= 100) {
				printf("Вы сделали ставку 100 рублей\n");
				int kaz = rand() % 2;
				if(kaz == 0) {
					printf("КАКОВ ШАНС!? Ты слил всю ставку\n");
					*pRubli -= 100;
					*pShiza -= 20;
					SugarRush();
				} else if(kaz == 1) {
					printf("Ты выиграл 100 рублей. Хотя бы не в минус\n");
					
					SugarRush();
				} else {
					printf("СЮДАА!! ТЫ СДЕЛАЛ Х2!!\n");
					*pRubli += 200;
					*pShiza += 35;
					SugarRush();
				}
				
				break;
			} else {
				printf("Недостаточно средств\n");
				SugarRush();
			}
			case 3:
				if(*pRubli >= 1000) {
				printf("Вы сделали ставку 1000 рублей\n");
				int kaz = rand() % 2;
				if(kaz == 0) {
					printf("КАКОВ ШАНС!? Ты слил всю ставку\n");
					*pRubli -= 1000;
					*pShiza -= 40;
					SugarRush();
				} else if(kaz == 1) {
					printf("Ты выиграл 1000 рублей. Хотя бы не в минус\n");
					*pShiza += 10;
					SugarRush();
				} else {
					printf("СЮДАА!! ТЫ СДЕЛАЛ Х2!!\n");
					*pShiza += 99;
					*pRubli += 2000;
					SugarRush();

				}
				
				break;
			} else {
				printf("Недостаточно средств\n");
				SugarRush();
			}
			case 4:
				printf("Вы вышли обратно в казино\n");
				casino();
				break;
			default:
				printf("Выбрана неверная опция.\n");
				SugarRush();
				break;
			}
		}

		void casebattle() {
			money();
			printf("У вас %d фишек\n", *pFishki);
			printf("Выберите ставку\n");
			printf("1. Одна фишка\n2. Пять фишек\n3. Десять фишек\n 4. Выйти\n");
			int cb_choice;
			scanf_s("%d", &cb_choice);
			switch(cb_choice) {
				case 1:
					if(*pFishki >= 1) {
						printf("Ваша ставка равна 1 фишке\n");
						cb_choice = 1;
						casebattle2(cb_choice);
						break; 
					} else {
						printf("Недостаточно средств\n");
						casebattle();
						break;
				}
				case 2:
					if(*pFishki >= 5) {
						printf("Ваша ставка равна 5 фишкам\n");
						cb_choice = 2;
						casebattle2(cb_choice);
						break;				
					} else {
						printf("Недостаточно средств\n");
						casebattle();
						break;
				}
				case 3:
					if(*pFishki >= 10) {
						printf("Ваша ставка равна 10 фишкам\n");
						cb_choice = 3;
						casebattle2(cb_choice);
						break;
					} else {
						printf("Недостаточно средств\n");
						casebattle();
						break;
				}	
				case 4:
					printf("Вы вышли из казино\n");
					casino();
					break;

				default:
					printf("Выбрана неверная опция\n");
					casebattle();
					break;

			}

		}

		void casebattle2(int cb_choice) {
			money();
			printf("Как вы думаете, какой цвет выпадет?\n");
			printf("1. Красный\n2. Черный\n3. Зеленый\n");

			if (scanf_s("%d", &color) != 1 || color < 1 || color > 3) {
				printf("Некорректный ввод.\n");
				casebattle2(cb_choice);
				return;
			}

			switch (color) {
			case 1:
				printf("Вы выбрали красный\n");
				rand_cb(cb_choice, color);
				break;
			case 2:
				printf("Вы выбрали черный\n");
				rand_cb(cb_choice, color);
				break;
			case 3:
				printf("Вы выбрали зеленый\n");
				rand_cb(cb_choice, color);
				break;
			}
			rand_cb(cb_choice, color);
		}

		void rand_cb(int cb_choice, int color) {
			int winnumb = rand() % 37;
			int wincolor;

			if (winnumb == 0) {
				wincolor = 3; // зелёный
			}
			else if (winnumb >= 1 && winnumb <= 18) {
				wincolor = 1; // красный
			}
			else {
				wincolor = 2; // чёрный
			}

			if (wincolor == 1) {
				printf("Выпало красное\n");
			}
			else if (wincolor == 2) {
				printf("Выпало черное\n");
			}
			else {
				printf("Выпало зеленое\n");
			}

			if (wincolor == color) {
				printf("Вы выиграли!\n");
				switch (cb_choice) {
				case 1: *pFishki += 2; *pShiza += 2; break;
				case 2: *pFishki += 10; *pShiza += 10; break;
				case 3: *pFishki += 20; *pShiza += 20; break;
				}
			}
			else {
				printf("Вы проиграли\n");
				switch (cb_choice) {
				case 1: *pFishki -= 1; *pShiza -= 1; break;
				case 2: *pFishki -= 5; *pShiza -= 5; break;
				case 3: *pFishki -= 10; *pShiza -= 10; break;
				}
			}

			printf("Теперь у вас %d фишек\n", *pFishki);
			casebattle();
		}

		

		void arts() {
			money();
			printf("Какую картину вы хотите посмотреть?\n");
			printf("1. Голые фурри\n");
			printf("2. Хентай\n");
			printf("3. Одетые жен*щины\n");
			printf("4. Выйти\n");
				int choice;
				scanf_s("%d", &choice);
				switch (choice) {
				case 1:
					printf("У вас встал пенис на голые фурри.\n");
					*pShiza += 15;
					
					arts();
					break;
				case 2:
					printf("У вас встал пенис на хентай.\n");
					*pShiza += 7;
					
					arts();
					break;
				case 3:
					printf("У вас упал пенис на одетых жен*щин.\n");
					*pShiza -= 4;
					hodim();
					arts();
					break;
				case 4:
					printf("Вы выбрали выйти.\n");
					museum();
					break;
				default:
					printf("Выбрана неверная опция.\n");
					arts();
					break;
				}
			}

		void archives() {
			money();
			printf("Вы в архивах.\n");
			printf("1. Посмотреть документы\n");
			printf("2. Посмотреть книги\n");
			printf("3. Вернутся в музей\n");
			int choice;
			scanf_s("%d", &choice);
			switch (choice) {
			case 1:
				printf("Среди старых документов вы не нашли ничего интересного.\n");
				*pShiza += 1;
				hodim();
				archives();
				break;
			case 2:
				printf("Ну да много стариных книг, но вы не нашли ничего интересного.\n");
				*pShiza += 1;
				hodim();
				archives();
				break;
			case 3:
				printf("Вы выбрали вернуться в музей.\n");
				hodim();
				museum();
				break;
			default:
				printf("Выбрана неверная опция.\n");
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
			
			printf("Вы нашли %d рублей\n", skolko_nashel);
			money();

		}

	void sculpts() {
		money();
		printf("На какую скульптуру вы хотите посмотреть?\n");
		printf("1. Статуя Давида\n");
		printf("2. Пенис папы\n");
		printf("3. Говно-красавчик\n");
		printf("4. Плакса Лёша\n");
		printf("5. Выйти\n");
		int choice;
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			printf("Ох уж этот великий Давид, ты сам себе поразил.\n");
			*pShiza += 8;
			
			hodim();
			sculpts();
			break;
		case 2:
			printf("Именно этим он в попу стреляет.\n");
			*pShiza += 5;
			
			hodim();
			sculpts();
			break;
		case 3:
			printf("Ичё это за дрисня? Я даже не могу поверить.\n");
			*pShiza -= 1;
			
			hodim();
			sculpts();
			break;
		case 4:
			printf("Я Лёша я педик я гандон педик хуй.\n");
			*pShiza += 4;
			
			hodim();
			sculpts();
			break;
		case 5:
			printf("Вы вернулись обратно.\n");
			hodim();
			museum();
			break;
		default:
			printf("Выбрана неверная опция.\n");
			sculpts();
			break;
		}
	}

	void watch_film() {
		money();
		printf("Выберите фильм:\n");
		printf("1. Битва за Киев\n");
		printf("2. Начало\n");
		printf("3. Середина\n");
		printf("4. Конец\n");
		printf("5. Рак поджелудочной\n");
		printf("6. Не чё то не хочу смотреть\n");
		
		int choice;
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			printf("Вы очень сильно переживали за главного героя и его семейную жизнь.\n");
			*pShiza += 11;
			
			cinema();
			break;
		case 2 :
			printf("Вам было очень скучно.\n");
			*pShiza -= 4;
			
			cinema();
			break;
		case 3:
			printf("Вы поржали с этого жестко.\n");
			*pShiza += 7;
			
			cinema();
			break;
		case 4:
			printf("Вам было грустно что это последняя часть серии.\n");
			*pShiza += 5;
			
			cinema();
			break;
		case 5:
			printf("Вам было очень тоскливо от смерти братьев.\n");
			*pShiza += 10;
			
			cinema();
			break;
		case 6:
			printf("Вы выбрали не смотреть фильм.\n");
			cinema();
			break;
		default:
			printf("Выбрана неверная опция.\n");
			watch_film();
			break;
		}
	}
	
	void watch_series() {
		money();
		printf("Выберите серию:\n");
		printf("1. Разоблачение на ...\n");
		printf("2. Стындов\n");
		printf("3. Не смотреть\n");
		
		int choice;
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			printf("Вам ебать как было смешно с этой хуйни\n");
			*pShiza += 16;

			cinema();
			break;
		case 2 :
			printf("Это нихуя не смешно\n");
			*pShiza -= 4;

			cinema();
			break;
		case 3:
			printf("Да пофиг на это\n");
			cinema();
			break;

		default:
			printf("Выбрана неверная опция.\n");
			watch_series();
			break;
		}
	}

	void watch_cartoon() {
		money();
		printf("Выберите мультфильм:\n");
		printf("1. Дима нищ\n");
		printf("2. Лёша=плакать\n");
		printf("3. Неделя Давида\n");
		printf("4. Не смотреть\n");

		int choice;
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			printf("Непонятно или смешно.\n");
			*pShiza += 3;
			
			cinema();
			break;
		case 2:
			printf("Непонятно грустно или смешно\n");
			*pShiza += 2;
			
			cinema();
			break;
		case 3:
			printf("Давид просто красава.\n");
			*pShiza += 16;

			cinema();
			break;
		case 4:
			printf("*фууу энта для дитей всю*(у вас развивается умственная отсталость).\n");
			*pShiza -= 35;

			cinema();
			break;
		default:
			printf("Выбрана неверная опция.\n");
			watch_cartoon();
			break;
		}
	}

	void workscam() {
		money();
		printf("Куда пойти шнырять?\n");
		printf("1. Залутать помойки\n");
		printf("2. Пойти на рынок\n");
		printf("3. Посмотреть обьявления поиска работы\n");
		printf("4. Выйти\n");

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
			printf("Вы выбрали выйти.\n");
			house();
			break;
		default:
			printf("Выбрана неверная опция.\n");
			workscam();
			break;
		}
	}
	
	void ashan() {
		money();
		printf("Что вы хотите сделать?\n");
		int choice;
		printf("1.Купить\n2.Продать\n3.Выйти из рынка\n");
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			printf("Вы решили пойти закупиться\n");
			buy();
			break;
		case 2:
			printf("Вы пошли продавать\n");
			seller();
			break;
		case 3:
			printf("Вы выбрали вернутся.\n");
			hodim();
			workscam();
			break;
		default:
			printf("Выбрана неверная опция.\n");
			ashan();
			break;
		}
			
			
		}		


	void buy() {
		money();
		printf("Что вы хотите купить?\n");
		int choice;
		printf("1. Воду 1,5л - 20 рублей\n2. Доширак - 25 рублей\n3. Картофель 1кг - 38 рублей\n4. Пельмени -  120 рублей\n5. Выйти\n");
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			*pRubli -= 20;
			*pJajda += 100;
			printf("Вы купили воду 1,5л за 20 рублей.\n");
			buy();
			break;
		case 2:
			*pRubli -= 25;
			*pGolod += 20;
			printf("Вы купили доширак за 25 рублей.\n");
			buy();
			break;
		case 3:
			*pRubli -= 28;
			*pGolod += 35;
			printf("Вы купили картофель 1кг за 38 рублей.\n");
			buy();
			break;
		case 4:
			*pRubli -= 180;
			*pGolod += 70;
			printf("Вы купили пельмени за 120 рублей.\n");
			buy();
			break;
		case 5:
			printf("Вы выбрали выйти.\n");
			ashan();
			break;
		default:
			printf("Выбрана неверная опция.\n");
			buy();
			break;


		}
	}
	void seller() {
		money();
		printf("Что вы хотите продать?\n");
		printf("1. Бутылки - 1шт = 1р\n2. Макулатуру - 1кг = 6р\n3. ЧерМет - 1кг = 17р\n4. Электронику - 1шт = 100р\n5. Выйти\n");
		int choice;
		scanf_s("%d", &choice);
		switch (choice) {
			case 1:
				if(*pButilok != 0){
					*pRubli += *pButilok;
					printf("Вы заработали %d рублей\n", *pButilok);
					*pButilok *= 0;
					
				} else {
					printf("У вас недостаточно бутылок.\n");
					seller();	
				}
				break;
			case 2:
				if(*pBumaga != 0) {
					*pRubli += *pBumaga * 6;
					printf("Вы заработали %d рублей\n", *pBumaga * 6);
					*pBumaga *= 0;
				} else {
					printf("У вас недостаточно бумаги.\n");
					seller();	
				}
				break;
			case 3:
				if(*pMetall != 0) {
					*pRubli += *pMetall * 17;
					printf("Вы заработали %d рублей\n", *pMetall * 17);
					*pMetall *= 0;
				} else {
					printf("У вас недостаточно металла.\n");
					seller();	
				}
				break;
			case 4:
				if(*pElec != 0) {
					*pRubli += *pElec * 100;
					printf("Вы заработали %d рублей\n", *pElec * 100);
					*pElec *= 0;
				} else {
					printf("У вас недостаточно электроники.\n");
					seller();	
				}
				break;
			case 5:
				printf("Вы решили уйти\n");
				ashan();
				break;
			default:
				printf("Выбрана неверная опция.\n");
				seller();
				break;
		}
	}
	//1 бутылка - 1рэ
	//меттал 17рэ/кг
	//макулатура 6рэ/кг




	void pomoika() {
		money();
		printf("Вы пришли на помойку. Что дальше?\n");
		printf("1. Собирать бутылки\n");
		printf("2. Собирать макулатуру\n");
		printf("3. Искать металл\n");
		printf("4. Тщательно обыскать бак\n");
		printf("5. Вернутся домой\n");
int choice;
scanf_s("%d", &choice);
switch (choice) {
case 1:
	printf("Вы решили насобирать бутылки.\n");
	ishem_butilki();
	pomoika();
	break;
case 2:
	printf("Вы решили собрать макулатуру.\n");
	ishem_bumagu();
	pomoika();
	break;
case 3:
	printf("Вы искали металл.\n");
	ishem_metall();
	pomoika();
	break;
case 4:
	printf("Вы тщательно обыскали бак.\n");
	ishem_electro();;
	pomoika();
	break;
case 5:
	printf("Вы решили вернутся обратно.\n");
	workscam();
	break;
default:
	printf("Выбрана неверная опция.\n");
	pomoika();
	break;
}
	}

	
	void ishem_butilki() {
		srand(time(0));
		int hodim = 1 + rand() % 5;
		if (hodim == 2) {
			*pButilok += 1;
			printf("Вы собрали 1 бутылку.\n");
		}
	}

	void ishem_bumagu() {
		srand(time(0));
		int hodim = 1 + rand() % 5;
		if (hodim == 2) {
			*pBumaga += 0.1f;
			printf("Вы собрали 0.1кг макулатуры.\n");
		}
	}

	void ishem_metall() {
		srand(time(0));
		int hodim = 1 + rand() % 5;
		if (hodim == 2) {
			*pMetall += 0.01f;
			printf("Вы собрали 0.01 кг металла.\n");
		}
	}

	void ishem_electro() {
		srand(time(0));
		int hodim = 1 + rand() % 32;
		if (hodim == 1) {
			*pElec += 1;
			printf("Вы нашли старый телефон.\n");
		} if (hodim == 2) {
			*pElec += 2;
			printf("Вы нашли неизвестную плату.\n");
		} if (hodim == 4) {
			*pElec += 3;
			printf("Вы нашли ворох радиодеталей.\n");
		} if (hodim == 8) {
			*pElec += 4;
			printf("Вы нашли провода.\n");
		} if (hodim == 16) {
			*pElec += 5;
			printf("Вы ничего не нашли.\n");
		}
		else {
			printf("Вы не нашли ничего.\n");
		}
	}
	// урооо больше тысячи строк кода

	void mainmenu() {
		printf("CANTUNE LOX\n");
		printf("1. Продолжить игру\n");
		printf("2. Новая игра\n");
		printf("3. Авторы\n");
		printf("4. Выйти\n");
		int choice;
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			printf("Вы выбрали продолжить игру.\n");
			save_test();
			break;
		case 2:
			printf("Вы выбрали начать новую игру.\n");
			newgame();
			break;
		case 3:
			printf("Вы выбрали узнать о создателях.\n");
			credits();
			break;
		case 4:
			printf("Вы выбрали выйти.\n");
			exit(0);
			break;
		default:
			printf("Выбрана неверная опция.\n");
			mainmenu();
			break;
		}
	}

	void save_load() { // давид чини 
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

		printf("Как тебя зовут?\n");
		scanf_s("%s", name, 32);
		printf("Привет, %s.\n", name);

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


		printf("Вы начали новую игру.\n");
		house();
	}

	void credits() { //долбаёбы
		printf("DimTenCorp 2025\n");
		printf("Авторы игры:\n");
		printf("dimashaa10\n");
		printf("Krytago Pasaan\n");
		printf("Сверху дауны.\n");
		
		mainmenu();
	}

	void gameover() { //лох сдох
		printf("Вы умерли, прожив %d дней.\n", daylive);
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

	void live() { // надо чтобы эта хуйня при каждом пуке вызывалась, хуй знает работает,нет
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

	void save_test() { //проверяет на файлы сохранения
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
			newgame(); //нихуя не нашёл
		}
		else {
			save_load(); //нашёл
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
		
	void gen_gameid() { //наверное работает
	int gameid_num = 1000;
	FILE* gameid = fopen("gameid.txt", "w");
	fprintf(gameid, "%d", gameid_num);
	fclose(gameid);
	}

	void work_ads() {
		money();
		srand(time(0));
		printf("Вы решили найти сдельную работу\n");
		printf("1. Грузчик\n");
		printf("2. Дворник\n");
		printf("3. Строитель\n");
		printf("4. Официант\n");
		printf("5. Продавец\n");
		printf("6. Вернуться обратно\n");
		int choice;
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			printf("Вы пошли разгрузить фуру.\n");
			*pRubli += 480 + rand() % (480 - 900 + 1);
			*pShiza -= 16;
			work_ads();
			break;
		case 2:
			printf("Вы пошли подметать улицы.\n");
			*pRubli += 320 + rand() % (320 - 470 + 1);
			*pShiza -= 12;
			work_ads();
			break;
		case 3:
			printf("Вы пошли работать на объекте.\n");
			*pRubli += 1895 + rand() % (1895 - 2350 + 1);
			*pShiza -= 75;
			work_ads();
			break;
		case 4:
			printf("Вы решили поработать официантом в местной обрыгаловке.\n");
			*pRubli += 600 + rand() % (600 - 780 + 1);
			*pShiza -= 50;
			work_ads();
			break;
		case 5:
			printf("Вы пошли торговать на рынке.\n");
			*pRubli += 930 + rand() % (930 - 1340 + 1);
			*pShiza -= 60;
			work_ads();
			break;
		case 6:
			printf("Вы вернулись обратно.\n");
			workscam();
			break;
		default:
			printf("Выбрана неверная опция.\n");
			work_ads();
			break;
		}
		
	}

	