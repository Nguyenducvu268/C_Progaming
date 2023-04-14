#include <stdio.h>
#include <conio.h>

//EX1. Viet CT nhap vao 2 so nguyen. Tinh and xuat result tong, hieu, tich and thuong 2 so nguyen vua nhap.
void tinhToan() {
	int a, b;
	printf("Nhap vao gia tri cua a: ");
	scanf_s("%d", &a);
	printf("\nNhap vao gia tri cua b: ");
	scanf_s("%d", &b);
	//	Xuat
	printf("Tong cua %d va %d = %d", a, b, a + b);
	printf("\nHieu cua %d va %d = %d", a, b, a - b);
	printf("\nTich cua %d va %d = %d", a, b, a * b);
	printf("\nThuong cua %.0f va %.0f = %.2f", (float)a, (float)b, (float)a / b);
	_getch();
}

//EX2. So thuc duoc nhap vao tu ban phim. In ra phan nguyen cua so thuc va in ra so thuc có 2 chu so thap phan.
void soThuc() {
	float x;
	printf("Nhap so thuc: ");
	scanf_s("%f", &x);

	printf("\nPhan nguyen cua so thuc: %.0f", x);
	printf("\nPhan 2 chu so sau dau phay: %.2f", x);
	_getch();
}

//EX3. Tinh tien khach o trong thang ?
// ? Nhap vào ngày den o khách san, nhap ngày roi khoi khách san. Ngày là mot so
//nguyên >=1 và <=31
// ? Tính tong so ngày khách dã o trong tháng.
// ? Tính tien khách phai tra, biet rang don giá tuan là 650 và don giá ngày là 100.
void tinhTienPhong() {
	int ngayden = 1, ngaydi = 1;
	do {
		if (ngayden < 1 || ngaydi < 1 || ngayden>31 || ngaydi>31 || ngayden > ngaydi) {
			printf("\nThat bai. Nhap ngay khong hop le. Vui long nhap lai.");
		}
		printf("\n\nNhap vao ngay den o khach san: ");
		scanf_s("%d", &ngayden);
		printf("\nNhap vao ngay roi khoi khach san: ");
		scanf_s("%d", &ngaydi);
	} while (ngayden < 1 || ngaydi < 1 || ngayden>31 || ngaydi>31 || ngayden > ngaydi);

	int tongngay = ngaydi - ngayden;
	printf("\nTong ngay khach da o trong thang: %d", tongngay);
	int thanhtien = (tongngay / 7) * 650000 + (tongngay % 7) * 100000;
	printf("\nSo tien khach phai tra: %d VND", thanhtien);
	_getch();
}

//EX4. Nhap nam sinh va tinh tuoi ? 
void age() {
	int namsinh;
	printf("Nhap nam sinh: ");
	scanf_s("%d", &namsinh);
	int age = 2023 - namsinh;
	printf("So tuoi: %d", age);
	_getch();
}

//EX5. Viet chuong trình nhap vào 1 kí tu bat ky. Xuat ra mã ASCII cua ký tu dó.
//Neu ký tu là chu hoa thì bien thành chu thuong và nguoc lai.
void checkKyTu() {
	char n;
	printf("Nhap vao ky tu bat ky: ");
	scanf_s("%c", &n);
	printf("Ma ASCII cua %c la: %d", n, n);
	char hoa = (n >= 97 && n <= 122) ? (n - 32) : (n + 32);
	printf("\nHoa/thuong: %c", hoa);
	_getch();
}

//EX6. Nhap vap 2 so nguyen x,y. Tim Min, Max?
void findMinMax() {
	int x, y;
	printf("Nhap vao gia tri cua x: ");
	scanf_s("%d", &x);
	printf("\nNhap vao gia tri cua y: ");
	scanf_s("%d", &y);
	//	Xu ly
	int Min;
	Min = (x < y) ? x : y;
	int Max;
	Max = (x > y) ? x : y;
	printf("\nMin = %d", Min);
	printf("\nMax = %d", Max);
	_getch();
}

//BT7. Nhap CT and exe de xem result, phan biet su giong nhau va khac nhau cua toan tu 1 ngoi
void toanTu1Ngoi() {
	int i = 100;
	int bieuthuc_1 = 10 + ++i;
	printf("Gia tri tra ve cua bieuthuc_1 = 10 + ++i = %d, voi i = %d", bieuthuc_1, i);
	printf("\nKhoi tao lai gia tri cua i, i = %d", i);
	i = 100;
	int bieuthuc_2 = 10 + i++;
	printf("\nGia tri tra ve cua bieuthuc_2 = 10 + i++ = %d, voi i = %d", bieuthuc_2, i);
	_getch();
}

//EX8. 
void bieuThuc() {
	int i = 3;
	printf("Gia tri cua i la %d", i);
	int bieuthuc = 20 + ++i + i++;
	printf("\nBieu thuc 20 + ++i + i++ co ket qua la %d; i = %d", bieuthuc, i);
}

//Main
int main() {

	tinhToan();
	printf("\n\n");
	printf("---------------------\n\n");
	soThuc();
	printf("\n\n");
	printf("---------------------\n\n");
	tinhTienPhong();
	printf("\n\n");
	printf("---------------------\n\n");
	age();
	printf("\n\n");
	printf("---------------------\n\n");
	checkKyTu();
	printf("\n\n");
	printf("---------------------\n\n");
	findMinMax();
	printf("\n\n");
	printf("---------------------\n\n");
	toanTu1Ngoi();
	printf("\n\n");
	printf("---------------------\n\n");
	bieuThuc();

	_getch();
	return 0;

}