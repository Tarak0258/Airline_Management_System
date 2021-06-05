#include<stdio.h>

//functions
voi introduction();
void loginfun();
void employeeDiv();



//main programming
void main()
{

    introduction();
    loginfun();
    employeeDiv();

}



//introduction function
void introduction ()
{
    printf("\n\n");
    printf("\t\t|===============================================================|\n\t\t|\t\t\t\t\t\t\t\t|\n\t\t|\tWelcome to Airline Management System Project SPL\t|\n\t\t|\t\t\t\t\t\t\t\t|\n\t\t|===============================================================|\n\t\t| Student Id's:\t 1: Pravas Chandra Sarkar(CSE 075 08307)\t|\n\t\t|\t\t 2: Farzana Mohsin Labonno (CSE 075 08307)\t\t|\n\t\t|\t\t 3: Tarekul Hasan(CSE 075 08310)\t\t|\n\t\t|===============================================================|");
    printf("\n\t\t|===============================================================|\n\t\t|\t\t\t\t\t\t\t\t|\n\t\t|\t\t ::LOGIN YOUR ACCOUNT::\t\t\t\t|\n\t\t|\t\t\t\t\t\t\t\t|\n\t\t|===============================================================|");
}



//Employee and Passenger Login Function
void loginfun()
{
    int loginid,loginpass,forsingin;
    printf("\n\n\n\t\t\tENTER YOUR USER NAME : ");
    scanf("%d",&loginid);
    printf("\n\n\t\t\tENTER YOUR PASSWORD : ");
    scanf("%d",&loginpass);
    printf("\n\n");

    if(loginid == 1234 && loginpass==1234)
    {
        system("cls");
        employeeDiv();
    }
    else if(loginid == 5678 && loginpass==5678)
    {
        printf("This is Passenger Group");
    }
    else
    {
        printf("\t\t\tYour Entered Id or Password is Wrong,\n\t\t\t1: Enter 1 To Create A Account\n\t\t\t2: Enter 2 TO Exit\n\n\n");
        scanf("%d",&forsingin);
    }
}


//Employee Division
void employeeDiv()
{
    int menuemployee;
    printf("\n\n\n\n\t\t\t\tHi Employee Here Is Your Menu");
    printf("\n\t\t\t\t 1> Flights\n\t\t\t\t 2> Ticket Info\n\t\t\t\t 3> Payment Info\n\t\t\t\t 4> About Our Company\n\t\t\t\t 5> Back to Login Page\n\t\t\t\t 6> Exit");
    printf("\n\n\n\t\t\t\tEnter Your Choose : ");
    scanf("%d",&menuemployee);

    switch(menuemployee)
    {
        case 1 : printf("You are in The Flights Menu");
                break;
        case 2 : printf("You are in The Ticket Menu");
                break;
        case 3 : printf("You are in The Payment Menu");
                break;
        case 4 : printf("You are in The Company Menu");
                break;
        case 5 : loginfun();
                break;
        case 6 : exit(0);
                break;
        default : printf(":::::::::You Entered Wrong Value::::::::::");
    }
}
