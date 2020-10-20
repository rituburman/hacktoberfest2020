// Airlines Reservation System - CodeWithC.com

#include<iostream>
#include<cstdio>
#include<fstream>
#include<sstream>
#include<string>
#include<cstdlib>
#include<conio.h>
#include<windows.h>
#include<mysql.h>
using namespace std;

// Global Variable
int qstate;
MYSQL* conn;
MYSQL_ROW row;
MYSQL_RES* res;
// Global Variable End

class db_response
{
public:
    static void ConnectionFunction()
    {
        conn = mysql_init(0);
        if (conn)
        {
            cout << "Database Connected" << endl;
            cout << "Press any key to continue..." << endl;
            //getch();
            system("cls");
        }
        else
            cout << "Failed To Connect!" << mysql_errno(conn) << endl;
        conn = mysql_real_connect(conn, "localhost", "root", "", "cpp_airlinereservation_db", 0, NULL, 0);
        if (conn)
        {
            cout << "Database Connected To MySql" << conn << endl;
            cout << "Press any key to continue..." << endl;
            //getch();
            system("cls");
        }
        else
            cout << "Failed To Connect!" << mysql_errno(conn) << endl;
    }
};

// Functions
void ReserveSeat();
void UserTicket();
void FlightSchedule();
void DisplayPassenger();

void FlightDetails();
void AddNewFlight();
void EditFlight();
void DeleteFlight();
void FlightLeaveArrive();

// Functions End

int main()
{
    // Initial Load
    system("cls");
    system("title Airlines Reservation System Program");
    system("color 0f");
    // Initial Load End

    // Call Methods
    db_response::ConnectionFunction();
    // Call Methods End

    // Variables
    int chooseOneFromMenu = 0;
    char exitSurity;
    // Variables End

    cout << "Welcome To Airlines Reservation System" << endl << endl;
    cout << "Airlines Reservation System Menu" << endl;
    cout << "1. Reserve Seat." << endl;
    cout << "2. User Ticket." << endl;
    cout << "3. Flights Schedule." << endl;
    cout << "4. Display Passenger." << endl;
    cout << "5. Flight Details." << endl;
    cout << "6. Exit Program." << endl;
    cout << "Choose One: ";
    cin >> chooseOneFromMenu;

    switch (chooseOneFromMenu)
    {
    case 1:
        ReserveSeat();
        break;
    case 2:
        UserTicket();
        break;
    case 3:
        FlightSchedule();
        break;
    case 4:
        DisplayPassenger();
        break;
    case 5:
        FlightDetails();
        break;
    case 6:
        ExitProgram:
        cout << "Program terminating. Are you sure? (y/N): ";
        cin >> exitSurity;
        if (exitSurity == 'y' || exitSurity == 'Y') {
            return 0;
        }else if (exitSurity == 'n' || exitSurity == 'N') {
            system("cls");
            main();
        }else {
            cout << "Next time choose after read the corresponding line." << endl;
            goto ExitProgram;
        }
        break;
    default:
        cout << "Please choose between The Given Numbers. Press Enter To Continue...";
        getch();
        system("cls");
        main();
        break;
    }
    return 0;
}
// Airlines Reservation System - CodeWithC.com
// Functions
void ReserveSeat()
{
    // Initial Load
    system("cls");
    // Initial Load End

    // Variables
    string userFlightNo = "";
    string userName = "";
    string userPhone = "";
    string userPassportNo = "";
    string userTicket = "";
    string userAddress = "";
    char choose;
    // Variables End

     // Store Variables
    string store2dArray[500][500];
    int storeIndex1 = 0, storeIndex2 = 0;
    // Store Variables End


    cout << "Welcome To Airlines Reservation System" << endl << endl;
    cout << "Reserve Seat Menu" << endl << endl;

    cin.ignore(1, '\n');
    cout << "Enter User Name: ";
    getline(cin, userName);
    cout << "Enter User Phone No: ";
    getline(cin, userPhone);
    cout << "Enter User Passport: ";
    getline(cin, userPassportNo);
    cout << "Enter User Ticket: ";
    getline(cin, userTicket);
    cout << "Enter User Address: ";
    getline(cin, userAddress);

    qstate = mysql_query(conn, "select * from flightdetails_tb where f_available = 'A'");
    if (!qstate)
    {
        res = mysql_store_result(conn);
        printf("--------------------------------------------------------------------------------------------------------------------\n");
        printf("| %-20s | %-20s | %-20s | %-20s | %-20s |\n", "Flight No", "From", "Destination", "Time", "Amount");
        while ((row = mysql_fetch_row(res)))
        {
            printf("| %-20s | %-20s | %-20s | %-20s | %-20s |\n", row[1], row[3], row[4], row[5], row[6]);
        }
        printf("--------------------------------------------------------------------------------------------------------------------\n");
}
    else
    {
        cout << "Query Execution Problem!" << mysql_errno(conn) << endl;
    }
    cout << "Enter Flight No: ";
    getline(cin, userFlightNo);

    string insert_query = "insert into userreservation_tb (u_name, u_phone, u_passportno, u_ticket, u_flightno, u_address) values ('"+userName+"','"+userPhone+"','"+userPassportNo+"','"+userTicket+"','"+userFlightNo+"','"+userAddress+"')";

    const char* q = insert_query.c_str(); // c_str converts string to constant char and this is required

    qstate = mysql_query(conn, q);

    if (!qstate)
    {
        cout << endl << "Successfully added in database." << endl;
    }
    else
    {
        cout << "Query Execution Problem!" << mysql_errno(conn) << endl;
    }

    // Exit Code
    cout << "Press 'm' to Menu and 'a' to Reserve Again Or Any Other key to exit: ";
    cin >> choose;
    if (choose == 'm' || choose == 'M')
    {
        main();
    }
    else if (choose == 'a' || choose == 'A')
    {
        ReserveSeat();
    }
    else
    {
        exit(0);
    }
}

