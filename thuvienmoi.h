#ifndef THUVIENMOI_H_INCLUDED
#define THUVIENMOI_H_INCLUDED
using namespace std;
string timegd()
{
    stringstream ss;
    time_t now = time(0);
    char* dt = ctime(&now);
    ss << dt << endl;
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    return dt;
}
void showMenu()
    {
    system("cls");
    cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MOI BAN CHON YEU CAU CAN THUC HIEN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
    cout << "\n\t\t\t |========================================================|";
    cout << "\n\t\t\t |1: RUT TIEN\t\t\t\t\t\t  |\n";
    cout << "\t\t\t |2: DOI MAT KHAU\t\t\t\t\t  |\n";
    cout << "\t\t\t |3: CHUYEN TIEN\t\t\t\t\t  |\n";
    cout << "\t\t\t |4: NAP TIEN\t\t\t\t\t\t  |\n";
    cout << "\t\t\t |5: TRA CUU SO DU TAI KHOAN\t\t\t\t  |\n";
    cout << "\t\t\t |6: TRA CUU LICH SU GIAO DICH\t\t\t\t  |\n";
    cout << "\t\t\t |7: THOAT\t\t\t\t\t\t  |\n";
    cout << "\t\t\t |========================================================|"<<endl;
    cout << endl <<"\t\t\t Nhap lua chon cua ban: ";
		}
void showMenu1(){
    cout << endl <<" \t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MOI BAN CHON YEU CAU CAN THUC HIEN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
    cout << "\n\t\t\t |========================================================|";
    cout << "\n\t\t\t |1: NAP TIEN\t\t\t\t\t\t  |\n";
    cout << "\t\t\t |2: TRA CUU SO DU MAY ATM\t\t\t\t  |\n";
    cout << "\t\t\t |3: TRA CUU TAI KHOAN\t\t\t\t\t  |\n";
    cout << "\t\t\t |4: THOAT\t\t\t\t\t\t  |\n";
    cout << "\t\t\t |========================================================|"<<endl;
    cout << endl <<"\t\t\t Nhap lua chon cua ban: ";}
void themlichsu(stringstream &th)
    {
    string s;
    getline(th,s);
    ofstream fout("history.txt", ios :: app);
    fout << s << endl;
    fout.close();
    }
void tracuu()
    {
    cout<<setw(22)<<left<<"Bien dong so du"<<setw(40)<<left<<"              Noi dung giao dich"<<"                Thoi gian"<<endl;
    ifstream fin("history.txt");
    while(!fin.eof()){
        stringstream th;
        string s;
        getline (fin,s);
        th<<s;
       cout<<s<<endl;
    }
    fin.close();}
void sodutk(stringstream &sd){
    string a;
    getline(sd,a);
    ofstream fout("sodutk.txt", ios :: trunc);
    fout << a << endl;
    fout.close();
}
void sodutk1(stringstream &sd1){
    string a1;
    getline(sd1,a1);
    ofstream fout("sodutk1.txt", ios :: trunc);
    fout << a1 << endl;
    fout.close();
}
void trasdtk(){
    fstream f;
	f.open("sodutk.txt", ios::in);
    string data;
	getline(f, data);
	f.close();
	cout << data;}
void trasdtk1(){
    fstream f1;
	f1.open("sodutk1.txt", ios::in);
    string data2;
	getline(f1, data2);
	f1.close();
	cout << data2;}
int docso () {
string filename("sodutk.txt");
    int number;
    ifstream input_file(filename);
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '"
             << filename << "'" << endl;

    }

    while (input_file >> number) {
       return number;
    }
    input_file.close();}
int docso1 () {
string filename1("sodutk1.txt");
    int number1;
    ifstream input_file1(filename1);
    if (!input_file1.is_open()) {
        cerr << "Could not open the file - '"
             << filename1 << "'" << endl;
    }
    while (input_file1 >> number1) {
       return number1;
    }
    input_file1.close();}
void tentk(stringstream &ttk){
    string b;
    getline(ttk,b);
    ofstream fout("tentk.txt", ios :: app);
    fout << b << endl;
    fout.close();
}
void trattk(){
      ifstream fin("tentk.txt");
     while(!fin.eof()){
        stringstream th;
        string s;
        getline (fin,s);
        th<<s;
       cout<<s<<endl;}fin.close();}
