#include <stdio.h>
#include <string.h>

struct Reservation {
    char name[50];
    int age;
    char gender;
    int seat_no;
    char type[10];   // "Bus" or "Train"
};

int bus_seat = 1;
int train_seat = 1;

void bookBus(struct Reservation r[]) {
    struct Reservation temp;
    printf("\n---- BUS RESERVATION ----\n");
    printf("Enter Name: ");
    scanf("%s", temp.name);
    printf("Enter Age: ");
    scanf("%d", &temp.age);
    printf("Enter Gender (M/F): ");
    scanf(" %c", &temp.gender);

    temp.seat_no = bus_seat++;
    strcpy(temp.type, "Bus");

    r[temp.seat_no] = temp;

    printf("\nBus Ticket Booked Successfully!\n");
    printf("Seat Number: %d\n", temp.seat_no);
}

void bookTrain(struct Reservation r[]) {
    struct Reservation temp;
    printf("\n---- TRAIN RESERVATION ----\n");
    printf("Enter Name: ");
    scanf("%s", temp.name);
    printf("Enter Age: ");
    scanf("%d", &temp.age);
    printf("Enter Gender (M/F): ");
    scanf(" %c", &temp.gender);

    temp.seat_no = train_seat++;
    strcpy(temp.type, "Train");

    r[temp.seat_no + 100] = temp; // Train seats stored separately

    printf("\nTrain Ticket Booked Successfully!\n");
    printf("Seat Number: %d\n", temp.seat_no);
}

void showAll(struct Reservation r[]) {
    int i;

    printf("\n---- ALL RESERVATIONS ----\n");

    for (i = 1; i <= 50; i++) {
        if (r[i].seat_no != 0 && strcmp(r[i].type, "Bus") == 0) {
            printf("\n[BUS] Seat %d: %s (%d, %c)\n",
                   r[i].seat_no, r[i].name, r[i].age, r[i].gender);
        }
    }

    for (i = 101; i <= 150; i++) {
        if (r[i].seat_no != 0 && strcmp(r[i].type, "Train") == 0) {
            printf("\n[TRAIN] Seat %d: %s (%d, %c)\n",
                   r[i].seat_no, r[i].name, r[i].age, r[i].gender);
        }
    }
}

int main() {
    struct Reservation r[200] = {0};
    int choice;

    while (1) {
        printf("\n===== BUS & TRAIN RESERVATION SYSTEM =====\n");
        printf("1. Book Bus Ticket\n");
        printf("2. Book Train Ticket\n");
        printf("3. Show All Reservations\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: bookBus(r); break;
            case 2: bookTrain(r); break;
            case 3: showAll(r); break;
            case 4: printf("Exiting...\n"); return 0;
            default: printf("Invalid Option!\n");
        }
    }

    return 0;
}