void UserTicket()
{
    // Initial Load
    system("cls");
    // Initial Load End

    // Variables
    string input = "";
    char choose;
    // Variables End

    cout << "Welcome To Airlines Reservation System" << endl << endl;
    cout << "User Ticket Menu" << endl << endl;

    cin.ignore(1, '\n');
    cout << "Enter User Name: ";
    getline(cin, input);
    string findbyname_query = "select * from userreservation_tb where u_name like '%"+input+"%'";
    const char* qn = findbyname_query.c_str();
    qstate = mysql_query(conn, qn);

    cout << endl;
    cout << "Showing Ticket of " << input << endl << endl;
    if (!qstate)
    {
        res = mysql_store_result(conn);
        while ((row = mysql_fetch_row(res)))
        {
            cout << "Ticket No.: " << row[4] << "\nUser Name: " << row[1] << "\nUser Phone No.: " << row[2] << "\nUser Passport: " << row[3] << "\nFlight No.: " << row[5] << "\nUser Address: " << row[6] << endl << endl;
        }
    }
    else
    {
        cout << "Query Execution Problem!" << mysql_errno(conn) << endl;
    }

    // Exit Code
    ExitMenu:
    cout << "Press 'm' to Menu, 'a' to Search again and any other key to Exit: ";
    cin >> choose;
    if (choose == 'm' || choose == 'M')
    {
        main();
    }
    else if (choose == 'a' || choose == 'A')
    {
        UserTicket();
    }
    else
    {
        exit(0);
    }
}

void FlightSchedule()
{
    // Initial Load
    system("cls");
    // Initial Load End

    // Variables
    char choose;
    // Variables End

    cout << "Welcome To Airlines Reservation System" << endl << endl;
    cout << "Flight Schedule" << endl << endl;

    qstate = mysql_query(conn, "select * from flightdetails_tb");
    if (!qstate)
    {
        res = mysql_store_result(conn);
        printf("-------------------------------------------------------------------------------------------\n");
        printf("| %-15s | %-15s | %-15s | %-15s | %-15s |\n", "Flight No." , "From", "Destination", "Leave", "Arrive");
        while ((row = mysql_fetch_row(res)))
        {
            printf("| %-15s | %-15s | %-15s | %-15s | %-15s |\n", row[1], row[3], row[4], row[7], row[8]);
        }
        printf("-------------------------------------------------------------------------------------------\n");
    }
    else
    {
        cout << "Query Execution Problem!" << mysql_errno(conn) << endl;
    }

    // Exit Code
    ExitMenu:
    cout << "Press 'm' to Menu and any other key to Exit: ";
    cin >> choose;
    if (choose == 'm' || choose == 'M')
    {
        main();
    }
    else
    {
        exit(0);
    }
}

