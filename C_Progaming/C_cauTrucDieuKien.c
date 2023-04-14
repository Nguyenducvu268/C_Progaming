#include <stdio.h>
#include <conio.h>
#include <math.h>

//EX1. Tinh tien KARAOKE
	//TH1: Viet CT tinh tien KARAOKE theo gio.
	int tinhTienKARAOKE_TH1(){
		int gioVao=0, gioRa=0;

		do {
			printf("\nNhap gio vao: ");
			scanf_s("%d", &gioVao);
			printf("\nNhap gio ra: ");
			scanf_s("%d", &gioRa);
			if (gioVao < 10 || gioVao > gioRa || gioRa > 24) {
				printf("\nGio vao gio ra khong dung. Yeu cau nhap lai cho dung !");
				//return 0; // ngan k cho CT chay xuong phia duoi.
			}
		} while (gioVao < 10 || gioVao > gioRa || gioRa > 24);
		
		int thanhTien;	
		if (gioRa <= 17){
			thanhTien = (gioRa - gioVao)*20000;
		} else if (gioVao > 17){
			thanhTien = (gioRa - gioVao)*45000;
		} else if (gioVao <= 17 && gioRa > 17) {
			thanhTien = (17 - gioVao)*20000 + (gioRa - 17)*45000;
		}
		printf("\nThanh tien: %d VND", thanhTien);

		_getch();
		return 0;
	}

	//TH2. Viet CT tinh tien KARAOKE theo gio va phut.
	int tinhTienKARAOKE_TH2() {
		int gioVao, phutVao, gioRa, phutRa;
		printf("Nhap gio vao, phut vao: ");
		scanf_s("%d%d", &gioVao, &phutVao);

		printf("\nNhap gio ra, phut ra: ");
		scanf_s("%d%d", &gioRa, &phutRa);

		if (gioVao > gioRa || gioVao < 10 || gioRa > 24 || phutVao < 0 || phutVao > 59 || phutRa < 0 || phutVao > 59) {
			printf("\nGio giac khong hop le. Ket thuc !");
			return 0;
		}

		float tongGioPhutVao = (float)gioVao + (float)phutVao / 60.0;
		float tongGioPhutRa = (float)gioRa + (float)phutRa / 60.0;

		float thanhTien;
		if (gioRa < 17) {
			thanhTien = (tongGioPhutVao - tongGioPhutRa) * 20000.0;
		}
		else if (gioVao >= 17) {
			thanhTien = (tongGioPhutVao - tongGioPhutRa) * 45000.0;
		}
		else if (gioVao < 17 && gioRa >= 17) {
			thanhTien = (17 - tongGioPhutVao) * 20000.0 + (tongGioPhutRa - 17) * 45000.0;
		}

		int tongGioSuDung = gioRa - gioVao;
		int tongPhutSuDung = phutRa - phutVao;
		if (phutRa < phutVao) {
			tongPhutSuDung += 60;
			tongGioSuDung--;
		}
		printf("\nTong gio giac su dung: %dh%d'", tongGioSuDung, tongPhutSuDung);
		printf("\nTong tien thanh toan: %.1f VND", thanhTien);

		_getch();
		return 0;
	}

//EX2. Viet chuong trình tính tien dien su dung trong tháng:
//Tu 1 – 100KW: 5$
//Tu 101 – 150KW: 7$
//Tu 151 – 200KW: 10$
//Tu 201 – 300KW: 15$
//Tu 300KW tro lên: 20$
int tinhTienDien() {
	int kW;
	printf("Nhap so kW: ");
	scanf_s("%d", &kW);

	if (kW <= 0) {
		printf("\nSo kW khong co. That bai.");
		return 0;
	}

	int tienDien;

	if (kW >= 1 && kW <= 100) {
		tienDien = kW * 5;
	}
	else if (kW >= 101 && kW <= 150) {
		tienDien = 100 * 5 + (kW - 100) * 7;
	}
	else if (kW >= 151 && kW <= 200) {
		tienDien = 100 * 5 + 50 * 7 + (kW - 150) * 10;
	}
	else if (kW >= 201 && kW <= 300) {
		tienDien = 100 * 5 + 50 * 7 + 50 * 10 + (kW - 200) * 15;
	}
	else {
		tienDien = 100 * 5 + 50 * 7 + 50 * 10 + 100 * 15 + (kW - 300) * 20;
	}

	printf("\nTong tien dien phai thanh toan = %d$", tienDien);

	_getch();
	return 0;
}

