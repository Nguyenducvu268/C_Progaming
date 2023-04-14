#include <stdio.h>
#include <conio.h>
#include <math.h>

//Ex1. Viet chuong trình C khai báo 2 so a, b. Tính tong, hieu, tích, thuong 2 so và in ra màn hình.
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

//Ex2. Viet chuong trình C bien doi do C (Celsius) thành do F (Fahrenheit). Goi ý: 1 C = 33.8 F
int bienDoiNhietDo() {
	int c;
	printf("Nhap vao gia tri do C: ");
	scanf_s("%d", &c);
	float f = 33.8 * (float)c;
	printf("%d do C = %.2f do F.", c, f);
	_getch();
	return 0;
}

//Ex3. Viet chuong trình C tính tuoi khi biet nam sinh. Goi ý: Khai báo hang so nam hien tai.
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

//Ex4. Viet chuong trình tính Chu vi và dien tích hình tròn khi biet bán kính. Goi ý: Khai báo hang so PI.
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