void DisplayPassenger()
{
    // Initial Load
    system("cls");
    // Initial Load End

    // Variables
    char choose;
    // Variables End

    cout << "Welcome To Airlines Reservation System" << endl << endl;
    cout << "Display Passenger Menu" << endl << endl;

    qstate = mysql_query(conn, "select * from userreservation_tb");
    if (!qstate)
    {
        res = mysql_store_result(conn);
        printf("------------------------------------------------------------------------------------------------------------------\n");
        printf("| %-20s | %-15s | %-15s | %-15s | %-15s | %-15s |\n", "User Name", "Phone No.", "Passport No.", "Ticket No.", "Flight No.", "Address");
        while ((row = mysql_fetch_row(res)))
        {
            printf("| %-20s | %-15s | %-15s | %-15s | %-15s | %-15s |\n", row[1], row[2], row[3], row[4], row[5], row[6]);
        }
        printf("------------------------------------------------------------------------------------------------------------------\n");
    }
    else
    {
        cout << "Query Execution Problem!" << mysql_errno(conn) << endl;
    }

    // Exit Code
    ExitMenu:
    cout << "Press 'm' to Menu and any other key to Exit: ";
    cin >> choose;
    if (choose == 'm' || choose == 'M')
    {
        main();
    }
    else
    {
        exit(0);
    }
}

void FlightDetails()
{
    // Initial Load
    system("cls");
    system("title Airlines Reservation System Program");
    system("color 0f");
    // Initial Load End

    // Call Methods
    db_response::ConnectionFunction();
    // Call Methods End

    // Variables
    int chooseOneFromMenu = 0;
    // Variables End

    cout << "Welcome To Airlines Reservation System" << endl << endl;
    cout << "Airlines Reservation System Menu" << endl;
    cout << "1. Add Flight." << endl;
    cout << "2. Edit Flight." << endl;
    cout << "3. Delete Flight." << endl;
    cout << "4. Flight Leave And Arrive." << endl;
    cout << "5. Back To Menu." << endl;
    cout << "Choose One: ";
    cin >> chooseOneFromMenu;

    switch (chooseOneFromMenu)
    {
    case 1:
        AddNewFlight();
        break;
    case 2:
        EditFlight();
        break;
    case 3:
        DeleteFlight();
        break;
    case 4:
        FlightLeaveArrive();
        break;
    case 5:
        main();
        break;
    default:
        cout << "Please choose between The Given Numbers. Press Enter To Continue...";
        getch();
        system("cls");
        FlightDetails();
        break;
    }
}
// Airlines Reservation System - CodeWithC.com
void AddNewFlight()
{
    // Initial Load
    system("cls");
    // Initial Load End

    // Variables
    string flightNo = "";
    string flightName = "";
    string flightFrom = "";
    string flightDestination = "";
    string flightTime = "";
    string flightAmount = "";
    string flightAvailability = "";
    char choose;
    // Variables End

    // Store Variables
    // Store Variables End

    cout << "Welcome To Airlines Reservation System" << endl << endl;
    cout << "Add New Flight Menu" << endl << endl;

    cin.ignore(1, '\n');
    cout << "Enter Flight No: ";
    getline(cin, flightNo);
    cout << "Enter Flight Name: ";
    getline(cin, flightName);
    cout << "Enter Flight From: ";
    getline(cin, flightFrom);
    cout << "Enter User Destination: ";
    getline(cin, flightDestination);
    cout << "Enter Flight Time: ";
    getline(cin, flightTime);
    cout << "Enter Amount: ";
    getline(cin, flightAmount);
    cout << "Enter Flight Availability (A (Available) / N (Not Available)): ";
    getline(cin, flightAvailability);

    string insert_query = "insert into flightdetails_tb (f_no, f_name, f_from, f_destination, f_time, f_amount, f_available) values ('"+flightNo+"','"+flightName+"','"+flightFrom+"','"+flightDestination+"','"+flightTime+"','"+flightAmount+"','"+flightAvailability+"')";

    const char* q = insert_query.c_str(); // c_str converts string to constant char and this is required

    qstate = mysql_query(conn, q);

    if (!qstate)
    {
        cout << endl << "Successfully added in database." << endl;
    }
    else
    {
        cout << "Query Execution Problem!" << mysql_errno(conn) << endl;
    }

    // Exit Code
    cout << "Press 'm' to Flight Details Menu and 'a' to Insert Again Or Any Other key to exit: ";
    cin >> choose;
    if (choose == 'm' || choose == 'M')
    {
        FlightDetails();
    }
    else if (choose == 'a' || choose == 'A')
    {
        AddNewFlight();
    }
    else
    {
        exit(0);
    }
}

