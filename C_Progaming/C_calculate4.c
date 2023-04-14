#include <stdio.h>
#include <conio.h>
#include <math.h>

//EX1. Nhap mot so thuc. V� du so thuc duoc nhap l�: 1.567
//� In ra phan nguy�n cua so thuc duoc l�m tr�n (in ra 2).
//� In so thuc voi 2 so thap ph�n (in ra 1.57)
//� In 2 so thap ph�n sau dau . cua so thuc (in ra 56)
//� T�nh tong phan nguy�n v� 2 so thap ph�n lien sau dau . cua so thuc.
//- In phan nguy�n cua so thuc voi format 5 digits.
//- In phan nguy�n cua so thuc doy digits 10 digits voi so 0.
int checkSoThuc() {
	float x = 1.845725;
	printf("Phan nguyen duoc lam tron: %.0f", x);
	printf("\nSo thuc voi 2 so thap phan: %.2f", x);
	int y = (int)x;
	float ketQua = (float)(x - y) * 100;
	printf("\nIn 2 so thap phan sau dau . cua so thuc: %.0f", ketQua);
	int tong = (int)x + (int)ketQua;
	printf("\nTong phan nguy�n v� 2 so thap ph�n lien sau dau . cua so thuc: %d", tong);
	printf("\nIn phan nguy�n cua so thuc voi format 5 digits: [%5d]", (int)x);
	printf("\nIn phan nguy�n cua so thuc doy digits 10 digits voi so 0: %010d", (int)x);
	printf("\nIn phan nguy�n cua so thuc doy digits 10 digits voi so 0: %010d", 57);
	printf("\nIn phan nguy�n cua so thuc doy digits 10 digits voi so 0: %010d", 4557);
	_getch();
	return 0;
}

//EX2. Nhap t�n san pham, so luong v� don gi�. T�nh tien v� thue gi� tri gia tang phai tra,
//biet:
//Tien = so luong * don gi�
//Thue gi� tri gia tang = 10% tien
int tinhTienSanPham() {
	char name[100];
	int soluong, dongia;

	printf("Nhap vao ten san pham: ");
	scanf_s("%s", &name, 100);

	printf("\nNhap vao so luong: ");
	scanf_s("%d", &soluong);

	printf("\nNhap vao dongia: ");
	scanf_s("%d", &dongia);

	int tien = soluong * dongia;
	float VAT = (float)tien * 0.1;
	printf("\nTong tien phai tra = %10d", tien);
	printf("\nVAT = %10.1f", VAT);

	_getch();
	return 0;
}

//EX3. Nhap diem thi v� he so 3 m�n To�n, L�, H�a cua mot sinh vi�n. T�nh diem trung
//b�nh cua sinh vi�n d�.
int diemTrungBinh() {
	char title[100];
	float diemToan, diemLy, diemHoa;
	int heso;

	printf("Dien title: ");
	scanf_s("%s", &title, 100);

	printf("\nNhap vao diem Toan: ");
	scanf_s("%f", &diemToan);

	printf("\nNhap vao diem Ly: ");
	scanf_s("%f", &diemLy);

	printf("\nNhap vao diem Hoa: ");
	scanf_s("%f", &diemHoa);

	printf("\nNhap vao he so: ");
	scanf_s("%d", &heso);

	float tb = ((diemToan + diemLy + diemHoa) * (float)heso) / (float)(3 * heso);
	printf_s("\nDiem trung binh = %.1f", tb);

	_getch();
	return 0;
}

//EX4. Viet CT tinh cac bieu thuc. 
int EX4() {
	const double M_PI = 3.14;
	double x;
	printf("Nhap gia tri cua x: ");
	scanf_s("%lf", &x);

	int y1 = 2 * pow(x, 3) + 5 * pow(x, 2) + 7 * x + 15;
	printf("Bieu thuc y1 = %d", y1);

	double y2 = pow(sin(x), 2) + pow(cos(2 * x), 2) + pow(tan(3 * x), 3);
	printf("\nBieu thuc y2 = %lf", y2);

	double y3 = pow((x + 10), (x + 5));
	printf("\nBieu thuc y3 = %lf", y3);

	double y4 = exp(cos(x * M_PI / 180.0 + 1));
	printf("\nBieu thuc y4 = %lf", y4);

	double y5 = log(x + 100);
	printf("\nln(y5) = %lf", y5);

	_getch();
	return 0;
}

