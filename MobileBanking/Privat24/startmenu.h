#pragma once
#include <iostream>
#include <fstream>
using namespace std;
HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
void greenline(string x)
{
	SetConsoleTextAttribute(hConsoleHandle, FOREGROUND_GREEN | BACKGROUND_GREEN);
	cout << x;
	SetConsoleTextAttribute(hConsoleHandle, 0000 | 0000);
}
void greenlineEndl(string x)
{
	SetConsoleTextAttribute(hConsoleHandle, FOREGROUND_GREEN | BACKGROUND_GREEN);
	cout << x << endl;
	SetConsoleTextAttribute(hConsoleHandle, 0000 | 0000);
}
void greenline2(string x)
{
	SetConsoleTextAttribute(hConsoleHandle, 0x8 | 0x80);
	cout << x;
	SetConsoleTextAttribute(hConsoleHandle, 0000 | 0000);
}
void greenline2Endl(string x)
{
	SetConsoleTextAttribute(hConsoleHandle, 0x8 | 0x80);
	cout << x << endl;
	SetConsoleTextAttribute(hConsoleHandle, 0000 | 0000);
}
void startmenu()
{
	

	
	
	
	
	
	
	PlaySound(TEXT("do.wav"), NULL, SND_ASYNC);
	int sl = 35;  //35
	system("cls");
	cout << endl;
	cout << endl;
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##");
	greenlineEndl("##"); printGreen(" ");
	 Sleep(sl);
	
	system("cls");
	cout << endl;
	cout << endl;
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####");
	greenlineEndl("####"); printGreen(" ");
	Sleep(sl);
	system("cls");
	cout << endl;
	cout << endl;
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######");
	greenlineEndl("######"); printGreen(" ");
	Sleep(sl);
	system("cls");
	cout << endl;
	cout << endl;
	greenlineEndl("########");
	greenlineEndl("########");
	greenlineEndl("########");
	 greenlineEndl("########");
	 greenlineEndl("########");
	greenlineEndl("########");
	 greenlineEndl("########");
	 greenlineEndl("########");
	 greenlineEndl("########");
	 greenlineEndl("########");
	 greenlineEndl("########");
	 greenlineEndl("########");
	 greenlineEndl("########");
	 greenlineEndl("########");
	 greenlineEndl("########");
	 greenlineEndl("########");
	greenlineEndl("########");
	greenlineEndl("########");
	greenlineEndl("########"); printGreen(" ");
	Sleep(sl);
	
	system("cls");
	cout << endl;
	cout << endl;
	greenlineEndl("##########");
	greenlineEndl("##########");
	greenlineEndl("##########");
	cout << "  "; greenlineEndl("########");
	cout << "  "; greenlineEndl("########");
	cout << "  "; greenlineEndl("########");
	cout << "  "; greenlineEndl("########");
	cout << "  "; greenlineEndl("########");
	cout << "  "; greenlineEndl("########");
	cout << "  "; greenlineEndl("########");
	cout << "  "; greenlineEndl("########");
	cout << "  "; greenlineEndl("########");
	cout << "  "; greenlineEndl("########");
	cout << "  "; greenlineEndl("########");
	cout << "  "; greenlineEndl("########");
	cout << "  "; greenlineEndl("########");
	greenlineEndl("##########");
	greenlineEndl("##########");
	greenlineEndl("##########"); printGreen(" ");
	
	
	Sleep(sl);
	system("cls"); //12
	cout << endl;
	cout << endl;
	greenlineEndl("############");
	greenlineEndl("############");
	greenlineEndl("############");
	cout << "    "; greenlineEndl("########");
	cout << "    "; greenlineEndl("########");
	cout << "    "; greenlineEndl("########");
	cout << "    "; greenlineEndl("########");
	cout << "    "; greenlineEndl("########");
	cout << "    "; greenlineEndl("########");
	cout << "    "; greenlineEndl("########");
	cout << "    "; greenlineEndl("########");
	 cout << "    "; greenlineEndl("########");
	 cout << "    "; greenlineEndl("########");
	 cout << "    "; greenlineEndl("########");
	 cout << "    "; greenlineEndl("########");
	 cout << "    "; greenlineEndl("########");
	greenlineEndl("############");
	greenlineEndl("############");
	greenlineEndl("############"); printGreen(" ");
	Sleep(sl);
	system("cls"); //14
	cout << endl;
	cout << endl;
	greenlineEndl("##############");
	greenlineEndl("##############");
	greenlineEndl("##############");
	cout << "      "; greenlineEndl("########");
	cout << "      "; greenlineEndl("########");
	cout << "      "; greenlineEndl("########");
	cout << "      "; greenlineEndl("########");
	cout << "      "; greenlineEndl("########");
	cout << "      "; greenlineEndl("########");
	cout << "      "; greenlineEndl("########");
	 cout << "      "; greenlineEndl("########");
	greenline("#"); cout << "     "; greenlineEndl("########");
	greenline("#"); cout << "     "; greenlineEndl("########");
	greenline("#"); cout << "     "; greenlineEndl("########");
	greenline("#"); cout << "     "; greenlineEndl("########");
	greenline("#"); cout << "     "; greenlineEndl("########");
	greenlineEndl("##############");
	greenlineEndl("##############");
	greenlineEndl("##############"); printGreen(" ");
	Sleep(sl);
	system("cls"); //16
	cout << endl;
	cout << endl;
	greenlineEndl("################");
	greenlineEndl("################");
	greenlineEndl("################");
	cout << "        "; greenlineEndl("########");
	cout << "        "; greenlineEndl("########");
	cout << "        "; greenlineEndl("########");
	cout << "        "; greenlineEndl("########");
	cout << "        "; greenlineEndl("########");
	cout << "        "; greenlineEndl("########");
	 cout << "        "; greenlineEndl("########");
	greenline("##"); cout << "      "; greenlineEndl("########");
	greenline("###"); cout << "     "; greenlineEndl("########");
	greenline("###"); cout << "     "; greenlineEndl("########");
	greenline("###"); cout << "     "; greenlineEndl("########");
	greenline("###"); cout << "     "; greenlineEndl("########");
	greenline("###"); cout << "     "; greenlineEndl("########");
	greenlineEndl("################");
	greenlineEndl("################");
	greenlineEndl("################"); printGreen(" ");
	Sleep(sl);
	system("cls"); //18
	cout << endl;
	cout << endl;
	greenlineEndl("##################");
	greenlineEndl("##################");
	greenlineEndl("##################");
	cout << "          "; greenlineEndl("########");
	cout << "          "; greenlineEndl("########");
	cout << "          "; greenlineEndl("########");
	cout << "          "; greenlineEndl("########");
	cout << "          "; greenlineEndl("########");
	 cout << "          "; greenlineEndl("########");
	greenline("##"); cout << "        "; greenlineEndl("########");
	greenline("####"); cout << "      "; greenlineEndl("########");
	greenline("#####"); cout << "     "; greenlineEndl("########");
	greenline("#####"); cout << "     "; greenlineEndl("########");
	greenline("#####"); cout << "     "; greenlineEndl("########");
	greenline("#####"); cout << "     "; greenlineEndl("########");
	greenline("#####"); cout << "     "; greenlineEndl("########");
	greenlineEndl("##################");
	greenlineEndl("##################");
	greenlineEndl("##################"); printGreen(" ");
	Sleep(sl);
	system("cls");//20
	cout << endl;
	cout << endl;
	greenlineEndl("####################");
	greenlineEndl("####################");
	greenlineEndl("####################");
	cout << "            "; greenlineEndl("########");
	cout << "            "; greenlineEndl("########");
	cout << "            "; greenlineEndl("########");
	cout << "            "; greenlineEndl("########");
	cout << "            "; greenlineEndl("########");
	greenline("#"); cout << "           "; greenlineEndl("########");
	greenline("####"); cout << "        "; greenlineEndl("########");
	greenline("######"); cout << "      "; greenlineEndl("########");
	greenline("#######"); cout << "     "; greenlineEndl("########");
	 greenline("#######"); cout << "     "; greenlineEndl("########");
	 greenline("#######"); cout << "     "; greenlineEndl("########");
 greenline("#######"); cout << "     "; greenlineEndl("########");
	 greenline("#######"); cout << "     "; greenlineEndl("########");
	 greenlineEndl("####################");
	 greenlineEndl("####################");
	 greenlineEndl("####################"); printGreen(" ");
	Sleep(sl);
	system("cls");//22
	cout << endl;
	cout << endl;
	greenlineEndl("######################");
	greenlineEndl("######################");
	greenlineEndl("######################");
	cout << "              "; greenlineEndl("########");
	cout << "              "; greenlineEndl("########");
	cout << "              "; greenlineEndl("########");
	cout << "              "; greenlineEndl("########");
	 cout << "              "; greenlineEndl("########");
	greenline("###"); cout << "           "; greenlineEndl("########");
	greenline("######"); cout << "        "; greenlineEndl("########");
	greenline("########"); cout << "      "; greenlineEndl("########");
	 greenline("#########"); cout << "     "; greenlineEndl("########");
	cout << " "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << " "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << " "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << " "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << " "; greenlineEndl("#####################");
	cout << " "; greenlineEndl("#####################");
	cout << " "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");//24
	cout << endl;
	cout << endl;
	greenlineEndl("########################");
	greenlineEndl("########################");
	greenlineEndl("########################");
	cout << "                "; greenlineEndl("########");
	cout << "                "; greenlineEndl("########");
	cout << "                "; greenlineEndl("########");
	cout << "                "; greenlineEndl("########");
	greenline("##"); cout << "              "; greenlineEndl("########");
	greenline("#####"); cout << "           "; greenlineEndl("########");
	greenline("########"); cout << "        "; greenlineEndl("########");
	greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "  "; greenline("#########"); cout << "     "; greenlineEndl("########");
	cout << "   "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "   "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "   "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "   "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "   "; greenlineEndl("#####################");
	cout << "   "; greenlineEndl("#####################");
	cout << "   "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");//26
	cout << endl;
	cout << endl;
	greenlineEndl("##########################");
	greenlineEndl("##########################");
	greenlineEndl("##########################");
	cout << "                  "; greenlineEndl("########");
	cout << "                  "; greenlineEndl("########");
	cout << "                  "; greenlineEndl("########");
	greenline("#"); cout << "                 "; greenlineEndl("########");
	greenline("####"); cout << "              "; greenlineEndl("########");
	greenline("#######"); cout << "           "; greenlineEndl("########");
	greenline("##########"); cout << "        "; greenlineEndl("########");
	cout << "  "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "    "; greenline("#########"); cout << "     "; greenlineEndl("########");
    cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	 cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	 cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	 cout << "     "; greenlineEndl("#####################");
	 cout << "     "; greenlineEndl("#####################");
	 cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");//28
	cout << endl;
	cout << endl;
	greenlineEndl("############################");
	greenlineEndl("############################");
	greenlineEndl("############################");
	cout << "                    "; greenlineEndl("########");
	cout << "                    "; greenlineEndl("########");
	cout << "                    "; greenlineEndl("########");
	greenline("###"); cout << "                 "; greenlineEndl("########");
	greenline("######"); cout << "              "; greenlineEndl("########");
	greenline("#########"); cout << "           "; greenlineEndl("########");
	greenline("############"); cout << "        "; greenlineEndl("########");
	cout << "    "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "      "; greenline("#########"); cout << "     "; greenlineEndl("########");
	greenline2("##"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("##"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("##"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("##"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("##"); cout << "     "; greenlineEndl("#####################");
	greenline2("##"); cout << "     "; greenlineEndl("#####################");
	greenline2("##"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");//30
	cout << endl;
	cout << endl;
	greenlineEndl("##############################");
	greenlineEndl("##############################");
	greenlineEndl("##############################");
	cout << "                      "; greenlineEndl("########");
	cout << "                      "; greenlineEndl("########");
	cout << "                      "; greenlineEndl("########");
	greenline("#####"); cout << "                 "; greenlineEndl("########");
	greenline("########"); cout << "              "; greenlineEndl("########");
	greenline("###########"); cout << "           "; greenlineEndl("########");
	greenline("##############"); cout << "        "; greenlineEndl("########");
	cout << "      "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "        "; greenline("#########"); cout << "     "; greenlineEndl("########");
	greenline2("####"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("####"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("####"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("####"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("####"); cout << "     "; greenlineEndl("#####################");
	greenline2("####"); cout << "     "; greenlineEndl("#####################");
	greenline2("####"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");//32
	cout << endl;
	cout << endl;
	greenlineEndl("################################");
	greenlineEndl("################################");
	greenlineEndl("################################");
	 cout << "                        "; greenlineEndl("########");
	 cout << "                        "; greenlineEndl("########");
	 cout << "                        "; greenlineEndl("########");
	greenline("#######"); cout << "                 "; greenlineEndl("########");
	greenline("##########"); cout << "              "; greenlineEndl("########");
	greenline("#############"); cout << "           "; greenlineEndl("########");
	greenline("################"); cout << "        "; greenlineEndl("########");
	cout << "        "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "          "; greenline("#########"); cout << "     "; greenlineEndl("########");
	greenline2("######"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("######"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("######"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("######"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("######"); cout << "     "; greenlineEndl("#####################");
	greenline2("######"); cout << "     "; greenlineEndl("#####################");
	greenline2("######"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");//34
	cout << endl;
	cout << endl;
	greenlineEndl("##################################");
	greenlineEndl("##################################");
	greenlineEndl("##################################");
	greenline("##"); cout << "                        "; greenlineEndl("########");
	greenline("##"); cout << "                        "; greenlineEndl("########");
	greenline("##"); cout << "                        "; greenlineEndl("########");
	greenline("#########"); cout << "                 "; greenlineEndl("########");
	greenline("############"); cout << "              "; greenlineEndl("########");
	greenline("###############"); cout << "           "; greenlineEndl("########");
	greenline("##################"); cout << "        "; greenlineEndl("########");
	cout << "          "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "            "; greenline("#########"); cout << "     "; greenlineEndl("########");
	greenline2("########"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("########"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("########"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("########"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("########"); cout << "     "; greenlineEndl("#####################");
	greenline2("########"); cout << "     "; greenlineEndl("#####################");
	greenline2("########"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");//36
	cout << endl;
	cout << endl;
	greenlineEndl("####################################");
	greenlineEndl("####################################");
	greenlineEndl("####################################");
	greenline("####"); cout << "                        "; greenlineEndl("########");
	greenline("####"); cout << "                        "; greenlineEndl("########");
	greenline("####"); cout << "                        "; greenlineEndl("########");
	greenline("###########"); cout << "                 "; greenlineEndl("########");
	greenline("##############"); cout << "              "; greenlineEndl("########");
	greenline("#################"); cout << "           "; greenlineEndl("########");
	greenline("####################"); cout << "        "; greenlineEndl("########");
	cout << "            "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "              "; greenline("#########"); cout << "     "; greenlineEndl("########");
	greenline2("##########"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("##########"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("##########"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("##########"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("##########"); cout << "     "; greenlineEndl("#####################");
	greenline2("##########"); cout << "     "; greenlineEndl("#####################");
	greenline2("##########"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");//38
	cout << endl;
	cout << endl;
	greenlineEndl("######################################");
	greenlineEndl("######################################");
	greenlineEndl("######################################");
	greenline("######"); cout << "                        "; greenlineEndl("########");
	greenline("######"); cout << "                        "; greenlineEndl("########");
	greenline("######"); cout << "                        "; greenlineEndl("########");
	greenline("#############"); cout << "                 "; greenlineEndl("########");
	greenline("################"); cout << "              "; greenlineEndl("########");
	greenline("###################"); cout << "           "; greenlineEndl("########");
	greenline("######################"); cout << "        "; greenlineEndl("########");
	cout << "              "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "                "; greenline("#########"); cout << "     "; greenlineEndl("########");
	greenline2("############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	greenline2("############"); cout << "     "; greenlineEndl("#####################");
	greenline2("############"); cout << "     "; greenlineEndl("#####################");
	greenline2("############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");//40
	cout << endl;
	cout << endl;
	greenlineEndl("########################################");
    greenlineEndl("########################################");
	greenlineEndl("########################################");
	greenline("########"); cout << "                        "; greenlineEndl("########");
	greenline("########"); cout << "                        "; greenlineEndl("########");
	 greenline("########"); cout << "                        "; greenlineEndl("########");
	 greenline("###############"); cout << "                 "; greenlineEndl("########");
	 greenline("##################"); cout << "              "; greenlineEndl("########");
	 greenline("#####################"); cout << "           "; greenlineEndl("########");
	 greenline("########################"); cout << "        "; greenlineEndl("########");
	cout << "                "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "                  "; greenline("#########"); cout << "     "; greenlineEndl("########");
	 greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	 greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	 greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	 greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	 greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	 greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	 greenline2("##############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "  "; greenlineEndl("########################################");
	cout << "  "; greenlineEndl("########################################");
	cout << "  "; greenlineEndl("########################################");
	cout << "  "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "  "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "  "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "  "; greenline("###############"); cout << "                 "; greenlineEndl("########");
	cout << "  "; greenline("##################"); cout << "              "; greenlineEndl("########");
	cout << "  "; greenline("#####################"); cout << "           "; greenlineEndl("########");
	cout << "  "; greenline("########################"); cout << "        "; greenlineEndl("########");
	cout << "                  "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "                    "; greenline("#########"); cout << "     "; greenlineEndl("########");
	cout << "  "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "  "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "  "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "  "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "  "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "  "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "  "; greenline2("##############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "    "; greenlineEndl("########################################");
	cout << "    "; greenlineEndl("########################################");
	cout << "    "; greenlineEndl("########################################");
	cout << "    "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "    "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "    "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "    "; greenline("###############"); cout << "                 "; greenlineEndl("########");
	cout << "    "; greenline("##################"); cout << "              "; greenlineEndl("########");
	cout << "    "; greenline("#####################"); cout << "           "; greenlineEndl("########");
	cout << "    "; greenline("########################"); cout << "        "; greenlineEndl("########");
	cout << "                    "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "                      "; greenline("#########"); cout << "     "; greenlineEndl("########");
	cout << "    "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "    "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "    "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "    "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "    "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "    "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "    "; greenline2("##############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "      "; greenlineEndl("########################################");
	cout << "      "; greenlineEndl("########################################");
	cout << "      "; greenlineEndl("########################################");
	cout << "      "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "      "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "      "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "      "; greenline("###############"); cout << "                 "; greenlineEndl("########");
	cout << "      "; greenline("##################"); cout << "              "; greenlineEndl("########");
	cout << "      "; greenline("#####################"); cout << "           "; greenlineEndl("########");
	cout << "      "; greenline("########################"); cout << "        "; greenlineEndl("########");
	cout << "                      "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "                        "; greenline("#########"); cout << "     "; greenlineEndl("########");
	cout << "      "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "      "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "      "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "      "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "      "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "      "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "      "; greenline2("##############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "        "; greenlineEndl("########################################");
	cout << "        "; greenlineEndl("########################################");
	cout << "        "; greenlineEndl("########################################");
	cout << "        "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "        "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "        "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "        "; greenline("###############"); cout << "                 "; greenlineEndl("########");
	cout << "        "; greenline("##################"); cout << "              "; greenlineEndl("########");
	cout << "        "; greenline("#####################"); cout << "           "; greenlineEndl("########");
	cout << "        "; greenline("########################"); cout << "        "; greenlineEndl("########");
	cout << "                        "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "                          "; greenline("#########"); cout << "     "; greenlineEndl("########");
	cout << "        "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "        "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "        "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "        "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "        "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "        "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "        "; greenline2("##############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "          "; greenlineEndl("########################################");
	cout << "          "; greenlineEndl("########################################");
	cout << "          "; greenlineEndl("########################################");
	cout << "          "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "          "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "          "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "          "; greenline("###############"); cout << "                 "; greenlineEndl("########");
	cout << "          "; greenline("##################"); cout << "              "; greenlineEndl("########");
	cout << "          "; greenline("#####################"); cout << "           "; greenlineEndl("########");
	cout << "          "; greenline("########################"); cout << "        "; greenlineEndl("########");
	cout << "                          "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "                            "; greenline("#########"); cout << "     "; greenlineEndl("########");
	cout << "          "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "          "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "          "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "          "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "          "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "          "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "          "; greenline2("##############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "            "; greenlineEndl("########################################");
	cout << "            "; greenlineEndl("########################################");
	cout << "            "; greenlineEndl("########################################");
	cout << "            "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "            "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "            "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "            "; greenline("###############"); cout << "                 "; greenlineEndl("########");
	cout << "            "; greenline("##################"); cout << "              "; greenlineEndl("########");
	cout << "            "; greenline("#####################"); cout << "           "; greenlineEndl("########");
	cout << "            "; greenline("########################"); cout << "        "; greenlineEndl("########");
	cout << "                            "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "                              "; greenline("#########"); cout << "     "; greenlineEndl("########");
	cout << "            "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "            "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "            "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "            "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "            "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "            "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "            "; greenline2("##############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "              "; greenlineEndl("########################################");
	cout << "              "; greenlineEndl("########################################");
	cout << "              "; greenlineEndl("########################################");
	cout << "              "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "              "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "              "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "              "; greenline("###############"); cout << "                 "; greenlineEndl("########");
	cout << "              "; greenline("##################"); cout << "              "; greenlineEndl("########");
	cout << "              "; greenline("#####################"); cout << "           "; greenlineEndl("########");
	cout << "              "; greenline("########################"); cout << "        "; greenlineEndl("########");
	cout << "                              "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "                                "; greenline("#########"); cout << "     "; greenlineEndl("########");
	cout << "              "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "              "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "              "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "              "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "              "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "              "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "              "; greenline2("##############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "                "; greenlineEndl("########################################");
	cout << "                "; greenlineEndl("########################################");
	cout << "                "; greenlineEndl("########################################");
	cout << "                "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                "; greenline("###############"); cout << "                 "; greenlineEndl("########");
	cout << "                "; greenline("##################"); cout << "              "; greenlineEndl("########");
	cout << "                "; greenline("#####################"); cout << "           "; greenlineEndl("########");
	cout << "                "; greenline("########################"); cout << "        "; greenlineEndl("########");
	cout << "                                "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "                                  "; greenline("#########"); cout << "     "; greenlineEndl("########");
	cout << "                "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "                "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "                "; greenline2("##############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "                  "; greenlineEndl("########################################");
	cout << "                  "; greenlineEndl("########################################");
	cout << "                  "; greenlineEndl("########################################");
	cout << "                  "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                  "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                  "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                  "; greenline("###############"); cout << "                 "; greenlineEndl("########");
	cout << "                  "; greenline("##################"); cout << "              "; greenlineEndl("########");
	cout << "                  "; greenline("#####################"); cout << "           "; greenlineEndl("########");
	cout << "                  "; greenline("########################"); cout << "        "; greenlineEndl("########");
	cout << "                                  "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "                                    "; greenline("#########"); cout << "     "; greenlineEndl("########");
	cout << "                  "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                  "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                  "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                  "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                  "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "                  "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "                  "; greenline2("##############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "                    "; greenlineEndl("########################################");
	cout << "                    "; greenlineEndl("########################################");
	cout << "                    "; greenlineEndl("########################################");
	cout << "                    "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                    "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                    "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                    "; greenline("###############"); cout << "                 "; greenlineEndl("########");
	cout << "                    "; greenline("##################"); cout << "              "; greenlineEndl("########");
	cout << "                    "; greenline("#####################"); cout << "           "; greenlineEndl("########");
	cout << "                    "; greenline("########################"); cout << "        "; greenlineEndl("########");
	cout << "                                    "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "                                      "; greenline("#########"); cout << "     "; greenlineEndl("########");
	cout << "                    "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                    "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                    "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                    "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                    "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "                    "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "                    "; greenline2("##############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	Sleep(sl);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "                      "; greenlineEndl("########################################");
	cout << "                      "; greenlineEndl("########################################");
	cout << "                      "; greenlineEndl("########################################");
	cout << "                      "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                      "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                      "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                      "; greenline("###############"); cout << "                 "; greenlineEndl("########");
	cout << "                      "; greenline("##################"); cout << "              "; greenlineEndl("########");
	cout << "                      "; greenline("#####################"); cout << "           "; greenlineEndl("########");
	cout << "                      "; greenline("########################"); cout << "        "; greenlineEndl("########");
	cout << "                                      "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "                                        "; greenline("#########"); cout << "     "; greenlineEndl("########");
	cout << "                      "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                      "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                      "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                      "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                      "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "                      "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "                      "; greenline2("##############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	cout << endl;
	
	Sleep(sl);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "                        "; greenlineEndl("########################################");
	cout << "                        "; greenlineEndl("########################################");
	cout << "                        "; greenlineEndl("########################################");
	cout << "                        "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                        "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                        "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                        "; greenline("###############"); cout << "                 "; greenlineEndl("########");
	cout << "                        "; greenline("##################"); cout << "              "; greenlineEndl("########");
	cout << "                        "; greenline("#####################"); cout << "           "; greenlineEndl("########");
	cout << "                        "; greenline("########################"); cout << "        "; greenlineEndl("########");
	cout << "                                        "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "                                          "; greenline("#########"); cout << "     "; greenlineEndl("########");
	cout << "                        "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                        "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                        "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                        "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                        "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "                        "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "                        "; greenline2("##############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	cout << endl;

	Sleep(sl);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "                          "; greenlineEndl("########################################");
	cout << "                          "; greenlineEndl("########################################");
	cout << "                          "; greenlineEndl("########################################");
	cout << "                          "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                          "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                          "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                          "; greenline("###############"); cout << "                 "; greenlineEndl("########");
	cout << "                          "; greenline("##################"); cout << "              "; greenlineEndl("########");
	cout << "                          "; greenline("#####################"); cout << "           "; greenlineEndl("########");
	cout << "                          "; greenline("########################"); cout << "        "; greenlineEndl("########");
	cout << "                                          "; greenline("##########"); cout << "      "; greenlineEndl("########");
	cout << "                                            "; greenline("#########"); cout << "     "; greenlineEndl("########");
	cout << "                          "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                          "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                          "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                          "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
	cout << "                          "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "                          "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
	cout << "                          "; greenline2("##############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	cout << endl;

	Sleep(sl);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "                            "; greenlineEndl("########################################");
	cout << "                            "; greenlineEndl("########################################");
	cout << "                            "; greenlineEndl("########################################");
	cout << "                            "; greenline("########");cout<<"                        "; greenlineEndl("########");
	cout << "                            "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                            "; greenline("########"); cout << "                        "; greenlineEndl("########");
	cout << "                            "; greenline("###############"); cout << "                 "; greenlineEndl("########");
	cout << "                            "; greenline("##################"); cout << "              "; greenlineEndl("########");
		cout << "                            "; greenline("#####################"); cout << "           "; greenlineEndl("########");
		cout << "                            "; greenline("########################"); cout << "        "; greenlineEndl("########");
		cout << "                                            "; greenline("##########"); cout << "      "; greenlineEndl("########");
		cout << "                                              "; greenline("#########"); cout << "     "; greenlineEndl("########");
			cout << "                            "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
		cout << "                            "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
		cout << "                            "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
		cout << "                            "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
		cout << "                            "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
		cout << "                            "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
		cout << "                            "; greenline2("##############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
	cout << endl;
	Sleep(700);
	printGreen(" ");
	cout << "                               ƒл€ входа нажмите лбом на пробел...";
	_getch();
	string login, password;
	fstream fin;
	char ch;
	char buff[20];
	int localcounter = 0;
	string temp1;
	string temp2;
	
	for (int i = 0; i < 20; i++)
	{
		buff[i] = NULL;
	}
	int temp = 0;
	
	int c = 0;
	
	while (c == 0)
	{
		fin.open("pass.txt", ios::in);    ////////////// —„»“ј“№
		if (!fin) { perror("errorin"); exit(4); }
		
		system("cls");
		cout << endl;
		cout << endl;
		cout << "                            "; greenlineEndl("########################################");
		cout << "                            "; greenlineEndl("########################################");
		cout << "                            "; greenlineEndl("########################################");
		cout << "                            "; greenline("########"); cout << "                        "; greenlineEndl("########");
		cout << "                            "; greenline("########"); cout << "                        "; greenlineEndl("########");
		cout << "                            "; greenline("########"); cout << "                        "; greenlineEndl("########");
		cout << "                            "; greenline("###############"); cout << "                 "; greenlineEndl("########");
		cout << "                            "; greenline("##################"); cout << "              "; greenlineEndl("########");
		cout << "                            "; greenline("#####################"); cout << "           "; greenlineEndl("########");
		cout << "                            "; greenline("########################"); cout << "        "; greenlineEndl("########");
		cout << "                                            "; greenline("##########"); cout << "      "; greenlineEndl("########");
		cout << "                                              "; greenline("#########"); cout << "     "; greenlineEndl("########");
		cout << "                            "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
		cout << "                            "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
		cout << "                            "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
		cout << "                            "; greenline2("##############"); cout << "     "; greenline("########"); cout << "     "; greenlineEndl("########");
		cout << "                            "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
		cout << "                            "; greenline2("##############"); cout << "     "; greenlineEndl("#####################");
		cout << "                            "; greenline2("##############"); cout << "     "; greenlineEndl("#####################"); printGreen(" ");
		cout << endl;
		
		cout << "                               ¬ведите логин: "; cin >> login; cout << endl;
		cout << "                               ¬ведите пароль: "; cin >> password; cout << endl;
		while (fin.get(ch)) // до конца файла
		{
			
			if (ch != ' ' && ch != '\n')
			{



				buff[temp] = ch;
				



			}

			temp++;
			if (ch == ' ' || ch == '\n')
			{
				temp = 0;
				
				
				if (localcounter == 0)
				{
					temp1 = buff;
					for (int i = 0; i < 20; i++)
					{
						buff[i] = NULL;
					}
					

				}
				if (localcounter == 1)
				{
					temp2 = buff;
					for (int i = 0; i < 20; i++)
					{
						buff[i] = NULL;
					}
					localcounter--;
				
				}
				localcounter++;
				
				



			}

		}
		if (temp1 == login && temp2 == password)
		{
			cout << endl;
			printGreenEndl("                                        јвторизаци€ успешна.");
			c++;
			PlaySound(TEXT("ok.wav"), NULL, SND_ASYNC);
		}
		if (temp1 != login || temp2 != password)
		{
			cout << endl;
			printRedEndl("                                     Ќеверный логин или пароль.");
			PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
		}
		_getch();
		fin.close();
	}
	
	
	
}