void EditFlight()
{
    system("cls");

    // Variables
    string flightNo = "";
    string flightName = "";
    string flightFrom = "";
    string flightDestination = "";
    string flightTime = "";
    string flightAmount = "";
    string items[5000];
    char choose;
    int itemId;
    bool HaveException = false;
    bool NotInDatabase = false;
    int indexForId = 0;

    // Store Variables
    string storeColumnId = "";
    string storeFlightNo = "";
    string storeFlightName = "";
    string storeFlightFrom = "";
    string storeFlightDestination = "";
    string storeFlightTime = "";
    string storeFlightAmount = "";
    string storeUserTripPlan2d[500][500];
    int storeIndex1 = 0, storeIndex2 = 0;
    // Variables End

    cout << "Welcome To Airlines Reservation System" << endl << endl;
    cout << "Edit Flight Record" << endl;


    qstate = mysql_query(conn, "select * from flightdetails_tb");
    if (!qstate)
    {
        res = mysql_store_result(conn);
        printf("--------------------------------------------------------------------------------------------------------\n");
        printf("| %-10s | %-15s | %-15s | %-15s | %-15s | %-15s |\n", "Column ID", "Flight No.", "Flight Name", "From", "Destination", "Time");
        while ((row = mysql_fetch_row(res)))
        {
            printf("| %-10s | %-15s | %-15s | %-15s | %-15s | %-15s |\n", row[0], row[1], row[2], row[3], row[4], row[5]);
            items[indexForId] = row[0];
            indexForId++;
        }
        printf("--------------------------------------------------------------------------------------------------------\n");
    }
    else
    {
        cout << "Query Execution Problem!" << mysql_errno(conn) << endl;
    }

    try
    {
        cout << endl;
        cout << "Enter Item Column ID: ";
        cin >> itemId;
        cout << endl;
    }
    catch (exception e)
    {
        cout << "Please Enter a valid NUMBER." << endl;
        HaveException = true;
        goto ExitMenu;
    }

    if (HaveException == false)
    {
        stringstream streamid;
        string strid;
        streamid << itemId;
        streamid >> strid;

        for (int i = 0; i < indexForId; i++)
        {
            if (strid != items[i])
            {
                NotInDatabase = true;
            }else
            {
                NotInDatabase = false;
                break;
            }
        }

        if (NotInDatabase == false)
        {
            string findbyid_query = "select * from flightdetails_tb where f_id = '"+strid+"'";
            const char* qi = findbyid_query.c_str();
            qstate = mysql_query(conn, qi);

            if (!qstate)
            {
                cout << endl;

                res = mysql_store_result(conn);
                while ((row = mysql_fetch_row(res)))
                {
                    cout << "Flight No.: " << row[1] << "\nFlight Name: " << row[2] << "\nFlight From: " << row[3] << "\nFlight Destination: " << row[4] << "\nFlight Time: " << row[5] << "\nFlight Amount: " << row[6] << endl << endl;
                    storeColumnId = row[0];
                    storeFlightNo = row[1];
                    storeFlightName = row[2];
                    storeFlightFrom = row[3];
                    storeFlightDestination = row[4];
                    storeFlightTime = row[5];
                    storeFlightAmount = row[6];
                }
            }
            else
            {
                cout << "Query Execution Problem!" << mysql_errno(conn) << endl;
            }

            cin.ignore(1, '\n');
            cout << "Enter Flight No. (X to not change): ";
            getline(cin, flightNo);
            if (flightNo == "X")
            {
                flightNo = storeFlightNo;
            }
            cout << "Enter Flight Name (X to not change): ";
            getline(cin, flightName);
            if (flightName == "X")
            {
                flightName = storeFlightName;
            }
            cout << "Enter From (X to not change): ";
            getline(cin, flightFrom);
            if (flightFrom == "X")
            {
                flightFrom = storeFlightFrom;
            }
            cout << "Enter Destination (X to not change): ";
            getline(cin, flightDestination);
            if (flightDestination == "X")
            {
                flightDestination = storeFlightDestination;
            }
            cout << "Enter Time (X to not change): ";
            cin >> flightTime;
            if (flightTime == "X")
            {
                flightTime = storeFlightTime;
            }
            cout << "Enter Amount (X to not change): ";
            cin >> flightAmount;
            if (flightAmount == "X")
            {
                flightAmount = storeFlightAmount;
            }

            string update_query = "update flightdetails_tb set f_no = '"+flightNo+"', f_name = '"+flightName+"', f_from = '"+flightFrom+"', f_destination = '"+flightDestination+"', f_time = '"+flightTime+"', f_amount = '"+flightAmount+"' where f_id = '"+strid+"'";
            const char* qu = update_query.c_str();
            qstate = mysql_query(conn, qu);

            if (!qstate)
            {
                cout << endl << "Successfully Saved In Database." << endl;
            }
            else
            {
                cout << "Failed To Update!" << mysql_errno(conn) << endl;
            }

        }
        else
        {
            cout << "Item Not Found in database." << endl;
        }
    }

    // Exit Code
    ExitMenu:
    cout << "Press 'm' to Menu, 'e' to edit another item and any other key to Exit: ";
    cin >> choose;
    if (choose == 'm' || choose == 'M')
    {
        FlightDetails();
    }
    else if (choose == 'e' || choose == 'E')
    {
        EditFlight();
    }
    else
    {
        exit(0);
    }
}