//EX5. Viet chuong tr�nh nhap v�o 2 so a, b. Ho�n doi gi� tri 2 so v� in ra m�n h�nh.
int hoanDoi() {
	int a = 10, b = 100;
	int result = a;
	a = b;
	b = result;
	printf("a = %d va b = %d", a, b);
	_getch();
	return 0;
}

//EX6. Viet chuong tr�nh cho nhap v�o so nguy�n duong N. Xuat ra chu so h�ng tram, chuc, don vi cua so ay.
int xuatSoNguyenDuong() {
	long n;
	printf("Nhao vao so nguyen n: ");
	scanf_s("%d", &n);
	long phantram = (n % 1000 - n % 100) * 0.01;
	printf("\nChu so hang tram cua n la: %ld", phantram);

	long phanchuc = (n % 100 - n % 10) * 0.1;
	printf("\nChu so hang chuc cua n la: %ld", phanchuc);

	long phandonvi = n % 10;
	printf("\nChu so hang tram cua n la: %ld", phandonvi);

	_getch();
	return 0;
}

//EX7. Viet chuong tr�nh nhap v�o so nguy�n duong N c� 3 chu so. Xuat ra chu so dao nguoc cua N.
//Goi �: Nhap v�o: 348 -> Xuat ra 843. Nhap v�o 100 -> Xuat ra 1.
int daoNguoc() {
	int x;
	printf("Nhap vao x = ");
	scanf_s("%d", &x);

	int x1 = x / 100; //x
	int x2 = x % 100 - x % 10; //xx
	int x3 = (x % 10) * 100; //xxx

	int soDaoNguoc = x3 + x2 + x1;
	printf("\nSo dao nguoc cua %d la %d", x, soDaoNguoc);

	_getch();
	return 0;
}

//EX8. Viet chuong tr�nh cho nhap v�o mot so nguy�n duong. D�ng to�n tu dieu kien (<dk>?<true>:<false>) de x�c dinh so d� l� chan hay le.
int checkChanLe() {
	char check[100];
	printf("Title: ");
	scanf_s("%s", &check, 100);

	int n;
	printf("\nNhap gia tri x = ");
	scanf_s("%d", &n);

	printf("\nn la so %s", (n % 2 == 0) ? "chan" : "le");

	_getch();
	return 0;
}

//EX9. Viet chuong tr�nh nhap v�o 2 so a, b. T�m so lon nhat giua 2 so.
int findMax() {
	int a, b;
	printf("Nhap vao a = ");
	scanf_s("%d", &a);
	printf("\nNhap vao b = ");
	scanf_s("%d", &b);

	int max = (a > b) ? a : b;
	int min = (a > b) ? b : a;

	printf("\nMax = %d", max);
	printf("\nMin = %d", min);

	_getch();
	return 0;
}

//EX10. Viet chuong tr�nh nhap v�o so nguy�n, kiem tra so d� nhap l� so �m hay so duong
int checkAmDuong() {
	int x;
	printf("Nhap vao so nguyen x = ");
	scanf_s("%d", &x);

	printf("\n%d la so %s", x, (x > 0) ? "duong" : "am");
	_getch();
	return 0;
}

//EX11. Viet chuong tr�nh nhap v�o 2 so a,b. Kiem tra a c� l� boi so cua b kh�ng.
int boiSo() {
	int a, b;
	printf("Nhap a = ");
	scanf_s("%d", &a);
	printf("Nhap b = ");
	scanf_s("%d", &b);

	printf("a co la boi so cua b hay khong ? Tra loi: %s", (a % b == 0) ? "Co" : "Khong");

	_getch();
	return 0;
}