void luachon1(int choice2){
    char date[9];
    char time[9];
    _strdate(date);
    _strtime(time);
    int tien_nap1;
    switch (choice2)
				{
case 1:

                        Sleep(500);
                            system("cls");
                            cout << endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NAP TIEN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
                            cout << "\n\t\t\t      -----------------------";
                            cout << endl <<"\t\t\t  Nhap so tien ban muon nap: ";
                            cin >> tien_nap1;
                            while (tien_nap1 < 10000){
                                    Sleep(500);
                                    system("cls");
                                    cout << endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NAP TIEN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
                                    cout << "\n\t\t\t     -----------------------";
                                    cout<<"\n\t\t\tSo tien nap khong hop le\a";
                                    Sleep(1000);
                                    system("cls");
                                    cout << endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NAP TIEN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
                                    cout << "\n\t\t\t     -----------------------";
                                    cout << endl <<"\t\t\t  Nhap so tien ban muon nap: ";
                                    cin >> tien_nap1;}
                            if (tien_nap1>=10000){
                            stringstream sd1;
                            sd1<<setw(21)<<left<<to_string(docso1()+tien_nap1) + " VND"<<setw(40)<<timegd();
                            sodutk1(sd1);
                            cout << "\n\t\t\t    BAN DA NAP TIEN THANH CONG! ";
                            cout<<"\n\t\t\t     "<<date<<"        "<<time<<endl;
                           }
                            system("pause");
                            system("cls");
                            showMenu1();
                            cin>>choice2;
                            luachon1(choice2);
                            break;
case 2:
                           Sleep(500);
                            system("cls");
                            trasdtk1();
                            system("pause");
                            system("cls");
                            showMenu1();
                            cin>>choice2;
                            luachon1(choice2);
                            break;
case 3:
                            Sleep(500);
                            system("cls");
                            cout<<"Ten tai khoan"<<"          "<<"Mat khau"<<endl;
                            trattk();
                            system("pause");
                            system("cls");
                            showMenu1();
                            cin>>choice2;
                            luachon1(choice2);
                            break;

case 4:
                Sleep(500);
                system("cls");
                cout<<endl<<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NGAN HANG HAWAII FIVE-O \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
                cout << endl << " \n\t\t\t          XIN CHAO VA HEN GAP LAI ADMIN!\a\a" << endl;
                cout<< endl <<"\t\t\t           Copyright by Nguyen Son Tung";
                cout<<endl<<"\t\t\t\t\t     2021";
                exit(0);
                break;
				default:
					Sleep(500);
					system("cls");
					Sleep(500);
					cout << "ERROR!\n\n";
					break;}
                            }