void DeleteFlight()
{
    system("cls");

    // Variables
    char choose;
    int itemId;
    string items[5000];
    int indexForId = 0;
    bool HaveException = false, NotInDatabase = false;
    // Variables End

    cout << "Welcome To Airlines Reservation System" << endl << endl;
    cout << "Delete Flight Menu" << endl << endl;


    qstate = mysql_query(conn, "select * from flightdetails_tb");
    if (!qstate)
    {
        res = mysql_store_result(conn);
        printf("--------------------------------------------------------------------------------------------------------\n");
        printf("| %-10s | %-15s | %-15s | %-15s | %-15s | %-15s |\n", "Column ID", "Flight No.", "Flight Name", "From", "Destination", "Time");
        while ((row = mysql_fetch_row(res)))
        {
            printf("| %-10s | %-15s | %-15s | %-15s | %-15s | %-15s |\n", row[0], row[1], row[2], row[3], row[4], row[5]);
            items[indexForId] = row[0];
            indexForId++;
        }
        printf("--------------------------------------------------------------------------------------------------------\n");
    }
    else
    {
        cout << "Query Execution Problem!" << mysql_errno(conn) << endl;
    }

    try
    {
        cout << endl;
        cout << "Enter Item Column ID: ";
        cin >> itemId;
        cout << endl;
    }
    catch (exception e)
    {
        cout << "Please Enter a valid NUMBER." << endl;
        HaveException = true;
        goto ExitMenu;
    }

    if (HaveException == false)
    {
        stringstream streamid;
        string strid;
        streamid << itemId;
        streamid >> strid;

        for (int i = 0; i < indexForId; i++)
        {
            if (strid != items[i])
            {
                NotInDatabase = true;
            }else
            {
                NotInDatabase = false;
                break;
            }
        }

        if (NotInDatabase == false)
        {
            string delete_query = "delete from flightdetails_tb where f_id = '"+strid+"'";
            const char* qd = delete_query.c_str();
            qstate = mysql_query(conn, qd);

            if (!qstate)
            {
                cout << "Successfully Deleted From Database." << endl;
            }
            else
            {
                cout << "Failed To Delete!" << mysql_errno(conn) << endl;
            }

        }
        else
        {
            cout << "Item Not Found in database." << endl;
        }
    }

    // Exit Code
    ExitMenu:
    cout << "Press 'm' to Flight Details Menu, 'd' to delete another record and any other key to Exit: ";
    cin >> choose;
    if (choose == 'm' || choose == 'M')
    {
        FlightDetails();
    }
    else if (choose == 'd' || choose == 'D')
    {
        DeleteFlight();
    }
    else
    {
        exit(0);
    }
}
// Airlines Reservation System - CodeWithC.com
void FlightLeaveArrive()
{
    system("cls");

    // Variables
    string flightLeave = "";
    string flightArrive = "";
    string flightAvailable = "";
    string items[5000];
    char choose;
    int itemId;
    bool HaveException = false;
    bool NotInDatabase = false;
    int indexForId = 0;

    // Store Variables
    string storeFlightLeave = "";
    string storeFlightArrive = "";
    string storeFlightAvailable = "";
    // Variables End

    cout << "Welcome To Airlines Reservation System" << endl << endl;
    cout << "Flight Leave And Arrive Record" << endl;


    qstate = mysql_query(conn, "select * from flightdetails_tb");
    if (!qstate)
    {
        res = mysql_store_result(conn);
        printf("--------------------------------------------------------------------------------------------------------\n");
        printf("| %-10s | %-15s | %-15s | %-15s | %-15s | %-15s |\n", "Column ID", "Flight No", "From", "Destination", "Time", "Amount");
        while ((row = mysql_fetch_row(res)))
        {
            printf("| %-10s | %-15s | %-15s | %-15s | %-15s | %-15s |\n", row[0], row[1], row[3], row[4], row[5], row[6]);
        }
        printf("--------------------------------------------------------------------------------------------------------\n");
    }
    else
    {
        cout << "Query Execution Problem!" << mysql_errno(conn) << endl;
    }

    try
    {
        cout << endl;
        cout << "Enter Item Column ID: ";
        cin >> itemId;
        cout << endl;
    }
    catch (exception e)
    {
        cout << "Please Enter a valid NUMBER." << endl;
        HaveException = true;
        goto ExitMenu;
    }

    if (HaveException == false)
    {
        stringstream streamid;
        string strid;
        streamid << itemId;
        streamid >> strid;

        for (int i = 0; i < indexForId; i++)
        {
            if (strid != items[i])
            {
                NotInDatabase = true;
            }else
            {
                NotInDatabase = false;
                break;
            }
        }

        if (NotInDatabase == false)
        {
            string findbyid_query = "select * from flightdetails_tb where f_id = '"+strid+"'";
            const char* qi = findbyid_query.c_str();
            qstate = mysql_query(conn, qi);

            if (!qstate)
            {
                cout << endl;

                res = mysql_store_result(conn);
                while ((row = mysql_fetch_row(res)))
                {
                    cout << "Flight No.: " << row[1] << "\nFlight From: " << row[3] << "\nFlight Destination: " << row[4] << "\nFlight Time: " << row[5] << endl << endl;
                    storeFlightLeave = row[7];
                    storeFlightArrive = row[8];
                    storeFlightAvailable = row[9];
                }
            }
            else
            {
                cout << "Query Execution Problem!" << mysql_errno(conn) << endl;
            }

            cin.ignore(1, '\n');
            cout << "Enter User Flight Leave (X to not change): ";
            getline(cin, flightLeave);
            if (flightLeave == "X")
            {
                flightLeave = storeFlightLeave;
            }

            cout << "Enter User Flight Arrive (X to not change): ";
            getline(cin, flightArrive);
            if (flightArrive == "X")
            {
                flightArrive = storeFlightArrive;
            }

            cout << "Enter User Flight Available (A/U) (X to not change): ";
            getline(cin, flightAvailable);
            if (flightAvailable == "X")
            {
                flightAvailable = storeFlightAvailable;
            }

            string update_query = "update flightdetails_tb set f_leave = '"+flightLeave+"', f_arrive = '"+flightArrive+"', f_available = '"+flightAvailable+"' where f_id = '"+strid+"'";
            const char* qu = update_query.c_str();
            qstate = mysql_query(conn, qu);

            if (!qstate)
            {
                cout << endl << "Successfully Saved In Database." << endl;
            }
            else
            {
                cout << "Failed To Update!" << mysql_errno(conn) << endl;
            }

        }
        else
        {
            cout << "Item Not Found in database." << endl;
        }
    }

    ExitMenu:
    cout << "Press 'm' to Flight Details Menu, 'e' to edit another item and any other key to Exit: ";
    cin >> choose;
    if (choose == 'm' || choose == 'M')
    {
        FlightDetails();
    }
    else if (choose == 'e' || choose == 'E')
    {
        FlightLeaveArrive();
    }
    else
    {
        exit(0);
    }
}



