#include<iostream>
#include<iomanip>
#include<string>
#include<string.h>
using namespace std;
struct sinhvien
{
	char ten[100];
	string id;
	char gioitinh[10];
	int tuoi;
	float diemchuyencan;
	float diemgiuaki;
	float diemcuoiki;
	float diemtrungbinh;
}sinhvien;
void addmember(sinhvien,int);
void menu();
void clean(sinhvien, int,int);
int search(sinhvien, string, int);
void updatesv(sinhvien, int);
void ShowMember(sinhvien, int);
void DiemTB(sinhvien,int);
void ShowMax(sinhvien, int);
void ShowMin(sinhvien, int);
void SapXepSV(sinhvien, int);
void TinhDiemTB(sinhvien, int);
void TimSV(sinhvien, int);
int main()
{
	sinhvien sv[50];
	char choose;
	string id;
	int biendem = 0;
	do
	{
		menu();
		cin >> choose;
		switch (choose)
		{
		case '1':addmember(sv, biendem);
		case '2':clean(sv, search(sv, id, biendem), biendem);
		case '3':updatesv(sv, biendem);
		case '4':ShowMember(sv, biendem);
		case '5':TinhDiemTB(sv, biendem);
		case '6':ShowMax(sv, biendem);
		case '7':ShowMin(sv, biendem);
		case '8':TimSV(sv, biendem);
		case '9':SapXepSV(sv, biendem);
		default:cout << "Khong hop le" << endl;
		}
	} while (choose!=10);
	system("pause");
	return 0;
}
//MENU
void menu()
{
	cout << "=======MENU=======" << endl;
	cout << "1.Them ban ghi sinh vien" << endl;
	cout << "2.Xoa ban ghi sinh vien" << endl;
	cout << "3.Cap nhat ban ghi sinh vien" << endl;
	cout << "4.Quan sat tat ca sinh vien" << endl;
	cout << "5.Tinh diem trung binh cua sinh vien duoc chon " << endl;
	cout << "6.Hien thi sinh vien co diem cao nhat" << endl;
	cout << "7.Hien thi sinh vien co diem thap nhat" << endl;
	cout << "8.Tim sinh vien boi ID" << endl;
	cout << "9.Sap xep cac ban ghi boi tong diem sinh vien" << endl;
	cout << "10.Thoat" << endl;
}
//Them sinh vien
void addmember(sinhvien sv[],int &biendem)
{
	cout << "<======Nhap Thong Tin Cho Sinh Vien======>" << endl;
again: {cout << "Nhap ID:";
		getline(cin, sv[biendem].id); }
	   if (search(sv, sv[biendem].id, biendem) == -1)
	   {
		   cout << "\nID nay da ton tai,nhap lai:\n";
		   goto again;
	   }
	cout << "Them ten:";
	cin.getline(sv[biendem].ten, 100);
	cin.ignore(32767, '\n');
	cout << "Gioi tinh(Nam 1 Nu 0):";
	cin >> sv[biendem].gioitinh;
	cout << "Nhap tuoi sinh vien:";
	cin >> sv[biendem].tuoi;
	cout << "Nhap diem chuyen can:";
	cin >> sv[biendem].diemchuyencan;
	cout << "Nhap diem giua ki:";
	cin >> sv[biendem].diemgiuaki;
	cout << "Nhap diem cuoi ki:";
	cin >> sv[biendem].diemcuoiki;
	sv[biendem].diemtrungbinh = (sv[biendem].diemchuyencan + sv[biendem].diemgiuaki)*0.3 + (sv[biendem].diemcuoiki)*0.7;
	++biendem;
}
//Tim kiem
int search(sinhvien sv[], string id, int biendem)
{
	int found = -1;
	for (int i = 0; i < biendem; i++)
	{
		if (sv[i].id == id) found = i;
		else found = -1;
	}
	return found;
}
//Xoa du lieu sinh vien
void clean(sinhvien sv[], int index,int &biendem)
{
	string id;
loop: {
	cout << "Nhap ID sinh vien:";
	getline(cin, id);
	}
	  if (search(sv, id, biendem) == -1)
	  {
		  cout << "Nhap sai,nhap lai";
		  goto loop;
	  }
	strcpy(sv[index].ten, "");
	sv[index].id = "";
	strcpy(sv[index].gioitinh, "");
	sv[index].tuoi = 0;
	sv[index].diemchuyencan = 0;
	sv[index].diemgiuaki = 0;
	sv[index].diemcuoiki = 0;
	biendem--;
	cout << "Ban ghi da duoc xoa" << endl;
}
//Cap nhat thong tin sinh vien
void updatesv(sinhvien sv[], int biendem)
{
	string id;
	int column;
lap: {cout << "Nhap ID sinh vien muon update:";
	getline(cin, id); }
	int n = search(sv, id, biendem);
	if (n == -1)
	{
		cout << "Nhap sai,nhap lai:";
		goto lap;
	}
	for (;;)
	{
	LAP: {cout << "Ban muon cap nhat thong tin cho van de gi???" << endl;
		cout << "1.Ten"
			<< "2.ID"
			<< "3.Gioi Tinh"
			<< "4.Tuoi"
			<< "5.Diem chuyen can"
			<< "6.Diem giua ki"
			<< "7.Diem cuoi ki"
			<< "8.THOAT"
			<< endl;
		cin >> column;
		if (column == 1)
		{
			cout << "Nhap ten update:";
			cin.getline(sv[n].ten, 100);
		}
		else if (column == 2)
		{
			cout << "Nhap ID update:";
			getline(cin, sv[n].id);
		}
		else if (column == 3)
		{
			cout << "Update gioi tinh ^-^:";
			cin.getline(sv[n].gioitinh, 10);
		}
		else if (column == 4)
		{
			cout << "Update tuoi sinh vien:";
			cin >> sv[n].tuoi;
		}
		else if (column == 5)
		{
			cout << "Update diem chuyen can:";
			cin >> sv[n].diemchuyencan;
		}
		else if (column == 6)
		{
			cout << "Update diem giua ki:";
			cin >> sv[n].diemgiuaki;
		}
		else if (column == 7)
		{
			cout << "Update diem cuoi ki:";
			cin >> sv[n].diemcuoiki;
		}
		else if (column == 8) break;
		else goto LAP; }
	}
}
//Xem thong tin tat ca sinh vien
void ShowMember(sinhvien sv[], int biendem)
{
	if (biendem == 0) cout << "Khong ton tai sinh vien nao!" << endl;
	else
	{
		cout << "Show cac sinh vien cho ae xem:" << endl;
		cout << "Ten" << setw(15) << "ID" << setw(10) << "Gioi tinh" << setw(10) << "Tuoi" << setw(10) << "Diem chuyen can" << setw(10) << "Diem giua ki" << setw(10) << "Diem cuoi ki" << setw(10) << "Diem trung binh" << endl;
		for (int i = 0; i < biendem; i++)
		{
			cout << sv[i].ten << setw(15) << sv[i].id << setw(10) << sv[i].gioitinh << setw(10) << sv[i].tuoi << setw(10) << sv[i].diemchuyencan << setw(10) << sv[i].diemgiuaki << setw(10) << sv[i].diemcuoiki << setw(10) << sv[i].diemtrungbinh << endl;
		}
	}
}
//Xem thong tin cua mot sinh vien theo ID
void DiemTB(sinhvien sv[],int biendem)
{
	string id;
loop:{
		cout << "Nhap ID sinh vien:";
		getline(cin, id); 
	 }
	 if (search(sv, id, biendem) == -1) goto loop;
	int n=search(sv, id, biendem);
	cout << "Diem trung binh cua sinh vien la:" << sv[n].diemtrungbinh << endl;
}
//Show sinh vien co diem cao nhat
void ShowMax(sinhvien sv[], int biendem)
{
	float max = sv[0].diemtrungbinh;
	int n;
	for (int i = 1; i < biendem; i++)
	{
		if (max < sv[i].diemtrungbinh)
		{
			max = sv[i].diemtrungbinh;
			n = i;
		}
	}
	cout << "Xuat thong tin sinh vien co diem cao nhat:" << endl;
	cout << "Ten" << setw(15) << "ID" << setw(10) << "Gioi tinh" << setw(10) << "Tuoi" << setw(10) << "Diem chuyen can" << setw(10) << setw(10) << "Diem giua ki" << setw(10) << "Diem cuoi ki" << setw(10) << "Diem trung binh" << endl;
	cout << sv[n].ten << setw(15) << sv[n].id << setw(10) << sv[n].gioitinh << setw(10) << sv[n].tuoi << setw(10) << sv[n].diemchuyencan << setw(10) << sv[n].diemgiuaki << setw(10) << sv[n].diemcuoiki << setw(10) << sv[n].diemtrungbinh << endl;
}
//Show sinh vien co diem thap nhat
void ShowMin(sinhvien sv[], int biendem)
{
	float min = sv[0].diemtrungbinh;
	int n;
	for (int i = 1; i < biendem; i++)
	{
		if (min > sv[i].diemtrungbinh)
		{
			min = sv[i].diemtrungbinh;
			n = i;
		}
	}
	cout << "Xuat thong tin sinh vien co diem thap nhat:" << endl;
	cout << "Ten" << setw(15) << "ID" << setw(10) << "Gioi tinh" << setw(10) << "Tuoi" << setw(10) << "Diem chuyen can" << setw(10) << setw(10) << "Diem giua ki" << setw(10) << "Diem cuoi ki" << setw(10) << "Diem trung binh" << endl;
	cout << sv[n].ten << setw(15) << sv[n].id << setw(10) << sv[n].gioitinh << setw(10) << sv[n].tuoi << setw(10) << sv[n].diemchuyencan << setw(10) << sv[n].diemgiuaki << setw(10) << sv[n].diemcuoiki << setw(10) << sv[n].diemtrungbinh << endl;
}
//Sap xep sinh vien co diem tu cao xuong thap
void SapXepSV(sinhvien sv[], int biendem)
{
	for (int i = 0; i < biendem - 1; i++)
	{
		for (int j = biendem-1; j > i; j--)
		{
			if (sv[i].diemtrungbinh < sv[j].diemtrungbinh)
			{
				//HoanVi(sv[i].diemtrungbinh,sv[j].diemtrungbinh);
				sinhvien tmp = sv[i];
				sv[i] = sv[j];
				sv[j] = tmp;
			}
		}
	}
}
//Tinh diem trung binh sinh vien theo ID
void TinhDiemTB(sinhvien sv[], int biendem)
{
	string id;
loop:{
		cout << "Nhap ID sinh vien:";
		getline(cin, id);
	 }
	  if (search(sv, id, biendem) == -1) goto loop;
	  int n = search(sv, id, biendem);
	  cout << "Diem trung binh cua sinh vien la:" << sv[n].diemtrungbinh << endl;
}
void TimSV(sinhvien sv[], int biendem)
{
	string id;
loop: {
		cout << "Nhap ID sinh vien:";
		getline(cin, id);
	  }
	  if (search(sv, id, biendem) == -1) goto loop;
	  int n = search(sv, id, biendem);
	  cout << "Ten sinh vien la:" << sv[n].ten << endl;
}
