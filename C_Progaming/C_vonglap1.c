#include <stdio.h>
#include <conio.h>
#include <math.h>

//EX1. Viet chuong trình in ra dãy so 100, 95, 90, 85, ....., 5.
int daySo() {
	int n;
	printf("Nhap n = ");
	scanf_s("%d", &n);

	int i;
	for (i = n; i >= 5; i -= 5) {
		printf("\n%d", i);
	}
	_getch();
	return 0;
}

//EX2. Nhap vào hai so num1 và num2. Tìm tong cua tat ca các so le nam giua hai so dã duoc nhap.
int tongCacSoLe() {
	int num1, num2;
	printf("Nhap num1 = ");
	scanf_s("%d", &num1);
	printf("\nNhap num2 = ");
	scanf_s("%d", &num2);

	if (num2 < num1) {
		printf("\nCT khong hop le.");
		return 0;
	}

	int T = 0;
	int i;
	for (i = num1; i <= num2; i++) {
		if (i % 2 != 0) {
			T += i;
		}
	}
	printf("\nTong all cac so le tu %d den %d = %d", num1, num2, T);

	_getch();
	return 0;
}

//EX3. Viet chuong trình in ra chuoi Fibonacci (1, 1, 2, 3, 5, 8, 13,...)
int Fibonacci() {
	printf("Chuoi Fibonacci: \n------------------------\n");
	int x = 1, y = 1;
	printf("%d, %d, ", x, y);

	int next;
	int i;
	for (i = 1; i > 0; i++) {
		next = x + y;
		printf("%d, ", next);
		x = y;
		y = next;
		if (i == 25) break;
	}

	_getch();
	return 0;
}

//EX4a. Viet chuong trình de hien thi theo mau duoi dây:
//	1
//	12
//	123
//	1234
//	12345
int EX4a() {
	int n = 5;
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	_getch();
	return 0;
}

//EX4b. Viet chuong trình de hien thi theo mau duoi dây:
//	12345
//	1234
//	123
//	12
//	1
int EX4b() {
	int n = 5;
	int i, j;
	for (i = n; i > 0; i--) {
		for (j = 1; j <= i; j++) {
			printf("%d", j);
			//			return 0; --> dung ngay lan lap dau tien
		}
		printf("\n");
		//		return 0; --> dung ngay lan lap dau tien
	}

	_getch();
	return 0;
}

//EX5. Viet chuong trình in lên màn hình nhu sau:
//*******
//******
//*****
//****
//***
//**
//*
int EX5() {
	int n = 7;
	int i, j;
	for (i = n; i > 0; i--) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	_getch();
	return 0;
}

//EX6. Viet chuong trình tính giai thua cua mot so nhap tu bàn phím.
int tinhGiaiThua() {
	long n;
	printf("Nhap n = ");
	scanf_s("%ld", &n);

	long i;	
	long T = 1;
	for (i = 1; i <= n; i++) {
		T *= i;
	}
	printf("Giai thua cua %ld = %ld", n, T);
	_getch();
	return 0;
}

//EX7.  Viet chuong trình in bang cuu chuong cua mot so nhap tu bàn phím.
int bangCuuChuong() {
	int k;
	printf("Nhap k = ");
	scanf_s("%d", &k);

	printf("\nBang cuu chuong cua %d: ", k);

	int i;
	for (i = 1; i <= 10; i++) {
		int result = k * i;
		printf("\n%d x %d = %d", k, i, result);
	}
	_getch();
	return 0;
}

//EX8. Viet chuong trình tính tong: S = 2 + 4 + 6 + 8 +....+ 20.
int EX8() {
	int S = 0;
	int i;
	for (i = 2; i <= 20; i++) {
		if (i % 2 == 0) {
			S += i;
		}
	}
	printf("Tong S = %d", S);
	_getch();
	return 0;
}

//EX9. Viet chuong trình tính tong: 1*2 + 2*3+ 3*4 + 4*5 +.....+ n(n+1).
int EX9() {
	int n;
	printf("Nhap n = ");
	scanf_s("%d", &n);

	int tong = 0;
	int i;
	for (i = 1; i <= n; i++) {
		tong += i * (i + 1);
	}
	printf("Tong bieu thuc = %d", tong);
	_getch();
	return 0;
}

//EX10. Viet chuong trình tính tong. 1/(1.2.3) + 1/(2.3.4) + 1/(3.4.5) + ... + 1/n(n+1)(n+2).
int EX10() {
	int t;
	printf("Nhap t = ");
	scanf_s("%d", &t);

	float S = 0;
	int i;
	for (i = 1; i <= t; i++) {
		S += 1 / (float)(i * (i + 1) * (i + 2));
	}
	printf("\nTong S = %.2f", S);

	_getch();
	return 0;
}

//EX11. Nhap n>=0. Tính S(n)=1-2+3-4+ ... +((-1)^(n-1))n.
int EX11() {
	int n;
	printf("Nhap n = ");
	scanf_s("%d", &n);

	int S = 0;
	int i;
	for (i = 1; i <= n; i++) {
		S += (pow(-1, (i - 1))) * i;
	}
	printf("\nTong S = %d", S);
	_getch();
	return 0;
}

//EX12. Nhap n>=0. Tinh bieu thuc: S(n) = 1/(1x2) + 1/(2x3) + ... + 1/(n(n+1)).
int EX12() {
	int n;
	printf("Nhap vao n = ");
	scanf_s("%d", &n);

	int i;
	double Sn = 0;
	for (i = 1; i <= n; i++) {
		Sn += 1 / (double)(i * (i + 1));
	}
	printf("\nResult S(n) = %.2lf", Sn);

	_getch();
	return 0;
}

//EX13. Nhap n>=0. Tinh S(n) = 1/2 + 2/3 + ... + n/(n+1).
int EX13() {
	int n;
	printf("Nhap vao n = ");
	scanf_s("%d", &n);

	int i;
	double S = 0;
	for (i = 0; i <= n; i++) {
		S += (double)i / ((double)i + 1);
	}
	printf("\nTong Sn = %.2lf", S);
	_getch();
	return 0;
}

//EX14. Nhap k>=0. Tính Sk = 1/2 + 3/4 + ... + (2k+1)/(2k+2).
int EX14() {
	int n;
	printf("Nhap value n = ");
	scanf_s("%d", &n);

	float S = 0;
	int i;
	for (i = 1; i <= n; i++) {
		S += (2 * (float)i + 1) / (2 * (float)i + 2);
		printf("\n%d", i);
	}
	printf("\n%f", S);
	_getch();
	return 0;
}


//Main
int main() {

	daySo();
	printf("\n\n");
	printf("---------------------\n\n");

	tongCacSoLe();
	printf("\n\n");
	printf("---------------------\n\n");

	Fibonacci();
	printf("\n\n");
	printf("---------------------\n\n");

	EX4a();
	printf("\n\n");
	printf("---------------------\n\n");

	EX4b();
	printf("\n\n");
	printf("---------------------\n\n");

	EX5();
	printf("\n\n");
	printf("---------------------\n\n");

	tinhGiaiThua();
	printf("\n\n");
	printf("---------------------\n\n");

	bangCuuChuong();
	printf("\n\n");
	printf("---------------------\n\n");

	EX8();
	printf("\n\n");
	printf("---------------------\n\n");

	EX9();
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

	_getch();
	return 0;
}







