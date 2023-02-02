#include <iostream>
#include <conio.h>
#include <windows.h>
#include "print.h"
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include "startmenu.h"
#include "shop.h"
#include <fstream>
#include <vector>
#include"string"
#include <map>
#include <iomanip>
//#include "audiere.h"
//#include <MMSystem.h>
using namespace std;

#pragma warning(disable : 4996)

class CC
{
public:

	vector<string> CCNum;
	vector<string> Type;
	vector<int> Balance;
	//�������
	vector<string> Time;
	vector<string> CCNumT;
	vector<int>BalanceT;
	vector<string> purp;

	CC(string a, string b, int c)
	{
		CCNum.push_back(a);
		Type.push_back(b);
		Balance.push_back(c);
	}
	void AddCard(string a, string b, int c)
	{
		CCNum.push_back(a);
		Type.push_back(b);
		Balance.push_back(c);
	}
	void AddCharge(string b, int c, string purp_)
	{
		time_t rawtime;
		struct tm* timeinfo;
		time(&rawtime);                         // ������� ����, ���������� � ��������
		timeinfo = localtime(&rawtime);
		string a = asctime(timeinfo);
		Time.push_back(a);
		CCNumT.push_back(b);
        BalanceT.push_back(c);
		purp.push_back(purp_);
	}
	void ShowAllCharges()
	{
		cout << endl;
	
		printYellowEndl("                                                  ������� ����������");
		vector<string> Time2;
		vector<string> CCNumT2;
		vector<int>BalanceT2;
		vector<string> purp2;
		for (size_t i = 0; i < this->CCNumT.size(); i++)
		{
			Time2.push_back(Time[i]);
			CCNumT2.push_back(CCNumT[i]);
			BalanceT2.push_back(BalanceT[i]);
			purp2.push_back(purp[i]);

		}
		cout << endl;
		for (size_t i = 0; i < this->CCNumT.size(); i++)
		{
			cout << "                   ������ �����: "; printBlue(CCNumT[i]); 
			if (BalanceT[i] > 0)
			{
				cout << " �����: "; printGreen(BalanceT[i]);  cout << " ����������: "; printYellow(purp[i]); cout << " �����: "; printBlue(Time[i]);
			}
			if (BalanceT[i] <= 0)
			{
				cout << " �����: "; printRed(BalanceT[i]);  cout << " ����������: "; printYellow(purp[i]); cout << " �����: "; printBlue(Time[i]);
			}
			cout << endl;
			

		}
		/*vector<string> Time;
		vector<string> CCNumT;
		vector<int>BalanceT;
		vector<string> purp;*/
			printYellowEndl("                                                     ���-3 ������:");
			cout << endl;
			int tempBaLANCE;
			string tempTime;
			string tempCCNumT;
			string tempPurp;
			for (int i = 0; i < CCNumT2.size(); i++) {
				for (int j = 0; j < CCNumT2.size() - i - 1; j++) {
					if (BalanceT2[j] > BalanceT2[j + 1]) {
						// ������ �������� �������
						tempBaLANCE = BalanceT2[j];
						tempTime = Time2[j];
						tempCCNumT = CCNumT2[j];
						tempPurp = purp2[j];

						BalanceT2[j] = BalanceT2[j + 1];
						BalanceT2[j + 1] = tempBaLANCE;
						Time2[j] = Time2[j + 1];
						Time2[j + 1] = tempTime;
						CCNumT2[j] = CCNumT2[j + 1];
						CCNumT2[j + 1] = tempCCNumT;
						purp2[j] = purp2[j + 1];
						purp2[j + 1] = tempPurp;
					}
				}
			}
			int ctr = 0;
			for (size_t i = 0; i < this->CCNumT.size(); i++)
				
			{
				
				if (ctr > 2)
				{
					break;
				}
				
				
				if (BalanceT2[i] < 0)
				{
					cout << "                   ������ �����: "; printBlue(CCNumT[i]); cout << " �����: "; printRed(BalanceT2[i]);  cout << " ����������: "; printYellow(purp2[i]); cout << " �����: "; printBlue(Time2[i]); cout << endl;
					ctr++;
				}

				
			}
			ctr = 0;
			cout << endl;
			printYellowEndl("                                                   ���-3 ���������:");
			cout << endl;
			/*printYellowEndl("                        =====================================================================");*/
			cout << "                        "; polosaBlue("====================================================================="); printGreen(" ");
			cout << endl;
			int perevod = 0; int komun = 0; int eda = 0; int odejda = 0; int tehn = 0; int blag = 0;
			string tempp = "�������";
			string tempk = "����������";
			string tempe = "��������";
			string tempo = "������";
			string tempt = "�������";
			string tempb = "������ ���";
			for (size_t i = 0; i < this->CCNumT.size(); i++)
			{
				if (purp[i] == "�������")
				{
					if (BalanceT[i] < 0)
					{
						tempp = "�������";
						perevod += BalanceT[i];
					}
					
				}
				if (purp[i] == "����������")
				{
					if (BalanceT[i] < 0)
					{
					 tempk = "����������";
					komun += BalanceT[i];
					}
				}
				if (purp[i] == "��������")
				{
					if (BalanceT[i] < 0)
					{
					 tempe = "��������";
					eda += BalanceT[i];
					}
				}
				if (purp[i] == "������")
				{
					if (BalanceT[i] < 0)
					{
					 tempo = "������";
					odejda += BalanceT[i];
					}
				}
				if (purp[i] == "�������")
				{
					if (BalanceT[i] < 0)
					{
					 tempt = "�������";
					tehn += BalanceT[i];
					}
				}
				if (purp[i] == "������ ���")
				{
					if (BalanceT[i] < 0)
					{
					 tempb = "������ ���";
					blag += BalanceT[i];
					}



				}
			}
			
			map <int, string> stat_map;
			pair<int, string> element(perevod, tempp);
			stat_map.insert(element);
			pair<int, string> element2(komun, tempk);
			stat_map.insert(element2);
			pair<int, string> element3(eda, tempe);
			stat_map.insert(element3);
			pair<int, string> element4(odejda, tempo);
			stat_map.insert(element4);
			pair<int, string> element5(tehn, tempt);
			stat_map.insert(element5);
			pair<int, string> element6(blag, tempb);
			stat_map.insert(element6);

			map<int, string>::iterator iter = stat_map.begin();

			int lc = 0;
			for (; iter != stat_map.end(); iter++)
			{
				if (lc > 2)
				{
					break;
				}
				if (iter->first < 0)
				{
					cout << setw(43);  printYellow(iter->second); cout << setw(30);   if (iter->first <= 0) { printRedEndl(iter->first); }
					printYellowEndl("                        ====================================================================="); 
					lc++;
				}
				
			}
			perevod = komun = eda = odejda = tehn = blag = 0;
			lc = 0;

		}
	
