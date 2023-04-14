#include <stdio.h>
#include <conio.h>
#include <math.h>

//Ex1. Viet chuong tr�nh C khai b�o 2 so a, b. T�nh tong, hieu, t�ch, thuong 2 so v� in ra m�n h�nh.
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

//Ex2. Viet chuong tr�nh C bien doi do C (Celsius) th�nh do F (Fahrenheit). Goi �: 1 C = 33.8 F
int bienDoiNhietDo() {
	int c;
	printf("Nhap vao gia tri do C: ");
	scanf_s("%d", &c);
	float f = 33.8 * (float)c;
	printf("%d do C = %.2f do F.", c, f);
	_getch();
	return 0;
}

//Ex3. Viet chuong tr�nh C t�nh tuoi khi biet nam sinh. Goi �: Khai b�o hang so nam hien tai.
int age() {
	const int namhientai = 2023;
	int namsinh;
	printf("Nhap vao nam sinh: ");
	scanf_s("%d", &namsinh);
	int age = namhientai - namsinh;
	printf("\nSo tuoi: %d", age);
	_getch();
	return 0;
}

//Ex4. Viet chuong tr�nh t�nh Chu vi v� dien t�ch h�nh tr�n khi biet b�n k�nh. Goi �: Khai b�o hang so PI.
int hinhTron() {
	const float PI = 3.14;
	float r;
	printf("Nhap ban kinh: ");
	scanf_s("%f", &r);
	float chuvi = r * 2 * PI;
	printf("\nChu vi hinh tron: %f", chuvi);
	float dientich = pow(r, 2) * PI;
	printf("\nDien tich hinh tron: %f", dientich);
	_getch();
	return 0;
}


//Main
int main() {

	tinhToan();
	printf("\n\n");
	printf("---------------------\n\n");

	bienDoiNhietDo();
	printf("\n\n");
	printf("---------------------\n\n");

	age();
	printf("\n\n");
	printf("---------------------\n\n");

	hinhTron();
	printf("\n\n");
	printf("---------------------\n\n");

	_getch();
	return 0;\

}