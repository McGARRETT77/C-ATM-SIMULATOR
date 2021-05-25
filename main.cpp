#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <fstream>
#include <sstream>
#include "thuvienmoi.h"
using namespace std;
int main()
{
	string ten;
	string mk,mk1,pinadmin="123456";
	string TEN, M_K,admin="admin";
	int so_lan_nhap_sai = 0;
	int choice,choice1,choice2;
    cout<<endl<<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NGAN HANG HAWAII FIVE-O \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    cout << "\n\n\t\t\t |=============================================|";
    cout << "\n\t\t\t |1: DANG KI TAI KHOAN\t\t\t       |\n";
    cout << "\t\t\t |2: DANG NHAP TAI KHOAN\t\t       |\n";
    cout << "\t\t\t |=============================================|"<<endl;
    cout << endl <<"\t\t\t Nhap lua chon cua ban: ";
    cin>>choice1;
    cout << "\t\t\t\t\t      Loading...\n";
    Sleep(1000);
    system("cls");

	if (choice1==1) {
    cout<<endl<<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NGAN HANG HAWAII FIVE-O \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
	cout << "\n\n\t\t\t\t   DANG KI TAI KHOAN CUA BAN\n";
	cout << "\n\t\t\t       -----------------------------------";
	cout << "\n\t\t\t            Nhap tai khoan: "; cin >> ten;
	cout << "\t\t\t\t    Xin vui long nhap so PIN: "; cin >> mk;
    while ((mk.size()<6)||(mk.size()>6)){
                    cout<<"\t\t\t\t    So PIN phai co 6 chu so\n";
                    Sleep(1000);
                    system("cls");
                    cout << endl <<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DOI MAT KHAU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
                    cout << "\n\n\t\t\t       -----------------------";
                    cout << endl <<"\n\t\t\t\tNhap so PIN moi: ";
                    cin >> mk;}
                    cout << "\t\t\t\t    Nhap lai so PIN lan nua: ";
                    cin >> mk1;

    Sleep(500);
    system("cls");
                    if (mk == mk1)
                    {
                        mk = mk1;
                        cout << "\n\t\t\t\t       Loading...\n";
                        Sleep(500);
                        system("cls");
                        cout<<endl<<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NGAN HANG HAWAII FIVE-O \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
                        cout << endl <<"\n\t\t\t               DANG KI THANH CONG!\a\a\n\n";
                        stringstream ttk;
                        ttk<<setw(20)<<left<<ten<<mk;
                        tentk(ttk);
                        Sleep(1000);
                        system("cls");
                        cout<<endl<<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NGAN HANG HAWAII FIVE-O \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
                        cout << "\n\n\t\t\t\t   DANG NHAP TAI KHOAN CUA BAN\n";
                        cout << "\n\t\t\t       -----------------------------------";
                        cout << "\n\t\t\t            Nhap tai khoan: "; cin >> TEN;
                        cout << "\t\t\t\t    Xin vui long nhap so PIN: "; cin >> M_K;
                        if (TEN == ten && M_K == mk)
                        {
                            system("cls");
                            cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
                            cout << "\t\t\t\t\t      Loading...\n";
                            Sleep(500);
                            system("cls");
                            cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
                            cout << "\n\t\t\t\t      XIN KINH CHAO QUY KHACH! \a\a\n\n";//sau cho nay la dang nhap lai
                            Sleep(2000);
                            system("cls");
                            showMenu();
                            cin >> choice;
                            luachon(choice);
                        }
                        else
                        {
                            system("cls");
                            cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
                            cout << "\t\t\t\t\t      Loading...\n";
                            Sleep(1000);
                            system("cls");
                            cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
                            cout << "\n\t\t\t\t\t DANG NHAP THAT BAI!\a\a\n\n";
                        }
                    }
                            Sleep(2000);
                            while ((TEN != ten || M_K != mk)&&(so_lan_nhap_sai<=5))
                {
                    so_lan_nhap_sai++;
                    system("cls");
                    if (so_lan_nhap_sai<=5){
                    cout<<endl<<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NGAN HANG HAWAII FIVE-O \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
                    cout << "\n\n\t\t\t\t   DANG NHAP TAI KHOAN CUA BAN\n";
                    cout << "\n\t\t\t       ------------------------------------";
                    Sleep(500);
                    cout << endl <<"\n\t\t\t BAN DA NHAP SAI TEN TAI KHOAN HOAC MA PIN "<<so_lan_nhap_sai<<" LAN\a\a\n";
                    cout << "\t\t\t\t      XIN VUI LONG NHAP LAI";
                    Sleep(2000);
                    system("cls");
                    cout<<endl<<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NGAN HANG HAWAII FIVE-O \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
                    cout << "\n\n\t\t\t\t   DANG NHAP TAI KHOAN CUA BAN\n";
                    cout << "\n\t\t\t       -----------------------------------";
                    cout << "\n\t\t\t            Nhap tai khoan: "; cin >> TEN;
                    cout << "\t\t\t\t    Xin vui long nhap so PIN: "; cin >> M_K;

                    if (TEN == ten && M_K == mk)
                    {
                        system("cls");
                        cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
                        cout << "\n\t\t\t\t\tLoading...\n";
                        Sleep(1000);
                        system("cls");
                        cout << "\n\t\t\t        XIN KINH CHAO QUY KHACH! \a\a\n\n";
                        Sleep(1000);
                        system("cls");
                        showMenu();
                        cin >> choice;
                        luachon(choice);
                        }

                    }
                    else if (so_lan_nhap_sai>=6) cout<<"THE CUA BAN DA BI KHOA!"<<endl;
                };}
    if (choice1==2)
                { cout<<endl<<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NGAN HANG HAWAII FIVE-O \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
                        cout << "\n\n\t\t\t\t   DANG NHAP TAI KHOAN CUA BAN\n";
                        cout << "\n\t\t\t       -----------------------------------";
                        cout << "\n\t\t\t            Nhap tai khoan: "; cin >> TEN;
                        cout << "\t\t\t\t    Xin vui long nhap so PIN: "; cin >> M_K;
//                        if (TEN == ten && M_K == mk)
//                        {
//                            system("cls");
//                            cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
//                            cout << "\t\t\t\t\t      Loading...\n";
//                            Sleep(500);
//                            system("cls");
//                            cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
//                            cout << "\n\t\t\t\t      XIN KINH CHAO QUY KHACH! \a\a\n\n";//sau cho nay la dang nhap lai
//                            Sleep(2000);
//                            system("cls");
//                            showMenu();
//                            cin >> choice;
//                            luachon(choice);
//                        }
                         if ((TEN == admin) && (M_K == pinadmin)){
                        system("cls");
                        cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
                        cout << "\n\t\t\t\t\t     Loading...\n";
                        Sleep(1000);
                        system("cls");
                        cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
                        cout << "\n\t\t\t                XIN KINH CHAO ADMIN! \a\a\n\n";
                        Sleep(1000);
                        system("cls");
                        showMenu1();
                        cin>>choice2;
                        luachon1(choice2);
                         }

                                }else
                        {
                            system("cls");
                            cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
                            cout << "\t\t\t\t\t      Loading...\n";
                            Sleep(1000);
                            system("cls");
                            cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
                            cout << "\n\t\t\t\t\t DANG NHAP THAT BAI!\a\a\n\n";
                        }

                            Sleep(2000);
                            while ((TEN != admin) || (M_K != pinadmin))
                {

                    system("cls");

                    cout<<endl<<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NGAN HANG HAWAII FIVE-O \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
                    cout << "\n\n\t\t\t\t   DANG NHAP TAI KHOAN CUA BAN\n";
                    cout << "\n\t\t\t       ------------------------------------";
                    Sleep(500);
                    cout << "\n\n\t\t\t\t      XIN VUI LONG NHAP LAI";
                    Sleep(2000);
                    system("cls");
                    cout<<endl<<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NGAN HANG HAWAII FIVE-O \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
                    cout << "\n\n\t\t\t\t   DANG NHAP TAI KHOAN CUA BAN\n";
                    cout << "\n\t\t\t       -----------------------------------";
                    cout << "\n\t\t\t            Nhap tai khoan: "; cin >> TEN;
                    cout << "\t\t\t\t    Xin vui long nhap so PIN: "; cin >> M_K;

                    if ((TEN == admin) && (M_K == pinadmin))
                    {
                        system("cls");
                        cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
                       cout << "\n\t\t\t\t\t     Loading...\n";
                        Sleep(1000);
                        system("cls");
                        cout << "\n\t\t\t                XIN KINH CHAO ADMIN! \a\a\n\n";
                        Sleep(1000);
                        system("cls");
                        showMenu1();
                        cin >> choice2;
                        luachon1(choice2);
                        }
                    }


	system("pause");
	return(0);
}

