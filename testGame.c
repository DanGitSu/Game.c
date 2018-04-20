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
	// Can't be implemented
}

void testThrowDice (Game g) {
	int currentTurn = g.currentTurn;
	ThrowDice(g);
	assert(g.currentTurn == (currentTurn + 1));
}

void testGetTurnNumber(Game g) {
	// Test throw dice first
	int previousTurn = g.currentTurn;
	g.ThrowDice();
	assert((previousTurn+1) == g.currentTurn);
}

void testGetMostARCs (Game g) {
	// Can't be implemented
}

void testGetMostPublications (Game g) {
	// Can't be implemented
}

void testGetWhoseTurn (Game g) {
	// Can't be implemented
}

void testGetCampus(Game g, path pathToVertex) {
	// Can't be implemented
}

void testGetARC(Game g, path pathToEdge) {
	// Can't be implemented
}

void testIsLegalAction (Game g, action a) {
	// Can't be implemented

}

void testGetKPIpoints (Game g, int player) {
	// Can't be implemented

}

void testGetARCs (Game g, int player) {
	// Can't be implemented

}

int testGetGO8s (Game g, int player) {
	// Can't be implemented

}

int testGetCampuses (Game g, int player) {
	// Can't be implemented

}

int testGetIPs (Game g, int player) {
	// Can't be implemented

}

int testGetPublications (Game g, int player) {
	// Can't be implemented

}

int testGetStudents (Game g, int player, int discipline) {
	// Can't be implemented

}

int testgetExchangeRate (Game g, int player, int disciplineFrom, int disciplineTo) {
	// Can't be implemented

}

void testgetDiceValue (Game g, int regionID);{
	int actualDiceValue = g.dice[regionID];
	int testDiceValue = getDiceValue(g,regionID);
	assert(actualDiceValue == testDiceValue);
}
