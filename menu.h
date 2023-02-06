#include <bits/stdc++.h>
using namespace std;

enum WEEK
{
    SUN,
    MON,
    TUE,
    WED,
    THR,
    FRI,
    SAT
};
enum FoodTime
{
    Breakfast,
    Lunch,
    Snacks,
    Dinner
};

vector<vector<string>> menu;

void createMenu()
{
    for (int i = SUN; i <= SAT; i++)
    {
        vector<string> vec;
        menu.push_back(vec);
    }
    menu[SUN].push_back("Sprouts, Aloo Paratha, Chutney, Tea");
    menu[SUN].push_back("Rice, Dal, Sabji, Soyabean, Nimbu");
    menu[SUN].push_back("Tea, Bread Pakoda");
    menu[SUN].push_back("Pulao, Dal, Chicken, Chilli Chicken");
    menu[MON].push_back("Sprouts, Sattu Paratha");
    menu[MON].push_back("Rice, Lemon Rice, Aloo Choka, veg Curry, Papad");
    menu[MON].push_back("Tea, Pasta");
    menu[MON].push_back("Roti, Rice, Dal, Egg Curry, Chola Malasa");
    menu[TUE].push_back("Sprouts, Veg Burger, Milk");
    menu[TUE].push_back("Rice, Roti, Dal, Veg Curry, Papad");
    menu[TUE].push_back("Tea, Poha");
    menu[TUE].push_back("Roti, Rice, Dal, Sabji, Chicken, Paneer");
    menu[WED].push_back("Sprouts, Chola Batura, Tea");
    menu[WED].push_back("Rice, Dal, Roti, Sabji, Kadi Pakoda, Salad");
    menu[WED].push_back("Tea, Veg Chow");
    menu[WED].push_back("Roti, Rice Dal, Aloo Chips, Garlic Chicken, Matar Paneer");
    menu[THR].push_back("Sprouts, Idli, Sambhar, Milk");
    menu[THR].push_back("Rice, Dal, Roti, Pumpkin besan fry, Mixed Veg Curry");
    menu[THR].push_back("Tea, Small Wada");
    menu[THR].push_back("Roti, Dal Makhni, Rice, Shahi Paneer");
    menu[FRI].push_back("Sprouts, Puri, Aloo Matar, Tea");
    menu[FRI].push_back("Rice, Dal, Roti, Sabji, Rajma, Nimbu");
    menu[FRI].push_back("Tea, Samosa");
    menu[FRI].push_back("Roti, Chicken Biryani, Matar Paneer, Papad");
    menu[SAT].push_back("Sprouts, Uttapam, Chutney, Tea");
    menu[SAT].push_back("Rice, Dal, Roti, French Fries, Khichdi, Dahi, Mixed Veg Curry");
    menu[SAT].push_back("Tea, Chat");
    menu[SAT].push_back("Rice, Dal, Roti, Fish Curry, Mushroom Butter Masala, Kheer");
}