//EX3. Giai phuong trình bac 2: ax^2 + bx + c = 0
int PTbac2() {
	double a, b, c;
	printf("Nhap gia tri cua a: ");
	scanf_s("%lf", &a);
	printf("\nNhap gia tri cua b: ");
	scanf_s("%lf", &b);
	printf("\nNhap gia tri cua c: ");
	scanf_s("%lf", &c);

	if (a == 0) {
		printf("\nPT khong phai PT bac 2. That bai.");
		return 0;
	}

	double denta = pow(b, 2) - 4 * a * c;
	if (denta > 0) {
		double x1 = (-b + sqrt(denta)) / 2 * a;
		double x2 = (-b - sqrt(denta)) / 2 * a;
		printf("\nPT co 2 nghiem: %.1lf va %.1lf", x1, x2);
	}
	else if (denta == 0) {
		double x = -b / 2 * a;
		printf("\nPT co 1 nghiem kep: x = %.1lf", x);
	}
	else {
		printf("\nPT không có nghiem thuc, chi có nghiem ao.");
	}
	_getch();
	return 0;
}

//EX4. Nhap vào 3 so nguyên a, b,c. In ra màn hình so nguyên lon nhat và nho nhat.
int findMinMax() {
	int a, b, c;
	printf("/nNhap gia tri cua a: ");
	scanf_s("%d", &a);
	printf("/nNhap gia tri cua b: ");
	scanf_s("%d", &b);
	printf("/nNhap gia tri cua c: ");
	scanf_s("%d", &c);

	int MIN = a, MAX = a;

	if (b > MAX) {
		MAX = b;
	}

	if (c > MAX) {
		MAX = c;
	}

	if (b < MIN) {
		MIN = b;
	}

	if (c < MIN) {
		MIN = c;
	}

	printf("\nMIN = %d", MIN);
	printf("\nMAX = %d", MAX);

	_getch();
	return 0;

}

//EX5. Viet chuong trình nhap vào 1 ký tu, cho biet kí tu này có là ký tu nguyên âm hay không
int checkKyTuNguyenAm() {
	char kytu;
	printf("Nhap ky tu bat ky: ");
	scanf_s("%c", &kytu);

	switch (kytu) {
	case 'a': {
		printf("%c la ky tu nguyen am.", kytu);
		break;
	}
	case 'e': {
		printf("%c la ky tu nguyen am.", kytu);
		break;
	}
	case 'i': {
		printf("%c la ky tu nguyen am.", kytu);
		break;
	}
	case 'o': {
		printf("%c la ky tu nguyen am.", kytu);
		break;
	}
	case 'u': {
		printf("%c la ky tu nguyen am.", kytu);
		break;
	}
	default:
		printf("%c khong phai la ky tu nguyen am.", kytu);
		break;
	}
	_getch();
	return 0;
}

//EX6. Nhap vào thu tu cua tháng, cho biet tháng dó có bao nhiêu ngày.
int checkSoNgayCuaThang() {
	int month;
	printf("Nhap vao thang: ");
	scanf_s("%d", &month);

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: {
		printf("\nThang %d co 31 ngay.", month);
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11: {
		printf("\nThang %d co 30 ngay.", month);
		break;
	}
	case 2: {
		printf("\nThang %d co 28 or 29 ngay.", month);
		break;
	}
	default:
		printf("Thang khong hop le.");
		break;
	}
	_getch();
	return 0;
}

//EX7. Nhap vào 1 so bat ky (0->9), cho biet cách doc so vua nhap.
int cachDoc() {
	int num;
	printf("Nhap vao so bat ky: ");
	scanf_s("%d", &num);

	switch (num) {
	case 0: {
		printf("Khong");
		break;
	}
	case 1: {
		printf("Mot");
		break;
	}
	case 2: {
		printf("Hai");
		break;
	}
	case 3: {
		printf("Ba");
		break;
	}
	case 4: {
		printf("Bon");
		break;
	}
	case 5: {
		printf("Nam");
		break;
	}
	case 6: {
		printf("Sau");
		break;
	}
	case 7: {
		printf("Bay");
		break;
	}
	case 8: {
		printf("Tam");
		break;
	}
	case 9: {
		printf("Chin");
		break;
	}
	default:
		printf("So khong hop le. Vui long nhap lai.");
		break;
	}
	_getch();
	return 0;
}

