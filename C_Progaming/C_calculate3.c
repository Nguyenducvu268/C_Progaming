#include <stdio.h>
#include <conio.h>
#include <math.h>

//EX1. Viet chuong trình doi 1 so luong giây thành format thoi gian “gio:phut:giay”
//Ví du 4238 giây = 1:10:38
int changeGioPhutGiay() {
	int time = 3749;
	int hour = time / 3600;
	printf("So gio: %d", hour);
	int phanDu = time % 3600;
	int min = phanDu / 60;
	printf("\nSo phut: %d", min);
	int sec = phanDu % 60;
	printf("\nSo giay: : %d", sec);
	printf("\n-------------");
	printf("\n%dgiay = %dgio:%dphut:%dgiay", time, hour, min, sec);
	_getch();
	return 0;
}

//EX2. Viet chuong trình nhap và cong 3 so.
int cong3So() {
	int a, b, c;
	printf("Nhap vao 3 so a, b, c: ");
	scanf_s("%d%d%d", &a, &b, &c);
	int tong = a + b + c;
	printf("\nTong 3 so %d+%d+%d = %d.", a, b, c, tong);
	_getch();
	return 0;
}

//EX3. Viet chuong trình tính giá tra bieu thuc: 
//f(x) = 3ab + 5a/2 - 9b. Viei a, b nhap tu bàn phím.
int EX2() {
	float a, b;
	printf("Nhap vao gia tri cua a va b: ");
	scanf_s("%f%f", &a, &b);
	float bieuthuc = 3 * a * b + (5 * a) / 2 - 9 * b;
	printf("\nGia tri cua bieu thuc: 3ab + 5a/2 - 9b la: %.1f", bieuthuc);
	_getch();
	return 0;
}

//EX4. Viet chuong trình tính dien tích và chu vi hình chu nhat. Voi chieu dài, rong nhap tu bàn phím.
int hinhChuNhat() {
	int x, y;
	printf("Nhap vao chieu dai va chieu rong: ");
	scanf_s("%d%d", &x, &y);
	int chuvi = (x + y) * 2;
	printf("\nChu vi cua HCN = %d", chuvi);
	int dientich = x * y;
	printf("\nDien tich cua HCN = %d", dientich);
	_getch();
	return 0;
}

//EX5. Viet chuong trình tính luong thuc lãnh cua mot nhân viên theo công thuc:
//Luong co ban : $ 12000
//DA : 12% luong co ban
//HRA : $150
//TA : $120
//Các muc khác : $450
//Thue :
//PF :14% luong co ban và IT: 15% luong co ban
//Luong thuc lãnh = Luong co ban + DA + HRA + TA + Các m?c khác - (PF + IT)
int luongNhanVien() {
	float luongcoban = 12000;
	float DA = 0.12 * luongcoban;
	float HRA = 150;
	float TA = 120;
	float cacMucKhac = 450;
	float PF = 0.14 * 12000;
	float IT = 0.15 * 12000;
	float luongThucLanh = luongcoban + DA + HRA + TA + cacMucKhac - (PF + IT);
	printf("Luong thuc lanh cua nhan vien = %.0f$", luongThucLanh);
	_getch();
	return 0;
}

//EX6.
void EX6()
{
	int a = 5, b = 6, c = 7;
	printf("int a = 5, b = 6, c = 7;\n");
	printf("The value of a > b is \t%i\n\n", a > b);
	printf("The value of b < c is \t%i\n\n", b < c);
	printf("The value of a + b >= c is \t%i\n\n", a + b >= c);
	printf("The value of a - b <= b - c is \t%i\n\n", a - b <= b - c);
	printf("The value of b-a == b - c is \t%i\n\n", b - a == b - c);
	printf("The value of a*b != c * c is \t%i\n\n", a * b < c* c);
	printf("Result of a>10 && b<5 = %d\n\n", a > 10 && b < 5);
	printf("Result of a > 100 || b < 50 = %d\n\n", a > 100 || b < 50);
}

