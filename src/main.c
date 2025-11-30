#include <stdio.h>
#include "flight.h"
#include "passenger.h"
#include "booking.h"
#include "baggage.h"
#include "report.h"

int main() {
    preload_flights();

    int choice;
    while (1) {
        printf("\n===== UPES AIRLINE =====\n");
        printf("1 View Flights\n");
        printf("2 Add Passenger\n");
        printf("3 View Passengers\n");
        printf("4 Book Ticket\n");
        printf("5 View Bookings\n");
        printf("6 Modify Booking\n");
        printf("7 Cancel Booking\n");
        printf("8 Check-In\n");
        printf("9 View Baggage\n");
        printf("10 Report\n");
        printf("11 Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: view_flights(); break;
            case 2: add_passenger(); break;
            case 3: view_passengers(); break;
            case 4: book_ticket(); break;
            case 5: view_bookings(); break;
            case 6: modify_booking(); break;
            case 7: cancel_booking(); break;
            case 8: check_in(); break;
            case 9: view_bags(); break;
            case 10: report_summary(); break;
            case 11: return 0;
            default: printf("Invalid choice.\n");
        }
    }
}