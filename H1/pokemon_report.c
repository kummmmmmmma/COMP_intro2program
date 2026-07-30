#include <stdio.h>

enum pokemon_type {
    FAIRY,
    WATER,
    FIRE,
    GRASS,
    ELECTRIC
};

enum battle_status {
    READY,
    TIRED,
    FAINTED
};

struct pokemon {
    char initial;
    enum pokemon_type type;
    enum battle_status status;
    int hp;
    int attack;
    int level;
};

/*
 * Problem 3: Pokemon Report
 *
 * This starter file focuses on struct, enum, dot operator, scanf,
 * if/else, expressions, and formatted output.
 *
 * No custom functions are used in this version. Complete all TODO blocks
 * inside main.
 */
int main(void) {
    struct pokemon first;
    struct pokemon second;
    int first_type_code;
    int second_type_code;

    printf("Enter pokemon A: initial type_code hp attack level\n");
    scanf(" %c %d %d %d %d",
          &first.initial,
          &first_type_code,
          &first.hp,
          &first.attack,
          &first.level);

    printf("Enter pokemon B: initial type_code hp attack level\n");
    scanf(" %c %d %d %d %d",
          &second.initial,
          &second_type_code,
          &second.hp,
          &second.attack,
          &second.level);

    /*
     * TODO(student) 1: Convert type codes into enum pokemon_type fields.
     * Goal:
     * - 0 -> FAIRY
     * - 1 -> WATER
     * - 2 -> FIRE
     * - 3 -> GRASS
     * - 4 -> ELECTRIC
     *
     * Replace the placeholder assignments below.
     */
    (void)first_type_code;
    (void)second_type_code;
    /* Write your code below this line. */
    first.type = FAIRY;
    second.type = FAIRY;

    /*
     * TODO(student) 2: Derive battle status from hp.
     * Goal:
     * - hp <= 0 means FAINTED.
     * - hp < 20 means TIRED.
     * - otherwise READY.
     *
     * Replace the placeholder assignments below.
     */
    /* Write your code below this line. */
    first.status = READY;
    second.status = READY;

    /*
     * TODO(student) 3: Calculate battle power for both pokemon.
     * Required formula:
     * attack * level + hp
     * If status is TIRED, divide the result by 2.
     * If status is FAINTED, power is 0.
     */
    int first_power = 0;
    int second_power = 0;
    /* Write your code below this line. */

    printf("\nPokemon A\n");
    printf("Initial: %c\n", first.initial);
    printf("Type: ");
    /*
     * TODO(student) 4A: Print first.type in words.
     * Goal: print FAIRY, WATER, FIRE, GRASS, or ELECTRIC.
     */
    /* Write your code below this line. */
    printf("TODO_TYPE");
    printf("\n");

    printf("Status: ");
    /*
     * TODO(student) 4B: Print first.status in words.
     * Goal: print READY, TIRED, or FAINTED.
     */
    /* Write your code below this line. */
    printf("TODO_STATUS");
    printf("\n");
    printf("HP: %d\n", first.hp);
    printf("Attack: %d\n", first.attack);
    printf("Level: %d\n", first.level);

    printf("\nPokemon B\n");
    printf("Initial: %c\n", second.initial);
    printf("Type: ");
    /*
     * TODO(student) 4C: Print second.type in words.
     */
    /* Write your code below this line. */
    printf("TODO_TYPE");
    printf("\n");

    printf("Status: ");
    /*
     * TODO(student) 4D: Print second.status in words.
     */
    /* Write your code below this line. */
    printf("TODO_STATUS");
    printf("\n");
    printf("HP: %d\n", second.hp);
    printf("Attack: %d\n", second.attack);
    printf("Level: %d\n", second.level);

    printf("\nPower A: %d\n", first_power);
    printf("Power B: %d\n", second_power);

    /*
     * TODO(student) 5: Complete the winner comparison.
     * Goal: print A wins, B wins, or Draw.
     */
    /* Write your code below this line. */
    printf("Result: TODO\n");

    return 0;
}
