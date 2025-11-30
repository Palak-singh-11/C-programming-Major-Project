#include <stdio.h>
#include "flight.h"

void report_summary() {
    printf("\n--- FLIGHT REPORT ---\n");

    for (int i = 0; i < fcount; i++) {
        int booked = flight_list[i].seats_total - flight_list[i].seats_left;

        printf("%d) %s -> %s | Booked: %d | Left: %d\n",
            flight_list[i].id,
            flight_list[i].from,
            flight_list[i].to,
            booked,
            flight_list[i].seats_left
        );
    }
}