	void ShowAllCC()
	{

		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		printYellowEndl("                                   �������� ���������� �� ������");
		cout << endl;
		for (size_t i = 0; i < this->CCNum.size(); i++)
		{
			cout << "                            ������ �����: "; printBlue(CCNum[i]); cout << " ���: "; printBlue(Type[i]);cout << " ������: ";
			if (Balance[i] > 0)
			{
				printGreenEndl(Balance[i]);
			}
			if (Balance[i] <= 0)
			{
				printRedEndl(Balance[i]);
			}
			cout << endl;
			
		} 
		cout << "                            "; polosaRed("============================================");
		/*printYellow("                            ============================================");*/
		cout << endl;
		printRedEndl("                            *��������� ����� �� ������ Credit - 2000 UAH.");
	}
};

void FromCCtoCC(CC &card)
{
	string temp1, temp2;
	int am;
	card.ShowAllCC();
	cout << endl;
	printYellowEndl("� ����� ����� ��������� �������?");
	
	
	printYellow("-> "); cin >> temp1; cout << endl;
	int lc = 1;
	for (size_t i = 0; i < card.CCNum.size(); i++)
	{
		if (card.CCNum[i] == temp1)
		{
			lc--;
		}
	}
	if (lc == 1)
	{
		
		printRedEndl("                                     ����� �� �������.");
		PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
		lc = 1;
		_getch();
		return;

	}
	
	printYellowEndl("�� ����� �����?");
	/*cin.ignore();*/
	printYellow("-> "); cin >> temp2; cout << endl;
	if (temp1 == temp2)
	{
		printRedEndl("                                    ����� ���������.");
		PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
		_getch();
		return;
	}
	printYellowEndl("������� �����.");
	printYellow("-> "); cin >> am; cout << endl;
	if (am <= 0)
	{
		printRedEndl("                                    ������������ ����.");
		PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
		_getch();
		return;
	}
	for (size_t i = 0; i < card.CCNum.size(); i++)
	{
		if (card.CCNum[i] == temp1)
		{
			lc++;
			if (card.Type[i] == "Debit" && (card.Balance[i] - am) < 0)
			{
				printRedEndl("                                    ������������ �������.");
				PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
				_getch();
				return ;
			}
			if (card.Type[i] == "Credit" && (card.Balance[i] - am) < -2000)
			{
				printRedEndl("                                    ������������ �������.");
				PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
				_getch();
				return;
			}
			card.Balance[i] -= am;
			card.AddCharge(card.CCNum[i], -am, "�������");
		}
		if(card.CCNum[i] == temp2)
			if (card.CCNum[i] == temp2)
			{
				card.Balance[i] += am;
				card.AddCharge(card.CCNum[i], am, "�������");
			}
		
	}
	
	
	system("cls");
	card.ShowAllCC();
	PlaySound(TEXT("purchase.wav"), NULL, SND_ASYNC);
	cout << endl;
	printGreen("                                           ���������� �������.");
	_getch();
	system("cls");
}