void luachon(int choice){
    string ten,ten1;
	string mk;
	string TEN, M_K;
    int so_lan_nhap_sai = 0;
	int tien_rut,tien_nap,tien_chuyen;
	int so_du = 0;
	string so_pin_moi, so_pin_moi1, tai_khoan_can_chuyen;
	char date[9];
    char time[9];
    _strdate(date);
    _strtime(time);
        switch (choice)
				{
				case 1:
					Sleep(500);
					system("cls");
					cout << endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 RUT TIEN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
                    cout << "\n\t\t\t       --------------------";
					cout << endl <<"\n\t\t\t  Nhap so tien ban muon rut: ";
					cin >> tien_rut;
					if ((tien_rut <= docso())&&(tien_rut % 10000 ==0)&&(tien_rut > 0)&&((tien_rut)<=docso1()))
					{
						Sleep(500);
                        stringstream ss;
                        ss<<" -"<<setw(21)<<left<<to_string(tien_rut) + " VND"<<setw(20)<<left<<"             rut tien trong tai khoan          "<<"    "<<timegd();
                        themlichsu(ss);
						cout << "\n\t\t\t   BAN DA RUT TIEN THANH CONG! " ;
						int namTram = tien_rut/500000;
                        tien_rut = tien_rut % 500000;
                        int motTram = tien_rut/100000;
                        tien_rut = tien_rut % 100000;
                        int namMuoi = tien_rut/50000;
                        tien_rut = tien_rut % 50000;
                        int haiMuoi = tien_rut/20000;
                        tien_rut = tien_rut % 20000;
                        int muoi = tien_rut/10000;
                        cout<<"\n\t\t\t       So to rut duoc la:\n";
                        cout<<"\t"<<namTram<<" to 500.000 , "<<motTram<<" to 100.000 , "<<namMuoi<<" to 50.000 , "<<haiMuoi<<" to 20.000 , "<<muoi<<" to 10.000"<<endl;
                        stringstream sd;
                        sd<<setw(21)<<left<<to_string(docso()-tien_rut) + " VND"<<setw(40)<<timegd();
                        sodutk(sd);
                        stringstream sd1;
                        sd1<<setw(21)<<left<<to_string(docso1()-tien_rut) + " VND"<<setw(40)<<timegd();
                        sodutk1(sd1);
						cout<<"\n\t\t\t      "<<date<<"     "<<time<<endl;
						system("pause");
					}
					while ((tien_rut > docso())||(tien_rut % 10000 != 0)||(tien_rut < 0)||((tien_rut)>docso1()))
					{
						cout << "\n\t\t   So tien rut khong hop le, xin vui long nhap lai!\a\a\n";
						Sleep(2000);
						system("cls");
						cout << endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 RUT TIEN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
                        cout << "\n\t\t\t       --------------------";
						cout << endl <<"\n\t\t\t  Nhap so tien ban muon rut: ";
						cin >> tien_rut;
						if ((tien_rut <= docso())&&(tien_rut % 10000 == 0)&&(tien_rut > 0)&&((tien_rut)<=docso1()))
						{
							Sleep(500);
							cout << "\n\t\t\t   BAN DA RUT TIEN THANH CONG! ";
							int namTram = tien_rut/500000;
                            tien_rut = tien_rut % 500000;
							int motTram = tien_rut/100000;
                            tien_rut = tien_rut % 100000;
                            int namMuoi = tien_rut/50000;
                            tien_rut = tien_rut % 50000;
                            int haiMuoi = tien_rut/20000;
                            tien_rut = tien_rut % 20000;
                            int muoi = tien_rut/10000;
                            cout<<"\t\t\t\tSo to rut duoc la:\n";
                            cout<<"\t"<<namTram<<" to 500.000 , "<<motTram<<" to 100.000 , "<<namMuoi<<" to 50.000 , "<<haiMuoi<<" to 20.000 , "<<muoi<<" to 10.000"<<endl;
							stringstream ss;
                            ss<<" -"<<to_string(tien_rut) + " VND"<<setw(20)<<left<<"rut tien trong tai khoan"<<timegd();
                            themlichsu(ss);
                            stringstream sd;
                            sd<<setw(21)<<left<<to_string(docso()-tien_rut) + " VND"<<setw(40)<<timegd();
                            sodutk(sd);
                            stringstream sd1;
                            sd1<<setw(21)<<left<<to_string(docso1()-tien_rut) + " VND"<<setw(40)<<timegd();
                            sodutk1(sd1);
							cout<<"\t\t\t      "<<date<<"     "<<time<<endl;
							system("pause");
						}
					}
                    Sleep(1000);
                    system("cls");
                    cout << " \n\t\t\t\t     XIN CHAO VA HEN GAP LAI QUY KHACH!\a\a" << endl << endl;
                    Sleep(1000);
                    system("cls");
                    showMenu();
                    cin>>choice;
                    luachon(choice);
                    break;
				case 2:
					Sleep(500);
                    system("cls");
                    cout << endl <<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DOI MAT KHAU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
                    cout << "\n\n\t\t\t       -----------------------";
                    cout << endl <<"\n\t\t\t\tNhap so PIN moi: ";
                    cin >> so_pin_moi;//pass phai 6 so
                    while ((so_pin_moi.size()<6)||(so_pin_moi.size()>6)){
                    cout<<"\t\t\t\tSo PIN phai co 6 chu so\n";
                    Sleep(1000);
                    system("cls");
                    cout << endl <<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DOI MAT KHAU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
                    cout << "\n\n\t\t\t       -----------------------";
                    cout << endl <<"\n\t\t\t\tNhap so PIN moi: ";
                    cin >> so_pin_moi;}
                    cout << "\t\t\t\tNhap lai so PIN moi lan nua: ";
                    cin >> so_pin_moi1;
                    Sleep(500);
                    if (so_pin_moi == so_pin_moi1)
                    {
//                        mk = so_pin_moi;
                        cout << "\n\t\t\t\t       Loading...\n";
                        Sleep(500);
                        system("cls");
                        cout << endl <<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DOI MAT KHAU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
                        cout << endl <<"\n\t\t\t        DOI MAT KHAU THANH CONG!\n\n";
                        Sleep(1000);
                        system("cls");
                        cout<<endl<<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NGAN HANG HAWAII FIVE-O \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
                        cout << "\n\n\t\t\t\t   DANG NHAP TAI KHOAN CUA BAN\n";
                        cout << "\n\t\t\t       -----------------------------------";
                        //dang nhap tk;
                        cout << "\n\t\t\t\t    Xin vui long nhap so PIN: "; cin >> M_K;
                        if (M_K == so_pin_moi)
                        {
                            system("cls");
                            cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
                            cout << "\t\t\t\t\t      Loading...\n";
                            Sleep(500);
                            system("cls");
                            cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
                            cout << "\n\t\t\t\t       XIN KINH CHAO QUY KHACH! \a\a\n\n";
                            Sleep(2000);
                            system("cls");
                            showMenu();
                            cin >> choice;
                            luachon(choice);
                        } else
                        {
                            system("cls");
                            cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
                            cout << "\t\t\t\t\t      Loading...\n";
                            Sleep(500);
                            system("cls");
                            cout << "\n\t\t\t\t\t DANG NHAP THAT BAI!\a\a\n\n";
                        }
                    }
                            Sleep(2000);
                            while (( M_K != so_pin_moi)&&(so_lan_nhap_sai<=5))
                {
                    so_lan_nhap_sai++;
                    system("cls");
                    if (so_lan_nhap_sai<=5){
                    cout<<endl<<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NGAN HANG HAWAII FIVE-O \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
                    cout << "\n\n\t\t\t\t   DANG NHAP TAI KHOAN CUA BAN\n";
                    cout << "\n\t\t\t       ------------------------------------";
                    Sleep(500);
                    cout << endl <<"\n\t\t\t        BAN DA NHAP SAI MA PIN "<<so_lan_nhap_sai<<" LAN\a\a\n";
                    cout << "\t\t\t\t      XIN VUI LONG NHAP LAI";
                    Sleep(2000);
                    system("cls");
                    cout<<endl<<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NGAN HANG HAWAII FIVE-O \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
                    cout << "\n\n\t\t\t\t   DANG NHAP TAI KHOAN CUA BAN\n";
                    cout << "\n\t\t\t       -----------------------------------";
                    cout << "\n\t\t\t\t    Xin vui long nhap so PIN: "; cin >> M_K;

                    if ( M_K == so_pin_moi)
                    {
                        system("cls");
                        cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
                        cout << "\n\t\t\t\t\tLoading...\n";
                        Sleep(1000);
                        system("cls");
                        cout <<endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DANG NHAP TAI KHOAN CUA BAN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
                        cout << "\n\t\t\t\t       XIN KINH CHAO QUY KHACH! \a\a\n\n";
                        Sleep(1000);
                        system("cls");
                        showMenu();
                        cin >> choice;
                        luachon(choice);
                        }
                    }
                    else if (so_lan_nhap_sai>=6) cout<<"THE CUA BAN DA BI KHOA!"<<endl;
                    }
                    break;

				case 3:
					Sleep(500);
					system("cls");
					cout << endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CHUYEN TIEN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
					cout << "\n\t\t\t       -----------------------";
					cout << endl <<"\n\t\t\tNhap ten nguoi dung can chuyen tien: ";
					cin >> tai_khoan_can_chuyen;
					cout << "\t\t\tNhap so tien can chuyen: ";
					cin >> tien_chuyen;
					if ((tien_chuyen <= docso())&&(tien_chuyen % 50000 == 0)&&(tien_chuyen > 0))
					{
						Sleep(500);
                        stringstream sd;
                        sd<<setw(21)<<left<<to_string(docso()-tien_chuyen) + " VND"<<setw(40)<<timegd();
                        sodutk(sd);
						cout << "\n     BAN DA CHUYEN THANH CONG " << tien_chuyen << " VND CHO TAI KHOAN " << tai_khoan_can_chuyen;
                        stringstream th;
                        th<<" -"<<to_string(tien_chuyen) + " VND"<<setw(20)<<left<<"             chuyen tien den tai khoan "+ tai_khoan_can_chuyen<<"    "<<timegd();
                        themlichsu(th);
						cout<<"\t\t\t      "<<date<<"        "<<time<<endl;
					}
					while ((tien_chuyen % 50000 != 0) || (tien_chuyen > docso())||(tien_chuyen < 0))
				{
					cout << "\a\n          VUI LONG NHAP SO TIEN NHO HON HOAC BANG SO DU TRONG TAI KHOAN CUA BAN VA LA BOI SO CUA 50000\n";
					Sleep(1000);
					system("cls");
					cout << endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CHUYEN TIEN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
					cout << "\n\t\t\t       -----------------------";
                    cout << endl<<"\n\t\t\tNhap so tien can chuyen: ";
					cin >> tien_chuyen;
					if ((tien_chuyen <= docso())&&(tien_chuyen % 50000 == 0)&&(tien_chuyen > 0))
					{
						Sleep(500);
						stringstream sd;
                        sd<<setw(21)<<left<<to_string(docso()-tien_chuyen) + " VND"<<setw(40)<<timegd();
                        sodutk(sd);
						cout << "\nBAN DA CHUYEN THANH CONG " << tien_chuyen << " VND CHO TAI KHOAN " << tai_khoan_can_chuyen;
						stringstream th;
                        th<<" -"<<to_string(tien_chuyen) + " VND"<<setw(20)<<left<<"             chuyen tien den tai khoan "+ tai_khoan_can_chuyen<<"    "<<timegd();
                        themlichsu(th);
						cout<<"\n\t\t\t      "<<date<<"        "<<time<<endl;
					}
                    }
                    system("pause");
                    system("cls");
                    showMenu();
                    cin>>choice;
                    luachon(choice);
                    break;
                case 4:
                     Sleep(500);
                    system("cls");
                    cout << endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NAP TIEN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
					cout << "\n\t\t\t     -----------------------";
					cout << endl <<"\t\t\t  Nhap so tien ban muon nap: ";
					cin >> tien_nap;
					while ((tien_nap<10000)||(tien_nap%10000!=0)){
                            Sleep(500);
                            system("cls");
                            cout << endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NAP TIEN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
                            cout << "\n\t\t\t     -----------------------";
                            cout<<"\n\t\tSo tien nap phai lon hon va la boi so cua 10000 VND\a";
                            Sleep(1000);
                            system("cls");
                            cout << endl<< "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NAP TIEN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
                            cout << "\n\t\t\t     -----------------------";
                            cout << endl <<"\t\t\t  Nhap so tien ban muon nap: ";
                            cin >> tien_nap;}
                    if ((tien_nap>=10000)&&(tien_nap%10000==0)){
                    stringstream sd;
                    sd<<setw(21)<<left<<to_string(docso()+tien_nap) + " VND"<<setw(40)<<timegd();
                    sodutk(sd);
                    stringstream sd1;
                    sd1<<setw(21)<<left<<to_string(docso1()+tien_nap) + " VND"<<setw(40)<<timegd();
                    sodutk1(sd1);
                    //system("cls");
					cout << "\n\t\t\t    BAN DA NAP TIEN THANH CONG! ";
					cout<<"\n\t\t\t     "<<date<<"        "<<time<<endl;
					stringstream th;
                   th<<" -"<<to_string(tien_nap) + " VND"<<setw(20)<<left<<"nap tien vao tai khoan"<<timegd();
                   themlichsu(th);
                   }
                    system("pause");
                    system("cls");
                    showMenu();
                    cin>>choice;
                    luachon(choice);
                    break;
                case 5:
					Sleep(500);
					system("cls");
					cout << endl << "\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 TRA CUU SO DU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
					cout << "\n\t\t\t    -------------------------------";
					cout << "\n\t\t\tSo du tai khoan hien tai la: ";
					trasdtk();
					cout<< "\a\a\n\n";
					system("pause");
                    system("cls");
                    showMenu();
                    cin>>choice;
                    luachon(choice);
					break;
                case 6:
                   Sleep(500);
                    system("cls");
                    tracuu();
                    system("pause");
                  //  system("cls");
                    showMenu();
                    cin>>choice;
                    luachon(choice);
                    break;
                case 7:
                    Sleep(500);
                    system("cls");
                    cout<<endl<<"\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NGAN HANG HAWAII FIVE-O \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
                    cout << endl << " \n\t\t\t        XIN CHAO VA HEN GAP LAI QUY KHACH!\a\a" << endl;
                    cout<< endl <<"\t\t\t           Copyright by Nguyen Son Tung";
                    cout<<endl<<"\t\t\t\t\t     2021";
                    exit(0);
                    break;
				default:
					Sleep(500);
					system("cls");
					Sleep(500);
					cout << "ERROR!\n\n";
					break;}
}

#endif // THUVIENMOI_H_INCLUDED
