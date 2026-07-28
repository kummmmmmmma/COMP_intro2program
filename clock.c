#include <stdio.h>

void main() {

    int hour = 0;
    int minute = 0;
    int second = 0;

    while (hour < 24) {
        minute = 0;
        while (minute < 60) {
            second = 0;
            while (second < 60) {
                second = second + 1;
            }
            minute = minute + 1;
        }
        hour = hour + 1;
    }


}