//EX8. Tinh chu vi, dien tich cua mot trong cac hinh ben duoi (nguoi dung chon hinh).
#define PI 3.14
int tinhChuViDienTich() {
	int loaiHinh;
	printf("Chon loai hinh: ");
	scanf_s("%d", &loaiHinh);

	float chuVi, dienTich;
	float a, b;
	switch (loaiHinh) {
	case 1: {
		printf("\nNhap canh hinh vuong: ");
		scanf_s("%f", &a);
		chuVi = a * 4.0;
		dienTich = pow(a, 2);
		printf("\nChu vi hinh vuong = %.1f", chuVi);
		printf("\nDien tich hinh vuong = %.1f", dienTich);
		break;
	}
	case 2: {
		//			int a,b;
		printf("\nNhap chieu dai hcn: ");
		scanf_s("%f", &a);
		printf("\nNhap chieu rong hcn: ");
		scanf_s("%f", &b);
		chuVi = (a + b) * 2;
		dienTich = a * b;
		printf("\nChu vi hinh hcn = %.1f", chuVi);
		printf("\nDien tich hinh hcn = %.1f", dienTich);
		break;
	}
	case 3: {
		float r;
		printf("\nNhap ban kinh r = ");
		scanf_s("%f", &r);
		chuVi = 2 * r * PI;
		dienTich = PI * pow(r, 2);
		printf("\nChu vi hinh tron = %.1f", chuVi);
		printf("\nDien tich hinh tron = %.1f", dienTich);
		break;
	}
	default:
		printf("\nKhong co gia tri nao hop le. Ket thuc CT.");
		break;
	}
	_getch();
	return 0;
}

//EX9. Viet chuong trình tính giá tri tuyet doi cua 1 so nhap vào, (không dùng thu vien math.h)
int tinhGiaTriTuyetDoi() {
	double x;
	printf("Nhap x = ");
	scanf_s("%lf", &x);

	printf("|x| = %.2lf", (x > 0) ? x : -x);

	_getch();
	return 0;
}

//EX10. Viet chuong trình nhap vào 3 canh cua 1 tam giác và kiem tra xem 3 canh dó có dúng cua tam giác hay không?
//(Goi ý: Goi ba canh tam giác có do lon là a, b, c. Truoc tiên phai dam bao ba canh a, b, c deu duong, sau dó moi tien hành kiem tra tiep. 
//Neu xay ra dong thoi ba dieu kien (a + b > c) && (a + c > b) && (b + c > a) thì ket luan ba canh lap thành mot tam giác. 
//Neu không thì ba canh a, b, c không lap thành tam giác.)
int check3CanhCua1TamGiac() {
	double a, b, c;
	printf("Nhap vao 3 canh: ");
	printf("\nNhap canh a = ");
	scanf_s("%lf", &a);
	printf("\nNhap canh b = ");
	scanf_s("%lf", &b);
	printf("\nNhap canh c = ");
	scanf_s("%lf", &c);

	if (a < 0 || b < 0 || c < 0) {
		printf("Do dai 3 canh khong duoc be hon 0. Nhap lai.");
		return 0;
	}

	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		printf("3 canh lap thanh duoc 1 tam giac");
	}
	else {
		printf("\nError. 3 canh khong lap thanh duoc 1 tam giac.");
	}

	_getch();
	return 0;
}

//EX11. Viet chuong trình trình bày kha nang cua máy tính cua ban.

#include <stdio.h>
#include <conio.h>

int mayTinh() {
	char kytu;
	printf("Nhap ky tu bat ky: ");
	scanf_s("%c", &kytu);

	switch (kytu) {
	case 'A':
	case 'a': {
		printf("\nAda");
		break;
	}
	case 'B':
	case 'b': {
		printf("\nBasic");
		break;
	}
	case 'C':
	case 'c': {
		printf("\nCOBOL");
		break;
	}
	case 'D':
	case 'd': {
		printf("\ndBASE III");
		break;
	}
	case 'F':
	case 'f': {
		printf("\nFortran");
		break;
	}
	case 'P':
	case 'p': {
		printf("\nPascal");
		break;
	}
	case 'V':
	case 'v': {
		printf("\nVisual C++");
		break;
	}
	default:
		printf("\nKhong co ngon ngu lap trinh tuong ung.");
		break;
	}
	_getch();
	return 0;
}



//Main
int main() {

	tinhTienKARAOKE_TH1();
	printf("\n");
	tinhTienKARAOKE_TH2();
	printf("\n\n");
	printf("---------------------\n\n");

	tinhTienDien();
	printf("\n\n");
	printf("---------------------\n\n");

	PTbac2();
	printf("\n\n");
	printf("---------------------\n\n");

	findMinMax();
	printf("\n\n");
	printf("---------------------\n\n");

	checkKyTuNguyenAm();
	printf("\n\n");
	printf("---------------------\n\n");

	checkSoNgayCuaThang();
	printf("\n\n");
	printf("---------------------\n\n");

	cachDoc();
	printf("\n\n");
	printf("---------------------\n\n");

	tinhChuViDienTich();
	printf("\n\n");
	printf("---------------------\n\n");

	tinhGiaTriTuyetDoi();
	printf("\n\n");
	printf("---------------------\n\n");

	check3CanhCua1TamGiac();
	printf("\n\n");
	printf("---------------------\n\n");

	mayTinh();
	printf("\n\n");
	printf("---------------------\n\n");

	_getch();
	return 0;
}