//EX7. Viet chuong trình gioi phuong trình bac nhat: ax+b = 0 (a, b là so nguyên; x là so thuc).
int PTbacNhat() {
	printf("Gia pt bac nhat: ax + b = 0.");
	printf("\n--------------");
	int a, b;
	printf("\nNhap vao gia tri a va b: ");
	scanf_s("%d%d", &a, &b);
	if (a == 0) {
		if (b == 0) {
			printf("\nPT vo so nghiem");
		}
		else if (b != 0) {
			printf("\nPT vo nghiem");
		}
	}
	else {
		float x = (float)-b / a;
		printf("\nPT co nghiem x = %.2f", x);
	}
	_getch();
	return 0;
}

//EX8. Viet chuong trình de tính tien sân bóng dá nhu sau:
//– Tính tien gio dua vào gio vào và gio ra. Moi gio là 200000
//– Tính tien nuoc uong dua vào so bình nuoc dã uong. Moi bình nuoc 20000
//– Tính tong tien: tien gio + tien nuoc uong.
int tinhTienSan() {
	int gioVao;
	printf("Nhap gio vao: ");
	scanf_s("%d", &gioVao);

	int gioRa;
	printf("\nNhap gio ra: ");
	scanf_s("%d", &gioRa);

	int tienGio = (gioRa - gioVao) * 200000;
	printf("\nTong tien gio = %d", tienGio);

	int binhNuoc;
	printf("\nNhap vao so binh nuoc da uong: ");
	scanf_s("%d", &binhNuoc);

	int tienNuoc = binhNuoc * 20000;
	printf("\nTong tien nuoc = %d", tienNuoc);

	int tongTien = tienGio + tienNuoc;
	printf("\nTong tien phai thanh toan = %d", tongTien);

	_getch();
	return 0;
}

//EX9. Nhap vào 1 ký tu. Kim tra xem ký tu dó là: chu hoa, chu thuong hay ký tu khác.
int checkKyTu() {
	char kytu;
	printf("Nhap ky tu bat ky: ");
	scanf_s("%c", &kytu);
	printf("\nMa ASCII cua %c la %d", kytu, kytu);

	if (kytu >= 0 && kytu <= 256) {
		if (kytu >= 65 && kytu <= 90) {
			printf("\n%c la chu in hoa.", kytu);
		}
		else if (kytu >= 97 && kytu <= 122) {
			printf("\n%c la chu thuong.", kytu);
		}
	}
	else {
		printf("\nKy tu khong ton tai!");
	}
	_getch();
	return 0;
}

//EX10. Viet CT tinh bieu thuc.
int EX10() {
	int x;
	printf("Nhap gia tri cua x: ");
	scanf_s("%d", &x);
	float bieuthuc = (3 * pow(x, 2) + 4 * (float)x + 5) / (2 * (float)x + 1);
	printf("\nGia tri cua bieu thuc tren = %.2f", bieuthuc);
	_getch();
	return 0;
}




int main() {

	changeGioPhutGiay();
	printf("\n\n");
	printf("---------------------\n\n");

	cong3So();
	printf("\n\n");
	printf("---------------------\n\n");

	EX2();
	printf("\n\n");
	printf("---------------------\n\n");

	hinhChuNhat();
	printf("\n\n");
	printf("---------------------\n\n");

	luongNhanVien();
	printf("\n\n");
	printf("---------------------\n\n");

	EX6();
	printf("\n\n");
	printf("---------------------\n\n");

	PTbacNhat();
	printf("\n\n");
	printf("---------------------\n\n");

	tinhTienSan();
	printf("\n\n");
	printf("---------------------\n\n");

	checkKyTu();
	printf("\n\n");
	printf("---------------------\n\n");

	EX10();
	printf("\n\n");
	printf("---------------------\n\n");

	_getch();
	return 0;
}