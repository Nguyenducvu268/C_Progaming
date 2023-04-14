#include <stdio.h>
#include <conio.h>
#include <math.h>

//EX1. Viet chuong trình nhap vào so thuc. In ra phan nguyên cua so thuc dó.
void checkPhanNguyen() {
	float x;
	printf("Nhap vao gia tri cua x: ");
	scanf_s("%f", &x);
	printf("\nx = %.0f", x);
	_getch();
}

//EX2.
void Ex2() {
	int a, b;
	printf("Nhap vao gia tri a va b: ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("\nThuong cua a/b = %f", ((float)a / (float)b));
	printf("\nLam tron thuong: %.0f", ((float)a / (float)b));
	printf("\nIn thuong voi mot so thap phan: %.1f", ((float)a / (float)b));
}

//EX3. 
void thuePhong() {
	printf("Tinnh tien thue phong");
	printf("\n---------------");
	int giatuan = 500000, giangay = 100000;
	printf("\nDon gia tuan: %d. Don gia ngay: %d", giatuan, giangay);
	int songaythue;
	printf("\nNhap vao tong so ngay thue phong: ");
	scanf_s("%d", &songaythue);

	int sotuan = songaythue / 7;
	int songay = songaythue % 7;
	printf("\nSo tuan ma khach thue: %d, so ngay khach thue: %d", sotuan, songay);
	int tongtien = sotuan * giatuan + songay * giangay;

	printf("\nTien phai tra: %d", tongtien);
	_getch();
}

//EX4. Viet chuong trình de tính tien sân bóng dá nhu sau:
//– Tính tien gio dua vào gio vào và gio ra. Moi gio là 200000
//– Tính tien nuoc uong dua vào so bình nuoc dã uong. Moi bình nuoc 20000
//– Tính tong tien: tien gio + tien nuoc uong.
void tinhTienSan() {
	int giovao, giora;
	printf("Nhap gio vao: ");
	scanf_s("%d", &giovao);
	printf("\nNhap gio ra: ");
	scanf_s("%d", &giora);
	int tiengio = (giora - giovao) * 200000;
	printf("\nTong tien gio: %d", tiengio);
	int nuoc;
	printf("\nNhap so binh nuoc da uong: ");
	scanf_s("%d", &nuoc);
	int tiennuoc = nuoc * 20000;
	printf("\nTong tien nuoc: %d", tiennuoc);
	int tongtien = tiengio + tiennuoc;
	printf("\nTong tien phai tra: %d", tongtien);
	_getch();
}

//EX5. Nhap tuoi cua 1 nguoi. In ra nam sinh cua nguoi dó.
void namSinh() {
	int age;
	printf("Nhap vao tuoi: ");
	scanf_s("%d", &age);
	int namsinh = 2023 - age;
	printf("\nNam sinh: %d", namsinh);
	_getch();
}

//EX6. Nhap vào 1 ký tu. Kiem tra xem ký tu dó là: chu hoa, chu thuong hay ký tu khác.
void checkKyTu() {
	char kytu;
	printf("Nhap ky tu: ");
	scanf_s("%c", &kytu);
	printf("\nMa ASCII cua %c la: %d", kytu, kytu);
	//	Xu ly
	if (kytu >= 0 && kytu <= 256) {
		if (kytu >= 65 && kytu <= 90) {
			printf("\n%c la chu in hoa.", kytu);
		}
		else if (kytu >= 97 && kytu <= 122) {
			printf("\n%c la chu thuong.", kytu);
		}
		else {
			printf("\n%c la ky tu khac.", kytu);
		}
	}
	else {
		printf("\nKy tu khong ton tai!");
	}
}

//EX7. Nhap 3 so nguyen. Tim Min va Max cua 3 so do.

int find() {
	int x, y, z;
	printf("Nhap vao x = ");
	scanf_s("%d", &x);
	printf("Nhap vao y = ");
	scanf_s("%d", &y);
	printf("Nhap vao z = ");
	scanf_s("%d", &z);

	int Max = x;
	if (y > Max) {
		Max = y;
	}
	if (z > Max) {
		Max = z;
	}
	
	int Min = x;
	if (y < Min) {
		Min = y;
	}
	if (z < Min) {
		Min = z;
	}
	printf("\nMax = %d", Max);
	printf("\nMin = %d", Min);

	_getch();
	return 0;

}

//EX8. Nhap nam sinh. Tinh tuoi tuong ung.
void age() {
	int namsinh;
	printf("Nhap nam sinh: ");
	scanf_s("%d", &namsinh);
	int age = 2023 - namsinh;
	printf("\nTuoi : %d", age);
	if (age >= 18) {
		printf("\nDu tuoi di lam.");
	}
	else {
		printf("\nCon tuoi di hoc.");
	}
	_getch();
}

//EX9. Viet CT tinh bieu thuc.
void tinhToan() {
	int x;
	printf("Nhap gia tri cua x: ");
	scanf_s("%d", &x);
	float bieuthuc = (3 * pow(x, 2) + 4 * x + 5) / (2 * x + 1);
	printf("\nGia tri cua bieu thuc tren = %.2f", bieuthuc);
	_getch();
}

//EX10.

int EX10() {
	float x;
	printf("Nhap vao gia tri cua x: ");
	scanf_s("%f", &x);
	printf("\nPhan nguyen duoc lam tron: %.0f", x);
	printf("\nIn ra x voi 2 so thap phan: %.2f", x);
	int y = (int)x;
	float haiSoSauDauPhay = (x - y) * 100;
	printf("\nIn ra 2 so thap phan sau dau phay: %.0f", haiSoSauDauPhay);
	int tong = (int)x + haiSoSauDauPhay;
	printf("\nTong phan nguyen va 2 so thap phan lien sau dau . cua so thuc: %d", tong);
	_getch();
	return 0;
}

//EX11. 
int EX11() {
	printf("Name:\tNguyen Van A");
	printf("\nBirth:\t20/10/2000");
	printf("\nPhone:\t0123467899");
	_getch();
	return 0;
}

//EX12.
void EX12() {
	char name[100];
	int quantity, price;
	printf("Nhap ten san pham: ");
	scanf_s("%s", &name, 100);
	printf("\nNhap so luong: ");
	scanf_s("%d", &quantity);
	printf("\nNhap don gia san pham: ");
	scanf_s("%d", &price);
	int tien = quantity * price;
	printf("\nTien phai tra: %d", tien);
	float thue = 0.1 * (float)tien;
	printf("\nTien thue: %.2f", thue);
	_getch();
}

//EX13.
int EX13() {
	float toan, ly, hoa;
	printf("Nhap diem thi mon Toan: ");
	scanf_s("%f", &toan);
	printf("\nNhap diem thi mon Ly: ");
	scanf_s("%f", &ly);
	printf("\nNhap diem thi mon Hoa: ");
	scanf_s("%f", &hoa);
	float tb = (toan + ly + hoa) / 3;
	printf("\nDiem trung binh 3 mon: %.2f", tb);
	_getch();
	return 0;
}

//EX14. 
int EX14() {
	int a, b;
	printf("Nhap vao canh a: ");
	scanf_s("%d", &a);
	printf("Nhap vao canh b: ");
	scanf_s("%d", &b);
	int chuvi = (a + b) * 2;
	printf("\nChu vi hcn = %d", chuvi);
	int dientich = a * b;
	printf("\nDientich hcn = %d", dientich);
	float duongcheo = (float)sqrt(pow(a, 2) + pow(b, 2));
	printf("\nDuong cheo cua hcn = %.2f", duongcheo);
	_getch();
	return 0;
}

//EX15.
int chuCaiTiengAnh() {
	char n;
	printf("Nhap vao ky tu bat ky: ");
	scanf_s("%c", &n);
	printf("\nMa ASCII cua %c la %d", n, n);
	//	Xu ly
	if (n >= 0 && n <= 256) {
		if (n >= 97 && n <= 122) {
			printf("\n%c nam trong 26 chu cai tieng Anh.");
		}
		else {
			printf("\n%c khong nam trong 26 chu cai tieng Anh.");
		}
	}
	else {
		printf("\nKhong co ky tu hop le.");
	}
	_getch();
	return 0;
}

//EX16.
int PTbacNhat() {
	printf("Gia pt bac nhat: ax + b = 0.");
	printf("\n--------------");
	int a, b;
	printf("\nNhap vao a = ");
	scanf_s("%d", &a);
	printf("\nNhap vao b = ");
	scanf_s("%d", &b);

	if (a == 0) {
		if (b == 0) {
			printf("\nPT vo so nghiem.");
		}
		else if (b != 0) {
			printf("\nPT vo nghiem.");
		}
	}
	else {
		float x = (float)(-b / a);
		printf("\nNghiem cua pt %d*x + %d = 0 la x = %.2f", a, b, x);
	}
	_getch();
	return 0;
}

//Main
int main() {

	checkPhanNguyen();
	printf("\n\n");
	printf("---------------------\n\n");

	Ex2();
	printf("\n\n");
	printf("---------------------\n\n");

	thuePhong();
	printf("\n\n");
	printf("---------------------\n\n");

	tinhTienSan();
	printf("\n\n");
	printf("---------------------\n\n");

	namSinh();
	printf("\n\n");
	printf("---------------------\n\n");

	checkKyTu();
	printf("\n\n");
	printf("---------------------\n\n");

	find();
	printf("\n\n");
	printf("---------------------\n\n");

	age();
	printf("\n\n");
	printf("---------------------\n\n");

	tinhToan();
	printf("\n\n");
	printf("---------------------\n\n");

	EX10();
	printf("\n\n");
	printf("---------------------\n\n");

	EX11();
	printf("\n\n");
	printf("---------------------\n\n");

	EX12();
	printf("\n\n");
	printf("---------------------\n\n");

	EX13();
	printf("\n\n");
	printf("---------------------\n\n");

	EX14();
	printf("\n\n");
	printf("---------------------\n\n");

	chuCaiTiengAnh();
	printf("\n\n");
	printf("---------------------\n\n");

	PTbacNhat();
	printf("\n\n");
	printf("---------------------\n\n");

	_getch();
	return 0;

}