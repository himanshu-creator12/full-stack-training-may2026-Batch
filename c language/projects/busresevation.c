#include <stdio.h>

int userId[10], password[10];
int userCount = 0;

int busNo[3] = {301, 302, 303};
int busType[3] = {1, 2, 1};
int capacity[3] = {40, 30, 20};

int source[3] = {1, 2, 3};
int destination[3] = {2, 3, 4};

int seats[20] = {0};

int login = 0;
int bookedSeat = 0;
int bookedBus = 0;
int amount = 0;

int registerUser();
int userLogin();
int busDetails();
int bookTicket();
int cancelTicket();
int payment();
int receipt();


int main()
{
    int choice;

    do
    {
        printf("\n===== BUS RESERVATION SYSTEM =====\n");
        printf("1. User Registration\n");
        printf("2. User Login\n");
        printf("3. Bus Details & Route\n");
        printf("4. Book Ticket\n");
        printf("5. Cancel Ticket\n");
        printf("6. Payment\n");
        printf("7. Receipt\n");
        printf("8. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);


        switch(choice)
        {
            case 1:
                registerUser();
                break;

            case 2:
                userLogin();
                break;

            case 3:
                busDetails();
                break;

            case 4:
                bookTicket();
                break;

            case 5:
                cancelTicket();
                break;

            case 6:
                payment();
                break;

            case 7:
                receipt();
                break;

            case 8:
                printf("Thank You\n");
                break;

            default:
                printf("Wrong Choice\n");
        }

    }while(choice!=8);


    return 0;
}


int registerUser()
{
    printf("Enter User ID: ");
    scanf("%d",&userId[userCount]);

    printf("Enter Password: ");
    scanf("%d",&password[userCount]);

    userCount++;

    printf("Registration Successful\n");

    return 0;
}


int userLogin()
{
    int id,pass,i;

    printf("Enter User ID: ");
    scanf("%d",&id);

    printf("Enter Password: ");
    scanf("%d",&pass);


    for(i=0;i<userCount;i++)
    {
        if(userId[i]==id && password[i]==pass)
        {
            login=1;
            printf("Login Successful\n");
            return 0;
        }
    }

    printf("Invalid Login\n");

    return 0;
}


int busDetails()
{
    int i;

    printf("\n===== BUS DETAILS =====\n");

    for(i=0;i<3;i++)
    {
        printf("\nBus Number : %d",busNo[i]);

        printf("\nRoute : ");

        if(source[i]==1)
            printf("Delhi");

        else if(source[i]==2)
            printf("Mumbai");

        else
            printf("Jaipur");


        printf(" to ");

        if(destination[i]==2)
            printf("Mumbai");

        else if(destination[i]==3)
            printf("Jaipur");

        else
            printf("Lucknow");


        printf("\nType : ");

        if(busType[i]==1)
            printf("AC");

        else
            printf("Non AC");


        printf("\nCapacity : %d\n",capacity[i]);
    }

    return 0;
}


int bookTicket()
{
    int seat,bus;

    if(login==0)
    {
        printf("Please Login First\n");
        return 0;
    }


    printf("Enter Bus Number: ");
    scanf("%d",&bus);


    printf("Enter Seat Number(1-20): ");
    scanf("%d",&seat);


    if(seats[seat-1]==0)
    {
        seats[seat-1]=1;

        bookedSeat=seat;
        bookedBus=bus;

        amount=500;


        printf("Ticket Booked Successfully\n");
        printf("Booking Confirmed\n");
    }

    else
    {
        printf("Seat Already Booked\n");
    }

    return 0;
}


int cancelTicket()
{
    int seat;

    printf("Enter Seat Number: ");
    scanf("%d",&seat);


    if(seats[seat-1]==1)
    {
        seats[seat-1]=0;

        printf("Ticket Cancelled Successfully\n");
    }

    else
    {
        printf("No Booking Found\n");
    }

    return 0;
}


int payment()
{
    printf("\nAmount = %d", amount);
    printf("\nPayment Successful\n");

    return 0;
}


int receipt()
{if(bookedSeat==0)
    {
        printf("No Ticket Booked\n");
        return 0;
    }


    printf("\n======= TICKET RECEIPT =======\n");

    printf("Bus Number : %d\n",bookedBus);
    printf("Seat Number: %d\n",bookedSeat);
    printf("Amount       : Rs.%d\n",amount);
    printf("Status     : Confirmed\n");

    return 0;
}
    
    
