#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
#include "menu.h"

using namespace std;

class Menu
{
public:
    void showMenu()
    {
        int opt;
        system("cls");
        createMenu();
        do
        {
            // system("cls");
            cout << endl;
            cout << "Which day of menu do you want to see" << endl;
            cout << "\n0. SUN";
            cout << "\n1. MON";
            cout << "\n2. TUE";
            cout << "\n3. WED";
            cout << "\n4. THRU";
            cout << "\n5. FRI";
            cout << "\n6. SAT";
            cout << "\n8. Clear Screen";
            cout << "\n9. Go back to main menu";
            cout << endl;
            cin >> opt;
            if (opt == 8)
            {
                system("cls");
            }
            else if (opt == 9)
            {
                break;
            }
            else
            {
                cout << "Breakfast :" << menu[opt][Breakfast] << endl;
                cout << "Lunch :" << menu[opt][Lunch] << endl;
                cout << "Snacks :" << menu[opt][Snacks] << endl;
                cout << "Dinner :" << menu[opt][Dinner] << endl;
                break;
            }
        } while (opt != 9);
    }
};

class details
{
public:
    string name, id;
    long long contact;
};

int total = 0;
details e[100];

class Students
{
    int count = 0;

public:
    int tempCapacity = 0;

    vector<long long> Mess_Fees;

    void addStudent()
    {
        int user = 1;
        for (int i = total; i < total + user; i++)
        {
            cout << "Enter data of Students " << i + 1 << endl
                 << endl;
            cout << "Enter Student name: ";
            cin >> e[i].name;

            cout << "Enter scholarID: ";
            cin >> e[i].id;

            cout << "Enter contact: ";
            cin >> e[i].contact;

            Mess_Fees.push_back(18500);
            count++;
            tempCapacity++;
        }

        total = total + user;

        for (int i = 0; i < 6; i++)
        {
            cout << ".";
            Sleep(100);
        }
        cout << "\n\t\tStudent is registered successfully";
        Sleep(1000);
        system("cls");
    }
    void showtudentData()
    {
        // system("cls");
        if (count == 0)
        {
            cout << "Sorry, no students to show !";
            return;
        }
        for (int i = 0; i < total; i++)
        {
            cout << "Name: " << e[i].name << endl;
            cout << "ID: " << e[i].id << endl;
            cout << "Contact: " << e[i].contact << endl;
            cout << endl;
        }
        // system("cls");
    }
    void del()
    {
        if (total != 0)
        {
            int press;
            cout << "Press 1 to delete specific record" << endl;
            cout << "Press 2 to delete full record" << endl;
            cin >> press;
            if (press == 1)
            {
                string id;
                cout << "Enter id of student which you want to delete" << endl;
                cin >> id;
                for (int i = 0; i < total; i++)
                {
                    if (e[i].id == id)
                    {
                        e[i].name = e[i + 1].name;
                        e[i].id = e[i + 1].id;
                        e[i].contact = e[i + 1].contact;
                        total--;
                        cout << "Your required record is deleted" << endl;
                        break;
                    }
                    if (i == total - 1)
                    {
                        cout << "No such record found" << endl;
                    }
                }
                Mess_Fees.erase(Mess_Fees.begin());
            }
            else if (press == 2)
            {
                total = 0;
                cout << "All record is deleted" << endl;
                Mess_Fees.clear();
            }
        }
    }
};

class MMC : public Students
{
    string ingredients;
    long long price, totalPrice = 0;
    vector<string> meal;
    long long fund = 0;

public:
    void addIngredients()
    {
        if (Mess_Fees.size() == 0)
        {
            cout << "No funds available to purchase ingredients" << endl;
            return;
        }
        cout << "Enter the ingredients you want to add" << endl;
        cin >> ingredients;
        cout << "Enter the price of the ingredients" << endl;
        cin >> price;
        totalPrice += price;
        meal.push_back(ingredients);
        for (int i = 0; i < 6; i++)
        {
            cout << ".";
            Sleep(100);
        }
        cout << "\n\t\tIngredients added successfully";
        Sleep(1000);
        system("cls");
    }
    void showIngredients()
    {
        if (meal.size() == 0)
        {
            cout << "No ingredients added" << endl;
        }
        for (auto it : meal)
        {
            cout << it << " "
                 << ": Price --> " << price << endl;
        }
    }
    long long int showTotalFund()
    {

        fund = accumulate(Mess_Fees.begin(), Mess_Fees.end(), 0LL);
        return fund;
    }
    void showAvailableFund()
    {

        cout << fund - totalPrice << endl;
    }
};

// long long
class Mess : public MMC, public Menu
{
private:
    int capacity;

public:
    Mess()
    {
    }
    void setCapacity()
    {
        cout << "Set the total capacity of the mess !!" << endl;
        cin >> capacity;
        for (int i = 0; i < 6; i++)
        {
            cout << ".";
            Sleep(50);
        }
        cout << "\n\t\tSeats added !!";
        Sleep(1000);
        system("cls");
    }
    int totalSeatsAvailable()
    {
        int t = capacity - tempCapacity;
        if (t < 0)
        {
            cout << "No seats available" << endl;
        }
        else
        {
            return 2;
        }
    }
};

int main()
{
    cout << "\n\n\t\tMess Management System" << endl;

    system("cls");

    Mess m;

    system("cls");
    int opt;
    do
    {
        // system("cls");
        cout << endl;
        cout << "######## Mess Management #########\n";
        cout << endl;
        cout << "### Seatings information ###" << endl;
        cout << "\n1 Add Seat Capacity";
        cout << "\n2 Show total available seats" << endl;
        cout << endl;
        cout << "### Students Information ###" << endl;
        cout << "\n3. Add Student data";
        cout << "\n4. Show Student data";
        cout << "\n5. Delete Student data" << endl;
        cout << endl;
        cout << "### Mess Information ###" << endl;
        cout << "\n6. Add ingredients";
        cout << "\n7. Show ingredients";
        cout << "\n8. Show Total Fund";
        cout << "\n9. Show Total available fund";
        cout << "\n10. Show Menu";
        cout << "\n11. Clear Screen" << endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            m.setCapacity();
            break;
        case 2:
            cout << m.totalSeatsAvailable() << " Seats available" << endl;

            break;
        case 3:
            m.addStudent();
            break;
        case 4:
            m.showtudentData();
            break;
        case 5:
            m.del();
            break;
        case 6:
            m.addIngredients();
            break;
        case 7:
            m.showIngredients();
            break;
        case 8:
            cout << m.showTotalFund();
            break;
        case 9:
            m.showAvailableFund();
            break;
        case 10:
            m.showMenu();
            break;
        case 11:
            system("cls");
        default:
            cout << "\nPlease Enter correct option";
            break;
        }

    } while (opt != 12);

    return 0;
}