//EX12. Viet chuong tr�nh nhap v�o don gi� 1 mat h�ng, v� so luong b�n cua mat
//h�ng. T�nh tien kh�ch phai tra, voi th�ng tin nhu sau:
//Th�nh tien: don gi� * so luong
//Giam gi�: Neu th�nh tien > 100, th� giam 3% th�nh ti�n, nguoc lai kh�ng
//giam
//Tong tien phai tra: th�nh tien � giam gi�.
int tinhTienHang() {
	long dongia;
	printf("Nhap don gia san pham: ");
	scanf_s("%ld", &dongia);

	int soluong;
	printf("\nNhap so luong san pham: ");
	scanf_s("%d", &soluong);

	long thanhTien = dongia * (long)soluong;
	printf("\nThanh tien: %ld", thanhTien);

	if (thanhTien > 100) {
		float giamGia, tongTien;
		giamGia = (float)thanhTien * 0.03;
		printf("\nGiam gia: %.1f", giamGia);
		tongTien = (float)thanhTien - giamGia;
		printf("\nTong tien: %.1f", tongTien);
	}
	else {
		float giamGia, tongTien;
		printf("\nKhong co giam gia.");
		tongTien = (float)thanhTien;
		printf("\nTong tien: %.1f", tongTien);
	}

	_getch();
	return 0;
}

//EX13. Nhap diem cua sinh vi�n, t�nh diem trung b�nh theo he so tuong ung:
//- To�n, Van, Anh he so 3
//- L�, Ho�, Sinh he so 2
//- Su, �ia he so 1
//Sau khi c� diem trung b�nh, xep loai cho sinh vi�n v� in diem trung b�nh - xep loai ra m�n h�nh:
//- diem > 9.0 xuat sac
//- diem > 8.0 gioi
//- diem > 6.5 kh�
//- diem > 5.0 trung b�nh
//- c�n lai yeu
int diemTrungBinhCuaSinhVien() {
	int toan, van, anh, ly, hoa, sinh, su, dia;
	printf("Nhap diem toan: ");
	scanf_s("%d", &toan);

	printf("\nNhap diem van: ");
	scanf_s("%d", &van);

	printf("\nNhap diem anh: ");
	scanf_s("%d", &anh);

	printf("\nNhap diem ly: ");
	scanf_s("%d", &ly);

	printf("\nNhap diem hoa: ");
	scanf_s("%d", &hoa);

	printf("\nNhap diem sinh: ");
	scanf_s("%d", &sinh);

	printf("\nNhap diem su: ");
	scanf_s("%d", &su);

	printf("\nNhap diem dia: ");
	scanf_s("%d", &dia);

	float tb = ((float)(toan + van + anh) * 3 + (float)(ly + hoa + sinh) * 2 + (float)(su + dia) * 1) / 17;
	printf("\n--------------------");
	printf("\nDiem trung binh: %.2f", tb);

	if (tb >= 0 && tb <= 10) {
		if (tb > 9.0) {
			printf("\nXep loai: Xuat sac.");
		}
		else if (tb > 8.0) {
			printf("\nXep loai: Gioi.");
		}
		else if (tb > 6.5) {
			printf("\nXep loai: Kha.");
		}
		else if (tb > 5.0) {
			printf("\nXep loai: Trung binh.");
		}
		else {
			printf("\nXep loai: Yeu.");
		}
	}
	else {
		printf("\nDiem khong hop le !");
	}

	_getch();
	return 0;
}





int main() {

	checkSoThuc();
	printf("\n\n");
	printf("---------------------\n\n");

	tinhTienSanPham();
	printf("\n\n");
	printf("---------------------\n\n");

	diemTrungBinh();
	printf("\n\n");
	printf("---------------------\n\n");

	EX4();
	printf("\n\n");
	printf("---------------------\n\n");

	hoanDoi();
	printf("\n\n");
	printf("---------------------\n\n");

	xuatSoNguyenDuong();
	printf("\n\n");
	printf("---------------------\n\n");

	daoNguoc();
	printf("\n\n");
	printf("---------------------\n\n");

	checkChanLe();
	printf("\n\n");
	printf("---------------------\n\n");

	findMax();
	printf("\n\n");
	printf("---------------------\n\n");

	checkAmDuong();
	printf("\n\n");
	printf("---------------------\n\n");

	boiSo();
	printf("\n\n");
	printf("---------------------\n\n");

	tinhTienHang();
	printf("\n\n");
	printf("---------------------\n\n");
	
	diemTrungBinhCuaSinhVien();
	printf("\n\n");
	printf("---------------------\n\n");

	_getch();
	return 0;
}