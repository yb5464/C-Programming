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

char * shape_of_each[] = { "♥", "◆", "♣", "♠", "(Hearts)", "(Diamonds)", "(Clubs)", "(Spades)"};

void card_set(card* pack);
void card_shuffle(card* pack);

int main(void)
{
	srand((unsigned)time(NULL));
	card c[52];
	int cnt = 0;
	int card_cnt = 0;

	card_set(c);
	card_shuffle(c);

	printf("카드 게임에 몇 사람이 참가합니까? >> ");
	scanf("%d", &cnt);
	printf("\n");

	for (int i = 0; i < cnt; i++)
		printf("%12s%-12d", "사람", i + 1);
	
	for (int i = 0; i < 7 * cnt; i++) {
		if (i % cnt == 0)
			printf("\n");

		printf("%2d of %-2s %10s %s", c[card_cnt].number, shape_of_each[c[card_cnt].shape], shape_of_each[c[card_cnt].shape + 4], "    ");
		card_cnt++;
	}

	return 0;
}

void card_set(card* pack)
{
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