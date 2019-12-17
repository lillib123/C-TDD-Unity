
#include "ProductionCode.h"
#include "unity/unity.h"

void setUp(void) {
}

void tearDown(void) {
}

void a_passing_test(void) {
  TEST_ASSERT_EQUAL(0, test());
}

void isAlive_can_detect_live_cell(void) {
  TEST_ASSERT_EQUAL_INT(true,isAlive(1));
}

void isAlive_can_detect_dead_cell(void) {
  TEST_ASSERT_EQUAL_INT(false,isAlive(0));
}

/*

//Any live cell with fewer than two live neighbours dies, as if caused by under-population.
// Any live cell with two or three live neighbours lives on to the next generation.
// Any live cell with more than three live neighbours dies, as if by overcrowding.
// Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.

*/