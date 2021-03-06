// Menu.cpp
// Created by cch on 2020/6/15.
#include "Menu.h"

#include <conio.h>
#include <windows.h>

#include <iostream>
#include <string>
using namespace std;

void Menu::cover() {
    system("cls");
    SYSTEMTIME st;
    GetLocalTime(&st);
    cout << "                     --------------------------------" << endl;
    cout << "                     |  C  C  H  影  城  欢  迎  您 |" << endl;
    cout << "                     --------------------------------" << endl;
    cout << "                    现在是北京时间 ";
    cout << st.wYear << "年" << st.wMonth << "月" << st.wDay << "日 ";
    cout << st.wHour << ":" << st.wMinute << endl;
    cout << R"(
     @@ 
   @@  @@         @@@@            
  @      @        @@ @@@@                             @@@@
  @       @        @@@    @@@                     @@@@ @@@
   @      @        @@@@@     @@               @@@@   @@O@@
   @      @         @@@@@       @@@@ @@@@ @@@@@    @@@OO@@
  @      @          @@@@                              oO@@
 @      @            @@@                                @@
 @     @             @                                    @
 @      @     @@@   @             @@@@        @@@@         @
 @@      @      @@@@@            @@@@@@      @@@@@@         @    @@@   
  @       @         @O@@@@       @@@@@@      @@@@@@         @ @@@
   @       @@      @@              @@          @@        @@@@
     @       @@ @@@@@@@@@@@@                         ooooooo@
      @@        @     @ @ @ oooooo                  ooooooooo@@@@@@@@
        @@             @@@ ooooooo                  ooooooo@@@
          @@o @     @@@  @@@@@ @@@                 oooo@@@@ @@@@@@@
             @@  @@@            @@@@@@@@       @@@@@               @@@
               @                        @@@@@@    @ 
               @                                  @
                @      @@@@@@@         @@@@O       @
                @      @      @@@@     @@   @@OO    @
                 @@    @          @@    @      @     @
                   @  @@           @@   @       @     @
                    @@@             @    @        @@   @
                                      @  @          @@@
                                       @@
)";
    cout << endl;
    cout << "------------------------------任-意-键-进-入----------------------"
            "--------"
         << endl;
    getch();
}

void Menu::mainMenu() {
    system("cls");
    std::string str = R"( 
           ----------
           | 主菜单 |
           ----------
________________________________
|          1. 电影查询         |
|          2. 登    陆         |
|          3. 注    册         |
|          0. 退    出         |
|______________________________|)";
    cout << str;
    cout << "\n\n请选择操作：";
}

void Menu::userMenu() {
    system("cls");
    std::string str = R"(
           ----------
           | 功  能 |
           ----------
________________________________
|           1. 订  票          |
|           2. 退  票          |
|           0. 退  出          |
|______________________________|)";
    cout << str;
    cout << "\n\n请选择操作：";
}

void Menu::adminMenu() {
    system("cls");
    std::string str = R"( 
           ----------
           | 管  理 |
           ----------
________________________________
|           1. 显  示          |
|           2. 录  入          |
|           3. 修  改          |
|           4. 删  除          |
|           5. 统  计          |
|           0. 退  出          |
|______________________________|)";
    cout << str;
    cout << "\n\n请选择操作：";
}