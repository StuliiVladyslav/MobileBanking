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
	//История
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
		time(&rawtime);                         // текущая дата, выраженная в секундах
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
	
		printYellowEndl("                                                  История транзакций");
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
			cout << "                   Нормер карты: "; printBlue(CCNumT[i]); 
			if (BalanceT[i] > 0)
			{
				cout << " Сумма: "; printGreen(BalanceT[i]);  cout << " Назначение: "; printYellow(purp[i]); cout << " Время: "; printBlue(Time[i]);
			}
			if (BalanceT[i] <= 0)
			{
				cout << " Сумма: "; printRed(BalanceT[i]);  cout << " Назначение: "; printYellow(purp[i]); cout << " Время: "; printBlue(Time[i]);
			}
			cout << endl;
			

		}
		/*vector<string> Time;
		vector<string> CCNumT;
		vector<int>BalanceT;
		vector<string> purp;*/
			printYellowEndl("                                                     ТОП-3 затрат:");
			cout << endl;
			int tempBaLANCE;
			string tempTime;
			string tempCCNumT;
			string tempPurp;
			for (int i = 0; i < CCNumT2.size(); i++) {
				for (int j = 0; j < CCNumT2.size() - i - 1; j++) {
					if (BalanceT2[j] > BalanceT2[j + 1]) {
						// меняем элементы местами
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
					cout << "                   Нормер карты: "; printBlue(CCNumT[i]); cout << " Сумма: "; printRed(BalanceT2[i]);  cout << " Назначение: "; printYellow(purp2[i]); cout << " Время: "; printBlue(Time2[i]); cout << endl;
					ctr++;
				}

				
			}
			ctr = 0;
			cout << endl;
			printYellowEndl("                                                   ТОП-3 категорий:");
			cout << endl;
			/*printYellowEndl("                        =====================================================================");*/
			cout << "                        "; polosaBlue("====================================================================="); printGreen(" ");
			cout << endl;
			int perevod = 0; int komun = 0; int eda = 0; int odejda = 0; int tehn = 0; int blag = 0;
			string tempp = "Перевод";
			string tempk = "Коммуналка";
			string tempe = "Продукты";
			string tempo = "Одежда";
			string tempt = "Техника";
			string tempb = "Помощь ВСУ";
			for (size_t i = 0; i < this->CCNumT.size(); i++)
			{
				if (purp[i] == "Перевод")
				{
					if (BalanceT[i] < 0)
					{
						tempp = "Перевод";
						perevod += BalanceT[i];
					}
					
				}
				if (purp[i] == "Коммуналка")
				{
					if (BalanceT[i] < 0)
					{
					 tempk = "Коммуналка";
					komun += BalanceT[i];
					}
				}
				if (purp[i] == "Продукты")
				{
					if (BalanceT[i] < 0)
					{
					 tempe = "Продукты";
					eda += BalanceT[i];
					}
				}
				if (purp[i] == "Одежда")
				{
					if (BalanceT[i] < 0)
					{
					 tempo = "Одежда";
					odejda += BalanceT[i];
					}
				}
				if (purp[i] == "Техника")
				{
					if (BalanceT[i] < 0)
					{
					 tempt = "Техника";
					tehn += BalanceT[i];
					}
				}
				if (purp[i] == "Помощь ВСУ")
				{
					if (BalanceT[i] < 0)
					{
					 tempb = "Помощь ВСУ";
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
		printYellowEndl("                                   Основная информация по картам");
		cout << endl;
		for (size_t i = 0; i < this->CCNum.size(); i++)
		{
			cout << "                            Нормер карты: "; printBlue(CCNum[i]); cout << " Тип: "; printBlue(Type[i]);cout << " Баланс: ";
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
		printRedEndl("                            *Кредитный лимит на картах Credit - 2000 UAH.");
	}
};

void FromCCtoCC(CC &card)
{
	string temp1, temp2;
	int am;
	card.ShowAllCC();
	cout << endl;
	printYellowEndl("С какой карты совершить перевод?");
	
	
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
		
		printRedEndl("                                     Карта не найдена.");
		PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
		lc = 1;
		_getch();
		return;

	}
	
	printYellowEndl("На какую карту?");
	/*cin.ignore();*/
	printYellow("-> "); cin >> temp2; cout << endl;
	if (temp1 == temp2)
	{
		printRedEndl("                                    Карты совпадают.");
		PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
		_getch();
		return;
	}
	printYellowEndl("Введите сумму.");
	printYellow("-> "); cin >> am; cout << endl;
	if (am <= 0)
	{
		printRedEndl("                                    Некорректный ввод.");
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
				printRedEndl("                                    Недостаточно средств.");
				PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
				_getch();
				return ;
			}
			if (card.Type[i] == "Credit" && (card.Balance[i] - am) < -2000)
			{
				printRedEndl("                                    Недостаточно средств.");
				PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
				_getch();
				return;
			}
			card.Balance[i] -= am;
			card.AddCharge(card.CCNum[i], -am, "Перевод");
		}
		if(card.CCNum[i] == temp2)
			if (card.CCNum[i] == temp2)
			{
				card.Balance[i] += am;
				card.AddCharge(card.CCNum[i], am, "Перевод");
			}
		
	}
	
	
	system("cls");
	card.ShowAllCC();
	PlaySound(TEXT("purchase.wav"), NULL, SND_ASYNC);
	cout << endl;
	printGreen("                                           Транзакция успешна.");
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
		cout << "                                 Нормер карты: "; printBlue(card.CCNum[i]); cout << " Тип: "; printBlue(card.Type[i]); cout << " Баланс: ";
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
	cout << "\t\t\t\t\t"; printYellowEndl("       Онлайн покупки");
	cout << endl;
	cout << "\t\t\t\t\t"; printGreen("-> Комунальные платежи"); cout << "\t\t\t"; printRed("3200 UAH"); cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t"; printYellow("   Заказать доставку еды"); cout << "\t\t"; printRed("150 UAH"); cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t"; printYellow("   Заказать доставку одежды"); cout << "\t\t"; printRed("820 UAH"); cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t"; printYellow("   Заказать бытовую технику"); cout << "\t\t"; printRed("9800 UAH"); cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t"; printYellow("   Помощь ВСУ"); cout << "\t\t\t\t"; printRed("500 UAH"); cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t"; printYellow("           ВЫХОД");


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
					cout << "                                 Нормер карты: "; printBlue(card.CCNum[i]); cout << " Тип: "; printBlue(card.Type[i]); cout << " Баланс: ";
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
				cout << "\t\t\t\t\t"; printYellowEndl("       Онлайн покупки");
				cout << endl;
				cout << "\t\t\t\t\t"; printGreen("-> Комунальные платежи"); cout << "\t\t\t"; printRed("3200 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Заказать доставку еды"); cout << "\t\t"; printRed("150 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Заказать доставку одежды"); cout << "\t\t"; printRed("820 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Заказать бытовую технику"); cout << "\t\t"; printRed("9800 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Помощь ВСУ"); cout << "\t\t\t\t"; printRed("500 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("           ВЫХОД");
				a = _getch();
				string temp1;
				if (a == 13)///////////////////////////////////////////
				{
					cout << endl;
					printYellowEndl("С какой карты совершить плетеж?");


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

						printRedEndl("                                           Карта не найдена.");
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
								printRedEndl("                                           Недостаточно средств.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							if (card.Type[i] == "Credit" && (card.Balance[i] - 3200) < -2000)
							{
								printRedEndl("                                            Недостаточно средств.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							card.Balance[i] -= 3200;
							card.AddCharge(card.CCNum[i], -3200, "Коммуналка");
							
							PlaySound(TEXT("purchase.wav"), NULL, SND_ASYNC);
							printGreen("                                           Транзакция успешна.");
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
					cout << "                                 Нормер карты: "; printBlue(card.CCNum[i]); cout << " Тип: "; printBlue(card.Type[i]); cout << " Баланс: ";
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
				cout << "\t\t\t\t\t"; printYellowEndl("       Онлайн покупки");
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Комунальные платежи"); cout << "\t\t\t"; printRed("3200 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printGreen("-> Заказать доставку еды"); cout << "\t\t"; printRed("150 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Заказать доставку одежды"); cout << "\t\t"; printRed("820 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Заказать бытовую технику"); cout << "\t\t"; printRed("9800 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Помощь ВСУ"); cout << "\t\t\t\t"; printRed("500 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("           ВЫХОД");
				a = _getch();
				string temp1;
				if (a == 13)///////////////////////////////////////////
				{
					cout << endl;
					printYellowEndl("С какой карты совершить плетеж?");


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

						printRedEndl("                                           Карта не найдена.");
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
								printRedEndl("                                           Недостаточно средств.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							if (card.Type[i] == "Credit" && (card.Balance[i] - 150) < -2000)
							{
								printRedEndl("                                            Недостаточно средств.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							card.Balance[i] -= 150;
							card.AddCharge(card.CCNum[i], -150, "Продукты");

							PlaySound(TEXT("purchase.wav"), NULL, SND_ASYNC);
							printGreen("                                           Транзакция успешна.");
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
					cout << "                                 Нормер карты: "; printBlue(card.CCNum[i]); cout << " Тип: "; printBlue(card.Type[i]); cout << " Баланс: ";
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
				cout << "\t\t\t\t\t"; printYellowEndl("       Онлайн покупки");
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Комунальные платежи"); cout << "\t\t\t"; printRed("3200 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Заказать доставку еды"); cout << "\t\t"; printRed("150 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printGreen("-> Заказать доставку одежды"); cout << "\t\t"; printRed("820 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Заказать бытовую технику"); cout << "\t\t"; printRed("9800 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Помощь ВСУ"); cout << "\t\t\t\t"; printRed("500 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("           ВЫХОД");
				a = _getch();
				string temp1;
				if (a == 13)///////////////////////////////////////////
				{
					cout << endl;
					printYellowEndl("С какой карты совершить плетеж?");


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

						printRedEndl("                                           Карта не найдена.");
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
								printRedEndl("                                           Недостаточно средств.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							if (card.Type[i] == "Credit" && (card.Balance[i] - 820) < -2000)
							{
								printRedEndl("                                            Недостаточно средств.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							card.Balance[i] -= 820;
							card.AddCharge(card.CCNum[i], -820, "Одежда");

							PlaySound(TEXT("purchase.wav"), NULL, SND_ASYNC);
							printGreen("                                           Транзакция успешна.");
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
					cout << "                                 Нормер карты: "; printBlue(card.CCNum[i]); cout << " Тип: "; printBlue(card.Type[i]); cout << " Баланс: ";
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
				cout << "\t\t\t\t\t"; printYellowEndl("       Онлайн покупки");
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Комунальные платежи"); cout << "\t\t\t"; printRed("3200 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Заказать доставку еды"); cout << "\t\t"; printRed("150 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Заказать доставку одежды"); cout << "\t\t"; printRed("820 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printGreen("-> Заказать бытовую технику"); cout << "\t\t"; printRed("9800 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Помощь ВСУ"); cout << "\t\t\t\t"; printRed("500 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("           ВЫХОД");
				a = _getch();
				string temp1;
				if (a == 13)///////////////////////////////////////////
				{
					cout << endl;
					printYellowEndl("С какой карты совершить плетеж?");


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

						printRedEndl("                                           Карта не найдена.");
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
								printRedEndl("                                           Недостаточно средств.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							if (card.Type[i] == "Credit" && (card.Balance[i] - 9800) < -2000)
							{
								printRedEndl("                                            Недостаточно средств.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							card.Balance[i] -= 9800;
							card.AddCharge(card.CCNum[i], -9800, "Техника");

							PlaySound(TEXT("purchase.wav"), NULL, SND_ASYNC);
							printGreen("                                           Транзакция успешна.");
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
					cout << "                                 Нормер карты: "; printBlue(card.CCNum[i]); cout << " Тип: "; printBlue(card.Type[i]); cout << " Баланс: ";
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
				cout << "\t\t\t\t\t"; printYellowEndl("       Онлайн покупки");
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Комунальные платежи"); cout << "\t\t\t"; printRed("3200 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Заказать доставку еды"); cout << "\t\t"; printRed("150 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Заказать доставку одежды"); cout << "\t\t"; printRed("820 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Заказать бытовую технику"); cout << "\t\t"; printRed("9800 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printGreen("-> Помощь ВСУ"); cout << "\t\t\t\t"; printRed("500 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("           ВЫХОД");
				a = _getch();
				string temp1;
				if (a == 13)///////////////////////////////////////////
				{
					cout << endl;
					printYellowEndl("С какой карты совершить плетеж?");


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

						printRedEndl("                                           Карта не найдена.");
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
								printRedEndl("                                           Недостаточно средств.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							if (card.Type[i] == "Credit" && (card.Balance[i] - 500) < -2000)
							{
								printRedEndl("                                            Недостаточно средств.");
								PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
								_getch();
								return;
							}
							card.Balance[i] -= 500;
							card.AddCharge(card.CCNum[i], -500, "Помощь ВСУ");

							PlaySound(TEXT("this.wav"), NULL, SND_ASYNC);
							printGreen("                                           Транзакция успешна.");
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
					cout << "                                 Нормер карты: "; printBlue(card.CCNum[i]); cout << " Тип: "; printBlue(card.Type[i]); cout << " Баланс: ";
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
				cout << "\t\t\t\t\t"; printYellowEndl("       Онлайн покупки");
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Комунальные платежи"); cout << "\t\t\t"; printRed("3200 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Заказать доставку еды"); cout << "\t\t"; printRed("150 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Заказать доставку одежды"); cout << "\t\t"; printRed("820 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Заказать бытовую технику"); cout << "\t\t"; printRed("9800 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printYellow("   Помощь ВСУ"); cout << "\t\t\t\t"; printRed("500 UAH"); cout << endl;
				cout << endl;
				cout << "\t\t\t\t\t"; printGreen("        -> ВЫХОД");

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
		cout << "\t\t\t\t\t"; printYellowEndl("       МЕНЮ ПРИВАТ 24");
		cout << endl;
		cout << "\t\t\t\t\t"; printGreenEndl("-> Основная информация по картам");
		cout << "\t\t\t\t\t"; printYellowEndl("   Перевод с карты на карту");
		cout << "\t\t\t\t\t"; printYellowEndl("   Совершить интернет покупки");
		cout << "\t\t\t\t\t"; printYellowEndl("   История транзакций");
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
		cout << "\t\t\t\t\t"; printYellowEndl("       МЕНЮ ПРИВАТ 24");
		cout << endl;
		cout << "\t\t\t\t\t"; printYellowEndl("   Основная информация по картам");
		cout << "\t\t\t\t\t"; printGreenEndl("-> Перевод с карты на карту");
		cout << "\t\t\t\t\t"; printYellowEndl("   Совершить интернет покупки");
		cout << "\t\t\t\t\t"; printYellowEndl("   История транзакций");
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
		cout << "\t\t\t\t\t"; printYellowEndl("       МЕНЮ ПРИВАТ 24");
		cout << endl;
		cout << "\t\t\t\t\t"; printYellowEndl("   Основная информация по картам");
		cout << "\t\t\t\t\t"; printYellowEndl("   Перевод с карты на карту");
		cout << "\t\t\t\t\t"; printGreenEndl("-> Совершить интернет покупки");
		cout << "\t\t\t\t\t"; printYellowEndl("   История транзакций");
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
		cout << "\t\t\t\t\t"; printYellowEndl("       МЕНЮ ПРИВАТ 24");
		cout << endl;
		cout << "\t\t\t\t\t"; printYellowEndl("   Основная информация по картам");
		cout << "\t\t\t\t\t"; printYellowEndl("   Перевод с карты на карту");
		cout << "\t\t\t\t\t"; printYellowEndl("   Совершить интернет покупки");
		cout << "\t\t\t\t\t"; printGreenEndl("-> История транзакций");
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
	cout << "\t\t\t\t\t"; printYellowEndl("       МЕНЮ ПРИВАТ 24");
	cout << endl;
	cout << "\t\t\t\t\t"; printGreenEndl("-> Основная информация по картам");
	cout << "\t\t\t\t\t"; printYellowEndl("   Перевод с карты на карту");
	cout << "\t\t\t\t\t"; printYellowEndl("   Совершить интернет покупки");
	cout << "\t\t\t\t\t"; printYellowEndl("   История транзакций");


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
				/*cout << "Основная информация по картам" << endl;*/
				card.ShowAllCC();
				
				_getch();
			}
			if (b == 2)
			{
				/*cout << "Перевод с карты на карту" << endl;*/
				
				FromCCtoCC(card);
				
				
			}
			if (b == 3)
			{
				/*cout << "Совершить интернет покупки" << endl;*/
				Shop(card);
			}
			if (b == 4)
			{
				/*cout << "История транзакций" << endl;*/
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