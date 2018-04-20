#include "Game.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define DEFAULT_DISCIPLINES {STUDENT_BQN, STUDENT_MMONEY, STUDENT_MJ, \
                STUDENT_MMONEY, STUDENT_MJ, STUDENT_BPS, STUDENT_MTV, \
                STUDENT_MTV, STUDENT_BPS,STUDENT_MTV, STUDENT_BQN, \
                STUDENT_MJ, STUDENT_BQN, STUDENT_THD, STUDENT_MJ, \
                STUDENT_MMONEY, STUDENT_MTV, STUDENT_BQN, STUDENT_BPS}

#define DEFAULT_DICE {9,10,8,12,6,5,3,11,3,11,4,6,4,7,9,2,8,10,5}

int tests(Game g);

void testGetDiscipline(Game g, int regionID)

int main() {
	int disciplines[] = DEFAULT_DISCIPLINES;
    int dice[] = DEFAULT_DICE;
    Game g = newGame (disciplines, dice);
    tests(g);
    disposeGame(g);
    printf("All tests passed!\n");
    return EXIT_SUCCESS;
}

int tests() {
	testGetDiscipline()
	printf("All tests passed!\n")
	return 1;
}

void testGetDiscipline(Game g, int regionID) {
	int actualDiscipline = g.disciplines[regionID];
	int testDiscipline = getDiscipline(g,regionID)
	assert(actualDiscipline == testDiscipline);
}

void testDisposeGame (Game g) {
	disposeGame(g);
	assert(g == 0);
}

void testMakeAction (Game g, action a) {
	int currentTurn = g.currentTurn;
	makeAction(g);
	assert(g.currentTurn == (currentTurn + 1));
}

