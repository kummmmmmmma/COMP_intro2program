#include <stdio.h>

#define MIN_ROWS 3
#define MAX_ROWS 12
#define MIN_COLS 5
#define MAX_COLS 20
#define BLOCK_STEP 4

/*
 * Problem 2: Seat Map Generator
 *
 * This starter file focuses on input validation, nested while loops,
 * and condition priority inside the inner loop.
 */
int main(void) {
    int rows;
    int cols;
    int aisle_col;
    int group_size;

    printf("Enter rows cols aisle_col group_size: ");
    if (scanf("%d %d %d %d", &rows, &cols, &aisle_col, &group_size) != 4) {
        printf("Invalid input\n");
        return 1;
    }

    /*
     * TODO(student) 1: Replace this placeholder with full validation.
     * Goal:
     * - rows is between MIN_ROWS and MAX_ROWS.
     * - cols is between MIN_COLS and MAX_COLS.
     * - aisle_col is between 2 and cols - 1.
     * - group_size is positive.
     */
    int input_ok = 0;

    if (!input_ok) {
        printf("Invalid input\n");
        return 1;
    }

    int available = 0;
    int vip = 0;
    int blocked = 0;
    int aisles = 0;

    printf("\nSeat map for %d rows, %d cols, aisle column %d\n",
           rows, cols, aisle_col);

    int row = 1;
    while (row <= rows) {
        int col = 1;
        while (col <= cols) {
            char symbol = '?';

            /*
             * TODO(student) 2: Complete the symbol decision tree.
             * Priority order:
             * 1. If col == aisle_col, print '|'. Count one aisle position.
             * 2. Else if (row + col) % BLOCK_STEP == 0, print 'X'. Count blocked.
             * 3. Else if row is first or last row, print 'V'. Count VIP and available.
             * 4. Else print '.'. Count available.
             *
             * Current '?' output is only a placeholder.
             */
            /* Write your code below this line. */

            printf("%c", symbol);

            if (col < cols) {
                printf(" ");
            }
            col = col + 1;
        }
        printf("\n");
        row = row + 1;
    }

    printf("\nAvailable seats: %d\n", available);
    printf("VIP seats: %d\n", vip);
    printf("Blocked seats: %d\n", blocked);
    printf("Aisle positions: %d\n", aisles);

    /*
     * TODO(student) 3: Complete the decision.
     * Goal:
     * - ENOUGH when available >= group_size.
     * - NOT ENOUGH otherwise.
     */
    /* Write your code below this line. */
    printf("Decision: TODO\n");

    return 0;
}
