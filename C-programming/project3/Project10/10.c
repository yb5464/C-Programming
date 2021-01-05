#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

typedef enum {
	Hearts, Diamonds, Clubs, Spades
} card_shape;

typedef struct {
	card_shape shape;
	int number;
} card;

char* shape_of_each[] = { "♥", "◆", "♣", "♠", "(Hearts)", "(Diamonds)", "(Clubs)", "(Spades)" };

void card_set(card* pack);
void card_shuffle(card* pack);
int full_house(card* pack);

int main(void)
{
	srand((unsigned)time(NULL));
	card c[52];
	card drawn[7];
	int cnt = 0;
	int card_cnt = 0;
	int fh_flag = 0;

	card_set(c);

	while (1) {
		card_shuffle(c);

		for (int i = 0; i < 7; i++) {
			drawn[i] = c[i];
			printf("%2d of %-2s %10s\n", c[i].number, shape_of_each[c[i].shape], shape_of_each[c[i].shape + 4]);
		}
		
		fh_flag = full_house(drawn);
		
		if (fh_flag == 1) {
			printf("풀 하우스 입니다.\n\n");
			break;
		}
		else
			printf("풀 하우스가 아닙니다.\n\n");
	}

	return 0;
}

void card_set(card* pack) {
	for (int i = 0; i < 52; i++) {
		pack[i].number = i % 13 + 1;
		pack[i].shape = i % 4;
	}
}

void card_shuffle(card* pack)
{
	card temp;

	for (int i = 0, j = 0; i < 52; i++) {
		j = rand() % 52;
		temp = pack[i];
		pack[i] = pack[j];
		pack[j] = temp;
	}
}

int full_house(card* pack)
{
	int table[14] = { 0 };
	int triple = 0;
	int one_pair = 0;

	for (int i = 0; i < 7; i++)
		table[pack[i].number]++;

	for (int i = 0; i < 14; i++) {
		if (table[i] == 3)
			triple++;
		else if (table[i] == 2)
			one_pair++;
	}

	if (one_pair >= 1 && triple >= 1)
		return 1;
	else if (triple == 2)
		return 1;
	else
		return 0;
}