void Shop(CC& card)
{
	system("cls");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	for (size_t i = 0; i < card.CCNum.size(); i++)
	{
		cout << "                                 ������ �����: "; printBlue(card.CCNum[i]); cout << " ���: "; printBlue(card.Type[i]); cout << " ������: ";
		if (card.Balance[i] > 0)
		{
			printGreenEndl(card.Balance[i]);
		}
		if (card.Balance[i] <= 0)
		{
			printRedEndl(card.Balance[i]);
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t"; printYellowEndl("       ������ �������");
	cout << endl;
	cout << "\t\t\t\t\t"; printGreen("-> ����������� �������"); cout << "\t\t\t"; printRed("3200 UAH"); cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t"; printYellow("   �������� �������� ���"); cout << "\t\t"; printRed("150 UAH"); cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t"; printYellow("   �������� �������� ������"); cout << "\t\t"; printRed("820 UAH"); cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t"; printYellow("   �������� ������� �������"); cout << "\t\t"; printRed("9800 UAH"); cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t"; printYellow("   ������ ���"); cout << "\t\t\t\t"; printRed("500 UAH"); cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t"; printYellow("           �����");


	int a = 1;

	int b = 1;
	while (a != 72 || a != 80)
	{

		system("cls");


		if (a == 72)
		{
			b--;
			if (b == 0)
			{
				b = 6;
				
			}
		}
		if (a == 80)
		{
			b++;
			if (b == 7)
			{
				b = 1;
				
			}
		}
		/*if (a == 13)
		{*/

			system("cls");
			if (b == 1)
			{
				system("cls");
				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				PlaySound(TEXT("button.wav"), NULL, SND_ASYNC);
				for (size_t i = 0; i < card.CCNum.size(); i++)
				{
					cout << "                                 ������ �����: "; printBlue(card.CCNum[i]); cout << " ���: "; printBlue(card.Type[i]); cout << " ������: ";
					if (card.Balance[i] > 0)
					{
						printGreenEndl(card.Balance[i]);
					}
					if (card.Balance[i] <= 0)
					{
						printRedEndl(card.Balance[i]);
					}
					cout << endl;
				}
				cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellowEndl("       ������ �������");
				cout << endl;
				cout << "\t\t\t\t\t"; printGreen("-> ����������� �������"); cout << "\t\t\t"; printRed("3200 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   �������� �������� ���"); cout << "\t\t"; printRed("150 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   �������� �������� ������"); cout << "\t\t"; printRed("820 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   �������� ������� �������"); cout << "\t\t"; printRed("9800 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   ������ ���"); cout << "\t\t\t\t"; printRed("500 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("           �����");
				a = _getch();
				string temp1;
				if (a == 13)///////////////////////////////////////////
				{
					cout << endl;
					printYellowEndl("� ����� ����� ��������� ������?");


					printYellow("-> "); cin >> temp1; cout << endl;
					int lc = 1;
					for (size_t i = 0; i < card.CCNum.size(); i++)
					{
						if (card.CCNum[i] == temp1)
						{
							lc--;
						}
					}
					if (lc == 1)
					{

						printRedEndl("                                           ����� �� �������.");
						PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
						lc = 1;
						_getch();
						return;

					}
					///////////////////////////////////
					for (size_t i = 0; i < card.CCNum.size(); i++)
					{
						if (card.CCNum[i] == temp1)
						{
							lc++;
							if (card.Type[i] == "Debit" && (card.Balance[i] - 3200) < 0)
							{
								printRedEndl("                                           ������������ �������.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							if (card.Type[i] == "Credit" && (card.Balance[i] - 3200) < -2000)
							{
								printRedEndl("                                            ������������ �������.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							card.Balance[i] -= 3200;
							card.AddCharge(card.CCNum[i], -3200, "����������");
							
							PlaySound(TEXT("purchase.wav"), NULL, SND_ASYNC);
							printGreen("                                           ���������� �������.");
								_getch();
						}
						

					}
				}

			}
			if (b == 2)
			{
				system("cls");
				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				PlaySound(TEXT("button.wav"), NULL, SND_ASYNC);
				for (size_t i = 0; i < card.CCNum.size(); i++)
				{
					cout << "                                 ������ �����: "; printBlue(card.CCNum[i]); cout << " ���: "; printBlue(card.Type[i]); cout << " ������: ";
					if (card.Balance[i] > 0)
					{
						printGreenEndl(card.Balance[i]);
					}
					if (card.Balance[i] <= 0)
					{
						printRedEndl(card.Balance[i]);
					}
					cout << endl;
				}
				cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellowEndl("       ������ �������");
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   ����������� �������"); cout << "\t\t\t"; printRed("3200 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printGreen("-> �������� �������� ���"); cout << "\t\t"; printRed("150 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   �������� �������� ������"); cout << "\t\t"; printRed("820 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   �������� ������� �������"); cout << "\t\t"; printRed("9800 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   ������ ���"); cout << "\t\t\t\t"; printRed("500 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("           �����");
				a = _getch();
				string temp1;
				if (a == 13)///////////////////////////////////////////
				{
					cout << endl;
					printYellowEndl("� ����� ����� ��������� ������?");


					printYellow("-> "); cin >> temp1; cout << endl;
					int lc = 1;
					for (size_t i = 0; i < card.CCNum.size(); i++)
					{
						if (card.CCNum[i] == temp1)
						{
							lc--;
						}
					}
					if (lc == 1)
					{

						printRedEndl("                                           ����� �� �������.");
						PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
						lc = 1;
						_getch();
						return;

					}
					///////////////////////////////////
					for (size_t i = 0; i < card.CCNum.size(); i++)
					{
						if (card.CCNum[i] == temp1)
						{
							lc++;
							if (card.Type[i] == "Debit" && (card.Balance[i] - 150) < 0)
							{
								printRedEndl("                                           ������������ �������.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							if (card.Type[i] == "Credit" && (card.Balance[i] - 150) < -2000)
							{
								printRedEndl("                                            ������������ �������.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							card.Balance[i] -= 150;
							card.AddCharge(card.CCNum[i], -150, "��������");

							PlaySound(TEXT("purchase.wav"), NULL, SND_ASYNC);
							printGreen("                                           ���������� �������.");
							_getch();
						}


					}
				}
			}
			if (b == 3)
			{
				system("cls");
				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				PlaySound(TEXT("button.wav"), NULL, SND_ASYNC);
				for (size_t i = 0; i < card.CCNum.size(); i++)
				{
					cout << "                                 ������ �����: "; printBlue(card.CCNum[i]); cout << " ���: "; printBlue(card.Type[i]); cout << " ������: ";
					if (card.Balance[i] > 0)
					{
						printGreenEndl(card.Balance[i]);
					}
					if (card.Balance[i] <= 0)
					{
						printRedEndl(card.Balance[i]);
					}
					cout << endl;
				}
				cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellowEndl("       ������ �������");
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   ����������� �������"); cout << "\t\t\t"; printRed("3200 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   �������� �������� ���"); cout << "\t\t"; printRed("150 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printGreen("-> �������� �������� ������"); cout << "\t\t"; printRed("820 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   �������� ������� �������"); cout << "\t\t"; printRed("9800 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   ������ ���"); cout << "\t\t\t\t"; printRed("500 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("           �����");
				a = _getch();
				string temp1;
				if (a == 13)///////////////////////////////////////////
				{
					cout << endl;
					printYellowEndl("� ����� ����� ��������� ������?");


					printYellow("-> "); cin >> temp1; cout << endl;
					int lc = 1;
					for (size_t i = 0; i < card.CCNum.size(); i++)
					{
						if (card.CCNum[i] == temp1)
						{
							lc--;
						}
					}
					if (lc == 1)
					{

						printRedEndl("                                           ����� �� �������.");
						PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
						lc = 1;
						_getch();
						return;

					}
					///////////////////////////////////
					for (size_t i = 0; i < card.CCNum.size(); i++)
					{
						if (card.CCNum[i] == temp1)
						{
							lc++;
							if (card.Type[i] == "Debit" && (card.Balance[i] - 820) < 0)
							{
								printRedEndl("                                           ������������ �������.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							if (card.Type[i] == "Credit" && (card.Balance[i] - 820) < -2000)
							{
								printRedEndl("                                            ������������ �������.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							card.Balance[i] -= 820;
							card.AddCharge(card.CCNum[i], -820, "������");

							PlaySound(TEXT("purchase.wav"), NULL, SND_ASYNC);
							printGreen("                                           ���������� �������.");
							_getch();
						}


					}
				}
			}
			if (b == 4)
			{
				system("cls");
				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				PlaySound(TEXT("button.wav"), NULL, SND_ASYNC);
				for (size_t i = 0; i < card.CCNum.size(); i++)
				{
					cout << "                                 ������ �����: "; printBlue(card.CCNum[i]); cout << " ���: "; printBlue(card.Type[i]); cout << " ������: ";
					if (card.Balance[i] > 0)
					{
						printGreenEndl(card.Balance[i]);
					}
					if (card.Balance[i] <= 0)
					{
						printRedEndl(card.Balance[i]);
					}
					cout << endl;
				}
				cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellowEndl("       ������ �������");
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   ����������� �������"); cout << "\t\t\t"; printRed("3200 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   �������� �������� ���"); cout << "\t\t"; printRed("150 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   �������� �������� ������"); cout << "\t\t"; printRed("820 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printGreen("-> �������� ������� �������"); cout << "\t\t"; printRed("9800 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   ������ ���"); cout << "\t\t\t\t"; printRed("500 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("           �����");
				a = _getch();
				string temp1;
				if (a == 13)///////////////////////////////////////////
				{
					cout << endl;
					printYellowEndl("� ����� ����� ��������� ������?");


					printYellow("-> "); cin >> temp1; cout << endl;
					int lc = 1;
					for (size_t i = 0; i < card.CCNum.size(); i++)
					{
						if (card.CCNum[i] == temp1)
						{
							lc--;
						}
					}
					if (lc == 1)
					{

						printRedEndl("                                           ����� �� �������.");
						PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
						lc = 1;
						_getch();
						return;

					}
					///////////////////////////////////
					for (size_t i = 0; i < card.CCNum.size(); i++)
					{
						if (card.CCNum[i] == temp1)
						{
							lc++;
							if (card.Type[i] == "Debit" && (card.Balance[i] - 9800) < 0)
							{
								printRedEndl("                                           ������������ �������.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							if (card.Type[i] == "Credit" && (card.Balance[i] - 9800) < -2000)
							{
								printRedEndl("                                            ������������ �������.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							card.Balance[i] -= 9800;
							card.AddCharge(card.CCNum[i], -9800, "�������");

							PlaySound(TEXT("purchase.wav"), NULL, SND_ASYNC);
							printGreen("                                           ���������� �������.");
							_getch();
						}


					}
				}
			}
			if (b == 5)
			{
				system("cls");
				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				PlaySound(TEXT("button.wav"), NULL, SND_ASYNC);
				for (size_t i = 0; i < card.CCNum.size(); i++)
				{
					cout << "                                 ������ �����: "; printBlue(card.CCNum[i]); cout << " ���: "; printBlue(card.Type[i]); cout << " ������: ";
					if (card.Balance[i] > 0)
					{
						printGreenEndl(card.Balance[i]);
					}
					if (card.Balance[i] <= 0)
					{
						printRedEndl(card.Balance[i]);
					}
					cout << endl;
				}
				cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellowEndl("       ������ �������");
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   ����������� �������"); cout << "\t\t\t"; printRed("3200 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   �������� �������� ���"); cout << "\t\t"; printRed("150 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   �������� �������� ������"); cout << "\t\t"; printRed("820 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   �������� ������� �������"); cout << "\t\t"; printRed("9800 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printGreen("-> ������ ���"); cout << "\t\t\t\t"; printRed("500 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("           �����");
				a = _getch();
				string temp1;
				if (a == 13)///////////////////////////////////////////
				{
					cout << endl;
					printYellowEndl("� ����� ����� ��������� ������?");


					printYellow("-> "); cin >> temp1; cout << endl;
					int lc = 1;
					for (size_t i = 0; i < card.CCNum.size(); i++)
					{
						if (card.CCNum[i] == temp1)
						{
							lc--;
						}
					}
					if (lc == 1)
					{

						printRedEndl("                                           ����� �� �������.");
						PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
						lc = 1;
						_getch();
						return;

					}
					///////////////////////////////////
					for (size_t i = 0; i < card.CCNum.size(); i++)
					{
						if (card.CCNum[i] == temp1)
						{
							lc++;
							if (card.Type[i] == "Debit" && (card.Balance[i] - 500) < 0)
							{
								printRedEndl("                                           ������������ �������.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							if (card.Type[i] == "Credit" && (card.Balance[i] - 500) < -2000)
							{
								printRedEndl("                                            ������������ �������.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							card.Balance[i] -= 500;
							card.AddCharge(card.CCNum[i], -500, "������ ���");

							PlaySound(TEXT("this.wav"), NULL, SND_ASYNC);
							printGreen("                                           ���������� �������.");
							_getch();
						}


					}
				}
				
			}
			if (b == 6)
			{
				system("cls");
				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				PlaySound(TEXT("button.wav"), NULL, SND_ASYNC);
				for (size_t i = 0; i < card.CCNum.size(); i++)
				{
					cout << "                                 ������ �����: "; printBlue(card.CCNum[i]); cout << " ���: "; printBlue(card.Type[i]); cout << " ������: ";
					if (card.Balance[i] > 0)
					{
						printGreenEndl(card.Balance[i]);
					}
					if (card.Balance[i] <= 0)
					{
						printRedEndl(card.Balance[i]);
					}
					cout << endl;
				}
				cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellowEndl("       ������ �������");
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   ����������� �������"); cout << "\t\t\t"; printRed("3200 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   �������� �������� ���"); cout << "\t\t"; printRed("150 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   �������� �������� ������"); cout << "\t\t"; printRed("820 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   �������� ������� �������"); cout << "\t\t"; printRed("9800 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   ������ ���"); cout << "\t\t\t\t"; printRed("500 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printGreen("        -> �����");

				a = _getch();
				if (a == 13)
				{
					break;
				}

			}


	}

}
#pragma warning(disable  : 4996)
int MainMenu(int a)
{
	if (a == 1)
	{
		

		
	
	/*	PlaySound(TEXT("add.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
		PlaySound(TEXT("button.wav"),NULL, SND_ASYNC);
		system("cls");
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "\t\t\t\t\t"; printYellowEndl("       ���� ������ 24");
		cout << endl;
		cout << "\t\t\t\t\t"; printGreenEndl("-> �������� ���������� �� ������");
		cout << "\t\t\t\t\t"; printYellowEndl("   ������� � ����� �� �����");
		cout << "\t\t\t\t\t"; printYellowEndl("   ��������� �������� �������");
		cout << "\t\t\t\t\t"; printYellowEndl("   ������� ����������");
		return 1;
	}
	if (a == 2)
	{
		system("cls");
		PlaySound(TEXT("button.wav"), NULL, SND_ASYNC);
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "\t\t\t\t\t"; printYellowEndl("       ���� ������ 24");
		cout << endl;
		cout << "\t\t\t\t\t"; printYellowEndl("   �������� ���������� �� ������");
		cout << "\t\t\t\t\t"; printGreenEndl("-> ������� � ����� �� �����");
		cout << "\t\t\t\t\t"; printYellowEndl("   ��������� �������� �������");
		cout << "\t\t\t\t\t"; printYellowEndl("   ������� ����������");
		return 2;
	}
	if (a == 3)
	{
		system("cls");
		PlaySound(TEXT("button.wav"), NULL, SND_ASYNC);
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "\t\t\t\t\t"; printYellowEndl("       ���� ������ 24");
		cout << endl;
		cout << "\t\t\t\t\t"; printYellowEndl("   �������� ���������� �� ������");
		cout << "\t\t\t\t\t"; printYellowEndl("   ������� � ����� �� �����");
		cout << "\t\t\t\t\t"; printGreenEndl("-> ��������� �������� �������");
		cout << "\t\t\t\t\t"; printYellowEndl("   ������� ����������");
		return 3;
	}
	if (a == 4)
	{
		system("cls");
		PlaySound(TEXT("button.wav"), NULL, SND_ASYNC);
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "\t\t\t\t\t"; printYellowEndl("       ���� ������ 24");
		cout << endl;
		cout << "\t\t\t\t\t"; printYellowEndl("   �������� ���������� �� ������");
		cout << "\t\t\t\t\t"; printYellowEndl("   ������� � ����� �� �����");
		cout << "\t\t\t\t\t"; printYellowEndl("   ��������� �������� �������");
		cout << "\t\t\t\t\t"; printGreenEndl("-> ������� ����������");
		return 4;
	}
}
void MainMenu2(CC card)
{
	system("cls");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t"; printYellowEndl("       ���� ������ 24");
	cout << endl;
	cout << "\t\t\t\t\t"; printGreenEndl("-> �������� ���������� �� ������");
	cout << "\t\t\t\t\t"; printYellowEndl("   ������� � ����� �� �����");
	cout << "\t\t\t\t\t"; printYellowEndl("   ��������� �������� �������");
	cout << "\t\t\t\t\t"; printYellowEndl("   ������� ����������");


	int a = getch();

	int b = 1;
	while (a != 72 || a != 80)
	{

		system("cls");


		if (a == 72)
		{
			b--;
			if (b == 0)
			{
				b = 4;
			}
		}
		if (a == 80)
		{
			b++;
			if (b == 5)
			{
				b = 1;
			}
		}
		if (a == 13)
		{
			
			system("cls");
			if (b == 1)
			{
				/*cout << "�������� ���������� �� ������" << endl;*/
				card.ShowAllCC();
				
				_getch();
			}
			if (b == 2)
			{
				/*cout << "������� � ����� �� �����" << endl;*/
				
				FromCCtoCC(card);
				
				
			}
			if (b == 3)
			{
				/*cout << "��������� �������� �������" << endl;*/
				Shop(card);
			}
			if (b == 4)
			{
				/*cout << "������� ����������" << endl;*/
				card.ShowAllCharges();
				_getch();
			}
			
		}
		MainMenu(b);
		a = getch();
	}
}


int main()
{
	
   

	CC Cards("4485", "Credit", 1900);
	Cards.AddCard("1877", "Debit", 37595);
	Cards.AddCard("5877", "Credit", -1200);
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	startmenu();
	MainMenu2(Cards);

	
		
	
		

}