#include <stdio.h>

#define SENTINEL -1
#define MIN_MINUTES 10
#define MAX_MINUTES 240
#define MIN_FOCUS 1
#define MAX_FOCUS 5
#define HIGH_FOCUS 4
#define READY_MINUTES 180
#define READY_HIGH_FOCUS 2

/*
 * Problem 1: Study Coach
 *
 * This starter file can compile, but several TODO(student) blocks still
 * contain incomplete placeholder logic. Replace those placeholders to make
 * the program match the PDF specification.
 */
int main(void) {
    int minutes;
    char subject;
    int focus;

    int valid_sessions = 0;
    int invalid_sessions = 0;
    int total_minutes = 0;
    int coding_minutes = 0;
    int high_focus_sessions = 0;
    int best_score = 0;

    printf("Enter study sessions as: minutes subject focus\n");
    printf("subject: C = coding, M = maths, E = English\n");
    printf("Use -1 as minutes to stop.\n\n");

    printf("Session: ");
    while (scanf("%d", &minutes) == 1 && minutes != SENTINEL) {
        if (scanf(" %c %d", &subject, &focus) != 2) {
            printf("Input stopped: expected subject and focus.\n");
            return 1;
        }

        /*
         * TODO(student) 1: Complete the three validation expressions.
         * Goal:
         * - minutes must be between MIN_MINUTES and MAX_MINUTES.
         * - subject must be C, M, or E.
         * - focus must be between MIN_FOCUS and MAX_FOCUS.
         */
        int minutes_is_valid = 0;
        int subject_is_valid = 0;
        int focus_is_valid = 0;

        if (minutes_is_valid && subject_is_valid && focus_is_valid) {
            valid_sessions = valid_sessions + 1;
            total_minutes = total_minutes + minutes;

            /*
             * TODO(student) 2: Update coding_minutes when subject is C.
             * Goal: coding_minutes should store total minutes spent on coding.
             */
            /* Write your code below this line. */

            /*
             * TODO(student) 3: Update high_focus_sessions.
             * Goal: count sessions whose focus is at least HIGH_FOCUS.
             */
            /* Write your code below this line. */

            /*
             * TODO(student) 4: Complete the scoring rule.
             * Required score:
             *   minutes * focus
             *   + 50 when subject is C and minutes is at least 60
             *   + 25 when focus is exactly 5
             */
            int session_score = 0;
            /* Write your code below this line. */

            if (session_score > best_score) {
                best_score = session_score;
            }
        } else {
            invalid_sessions = invalid_sessions + 1;
        }

        printf("Session: ");
    }

    printf("\nStudy summary\n");
    printf("Valid sessions: %d\n", valid_sessions);
    printf("Invalid sessions: %d\n", invalid_sessions);
    printf("Total minutes: %d\n", total_minutes);
    printf("Coding minutes: %d\n", coding_minutes);
    printf("High focus sessions: %d\n", high_focus_sessions);
    printf("Best session score: %d\n", best_score);

    if (valid_sessions > 0) {
        double average_minutes = 1.0 * total_minutes / valid_sessions;
        printf("Average minutes: %.2lf\n", average_minutes);
    } else {
        printf("Average minutes: 0.00\n");
    }

    /*
     * TODO(student) 5: Complete the final result classification.
     * Required output:
     * - READY when total_minutes >= READY_MINUTES
     *   and high_focus_sessions >= READY_HIGH_FOCUS.
     * - STEADY when there is at least one valid session but not READY.
     * - NO DATA when there are no valid sessions.
     */
    /* Write your code below this line. */
    printf("Result: TODO\n");

    return 0;
}
