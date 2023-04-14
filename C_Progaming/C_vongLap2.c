#include <stdio.h>
#include <conio.h>
#include <math.h>

//EX15. Nhap n>=0. Tinh T(n) = 1x2x3x...xn.
int Tn() {
	int n;
	printf("Nhap n = ");
	scanf_s("%d", &n);

	int Tn = 1;
	for (int i = 1; i <= n; i++) {
		Tn *= i;
	}
	printf("\nResult T(n) = %d", Tn);
	_getch();
	return 0;
}

//EX16. Nhap n>=0. Tinh S(n) = 1 + 1x2 + 1x2x3 + ... + 1x2x3x...xn.
int Sn() {
	int n;
	printf("Nhap n = ");
	scanf_s("%d", &n);

	int T = 1, Sn = 0;
	for (int i = 1; i <= n; i++) {
		T *= i;
		Sn += T;
	}
	printf("\nResult S(n) = %d", Sn);
	_getch();
	return 0;
}

//EX17. Nhap x,n. Tinh T(x,n) = x^n.
int Txn(){
	int x;
	printf("Nhap x = ");
	scanf_s("%d", &x);
	int n;
	printf("\nNhap n = ");
	scanf_s("%d", &n);

	int T = pow(x, n);
	printf("\nResutl T(x,n) = %d", T);
	_getch();
	return 0;
}

//EX18. Nhap x,n. Tinh T(x,n) = x + x^2 + x^3 + ... + x^n.
int Sxn() {
	int x;
	printf("Nhap x = ");
	scanf_s("%d", &x);
	int n;
	printf("\nNhap n = ");
	scanf_s("%d", &n);

	int S = 0, T;
	for (int i = 1; i <= n; i++) {
		T = pow(x, i);
		S += T;
	}
	printf("\nResutl S(x,n) = %d", S);
	_getch();
	return 0;
}

//EX19. Nhap x,n. Tinh S(x,n) = -x + x^2 - x^3 + ... + (-1)^n*x^n.
int EX19() {
	int x;
	printf("Nhap x = ");
	scanf_s("%d", &x);
	int n;
	printf("\nNhap n = ");
	scanf_s("%d", &n);

	int S = 0;
	for (int i = 1; i <= n; i++) {
		S += (pow(-1, i) * pow(x, i));
	}
	printf("\nResutl S(x,n) = %d", S);
	_getch();
	return 0;
}

//EX20.Nhap x, n.Tinh S(x, n) = x - x^2 + x^3 - x^4 + ... + (-1)^n-1*x^n.
int EX20() {
	int x;
	printf("Nhap x = ");
	scanf_s("%d", &x);
	int n;
	printf("\nNhap n = ");
	scanf_s("%d", &n);

	int S = 0;
	for (int i = 1; i <= n; i++) {
		S += (pow(-1, (i-1)) * pow(x, i));
	}
	printf("\nResutl S(x,n) = %d", S);
	_getch();
	return 0;
}

//EX21.Viết chương trình kiểm tra xem n có phải là số nguyên tố hay không.
//Biết rằng số nguyên tố nguyên lớn hơn 2 là số chỉ có 2 ước là 1 và chính nó.
int checkSoNguyenTo() {
	int n;
	printf("Nhap vao n = ");
	scanf_s("%d", &n);

	if (n <= 1) {
		printf("\n%d <= 1 nen %d chac chan khong phai la so nguyen to.", n, n);
		return 0;
	}

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			printf("\n%d khong la so nguyen to", n);
			return 0;
		}
	}
	printf("\n%d la so nguyen to", n);
	_getch();
	return 0;
}

//EX22. Viet CT cho biet trong so nguyen n co bao nhieu chu so?
int checkSoChuSo() {
	int n;
	printf("Nhap vao n = ");
	scanf_s("%d", &n);
	
	int temp = n;
	int count = 0;
	if (n == 0) {
		count = 1;
	}
	while (n != 0) {
		n = n / 10;
		count++;
	}
	printf("\nVay %d la so co %d chu so", temp, count);
	_getch();
	return 0;
}

//EX23.Viết chương trình tìm bội chung nhỏ nhất(BCNN) của 2 số nguyên dương a và b nhập vào từ bàn phím.
//Biết rằng BCNN(a, b) = a * b / UCLN(a, b)
int findBCNN() {
	int a, b;
	printf("Nhap vao a va b = ");
	scanf_s("%d%d", &a, &b);

	int a2 = a, b2 = b;
	while (b != 0) {
		int value = b;
		b = a % b;
		a = value;
	}

	int UCLN = a;
	printf("\nUCNL cua %d va %d = %d", a2, b2, UCLN);
	int BCNN = (a2 * b2) / UCLN;
	printf("\nBCNN cua %d va %d = %d", a2, b2, BCNN);
	_getch();
	return 0;
	 
	/*int a, b;
	printf("Nhap vao a = ");
	scanf_s("%d", &a);
	printf("Nhap vao b = ");
	scanf_s("%d", &b);

	int UCLN = a;
	if (a == b) {
		UCLN = a = b;
		printf("\nUCLN = %d", UCLN);
		return 0;
	}
	if (a > b && a % b == 0) {
		UCLN = a;
		printf("\nUCLN = %d", UCLN);
		return 0;
	}
	if (a < b && b%a == 0) {
		UCLN = b;
		printf("\nUCLN = %d", UCLN);
		return 0;
	}
	if (a > b && a%b != 0) {
		int soDu = a % b;
		for (int i = soDu; i < b; i++) {
			int phepChia = b % i;
			if (phepChia != 0) {
				b = i;
				i = phepChia;
				phepChia = b % i;
				if (phepChia == 0) {
					UCLN = i;
				}
			}
			else {
				UCLN = i;
			}
		}
	}
	if (a < b && b%a != 0) {
		int soDu = b%a;
		for (int i = soDu; i < a; i++) {
			int phepChia = a % i;
			if (phepChia == 0) {
				UCLN = i;
			}
			else {
				UCLN = 1;
			}
		}
	}

	printf("\nUCLN = %d", UCLN);
	int BCNN = (a * b) / UCLN;
	_getch();
	return 0;*/
}

//EX24.Viết chương trình tính tổng các số tự nhiên nhỏ hơn n(sử dụng vòng lặp While)
int tinhTong() {
	int n;
	printf("Nhap vao n = ");
	scanf_s("%d", &n);

	int i = 0, S = 0;
	while (i < n) {
		S += i;
		i++;
	}
	printf("\nTong cac so tu nhien be hon %d = %d", n, S);
	_getch();
	return 0;
}

//EX25.An gửi số tiền là n USD vào ngân hàng. An muốn số tiền của mình sẽ bằng hoặc lớn hơn 1000USD. 
//Giúp An viết chương trình tính số tháng cần gửi vào ngân hàng để tổng tiền vốn lẫn tiền lãi sẽ lớn hơn 1000USD. 
//Biết lãi suất 0.7%/ tháng và số tiền vốn n được nhập từ bàn phím.
int tienGuiNganHang() {
	double tienVon;
	printf("Nhap vao tien von ban dau = ");
	scanf_s("%lf", &tienVon);

	double tongTien=0;
	int countMonth = 0;
	while (tongTien < 1000) {
		tongTien = tienVon * (1+0.7);
		tienVon = tongTien;
		countMonth++;
	}
	printf("\nSo thang can gui vao ngân hàng đe tong tien von lan tien lai sẽ lon hon 1000USD la: %d", countMonth);
	_getch();
	return 0;
}

//EX26.Viết chương trình cho phép nhập một số nguyên từ bàn phím.
//Việc nhập kết thúc khi người dùng nhập vào giá trị 0. Hiển thị tổng các số vừa nhập.
int nhapVaoSoNguyen() {
	int k;
	int S = 0;
	do {
		printf("Nhap vao k = ");
		scanf_s("%d", &k);
		S += k;
	}
	while (k != 0);
	printf("\nTong cac so vua nhap = %d", S);
	_getch();
	return 0;
}

//EX27.Kiểm tra số nguyên dương n có các chữ số toàn là chữ số chẵn hay không ?
int checkChuSoChan() {
	int n;
	printf("Nhap value n = ");
	scanf_s("%d", &n);

	if (n <= 0) {
		printf("\nThat bai. %d khong phai la so nguyen duong.", n);
		return 0;
	}

	int value = n;
	int check = n;
	if (n > 0) {
		if (n % 2 != 0) {
			printf("\nSo nguyên duong %d co cac chu so KHONG toan la chu so chan.", value);
			return 0;
		}
		else {
			while (check != 0) {
				check = n / 10;
				n = check;
				printf("\n%d", check);
				if (check % 2 != 0) {
					printf("\nSo nguyên duong %d co cac chu so KHONG toan la chu so chan.", value);
					return 0;
				}
			}
		}
	}
	printf("\nSo nguyên duong %d co cac chu so TOAN la chu so chan.", value);
	_getch();
	return 0;
}

//EX28.Kiểm tra số nguyên dương n có các chữ số giảm dần từ trái qua phải hay không ?
int checkChuSoGiamDan() {
	int n;
	printf("Nhap value n = ");
	scanf_s("%d", &n);

	if (n <= 0) {
		printf("\nThat bai. %d khong phai la so nguyen duong.", n);
		return 0;
	}

	int value = n;
	if (n > 0) {
		while (n != 0) {
			int check_1 = n % 10;
			printf("\n%d", check_1);
			n = n / 10;
			int check_2 = n % 10;
			//printf("\n%d", check_2);
			if (check_1 > check_2 && check_1 != 0 && check_2 != 0) {
				printf("\nSo nguyen duong %d KHONG co cac chu so giam dan tu trai qua phai.", value);
				return 0;
			}
		}
	}
	printf("\nSo nguyen duong %d CO cac chu so giam dan tu trai qua phai.", value);
	_getch();
	return 0;
}

//EX29.Nhập n > 0. Tìm số nguyên dương m lớn nhất sao cho 1 + 2 + 3 + ... + m < n.
int Find_m() {
	int n;
	do {
		printf("\nNhap vao n = ");
		scanf_s("%d", &n);
		if (n <= 0) {
			printf("\nCT that bai, n phải la so nguyen duong. Vui long nhap lai.");
			//return 0;
		}
	} while (n <= 0);

	int countNumber = 0;
	int S = 0;
	int i = 1;
	while (S < n) {
		S += i;
		printf("\n%d", S);
		i++;
		countNumber++;
	}
	int m = countNumber - 1;
	printf("\nVay so nguyen duong lon nhat thoa man dieu kien la m = %d", m);
	_getch();
	return 0;
}

//EX30. Xuất số đảo của số nguyên dương n.
int soDaoNguoc() {
	int n;
	do {
		printf("\nNhap vao n = ");
		scanf_s("%d", &n);
		if (n <= 0) {
			printf("\nCT that bai, n phải la so nguyen duong. Vui long nhap lai.");
			//return 0;
		}
	} while (n <= 0);

	int temp = n;
	while (n != 0) {
		int phanDu = n % 10;
		printf("%d", phanDu);
		n = n / 10;
	}
	_getch();
	return 0;
}

//EX31. Viết chương trình C kiểm tra 1 số có phải là số Amstrong hay không ?
// --------------------------
//Giải thích:
//Số Armstrong(hay còn được gọi là số narcissistic) là một loại số tự mãn, trong đó mỗi chữ số của số đó được đưa lên bình phương và 
//cộng lại với nhau để tạo thành số mới.Nếu số mới này bằng chính số ban đầu, thì số đó được gọi là số Armstrong.Ví dụ :
//Số 153 là số Armstrong vì : 1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 1 + 125 + 27 = 153
//Số 371 là số Armstrong vì : 3 ^ 3 + 7 ^ 3 + 1 ^ 3 = 27 + 343 + 1 = 371
int checkSoArmstrong() {
	int t;
	printf("Nhap vao t = ");
	scanf_s("%d", &t);

	int temp = t;
	int checkSoAr = 0;
	int countNum = 0;
	while (t != 0) {
		countNum++;
		t = t / 10;
	}
	t = temp;
	while (t != 0) {
		int check = t % 10;
		checkSoAr += pow(check, countNum);
		t = t / 10;
	}
	if (temp == checkSoAr) {
		printf("\n%d CHINH la so Armstrong", temp);
		return 0;
	}
	printf("\n%d KHONG la so Armstrong", temp);
	_getch();
	return 0;
}

//EX32. Viết chương trình C kiểm tra 1 số có phải là số Hoàn hảo hay không ?
// --------------------------
//Giải thích:
//Số hoàn hảo là một loại số tự nhiên, trong đó tổng các ước số dương của số đó(trừ chính nó) bằng chính số đó.
//Ví dụ, số 6 là một số hoàn hảo, vì:
//Các ước số dương của 6 là : 1, 2, 3.
//Tổng các ước số dương của 6 (trừ chính nó) là : 1 + 2 + 3 = 6.
//Một số hoàn hảo khác là số 28 :
//Các ước số dương của 28 là : 1, 2, 4, 7, 14.
//Tổng các ước số dương của 28 (trừ chính nó) là : 1 + 2 + 4 + 7 + 14 = 28.
int checkSoHoanHao() {
	int a;
	printf("Nhap value a = ");
	scanf_s("%d", &a);

	int S = 0;
	for (int i=1; i < a; i++) {
		if (a % i == 0) {
			S += i;
		}
	}
	if (a == S) {
		printf("\n%d CHINH la so Hoan hao.", a);
		return 0;
	}
	printf("\n%d KHONG phai la so Hoan hao.", a);
	_getch();
	return 0;
}




//Main
int main() {

	Tn();
	printf("\n\n");
	printf("---------------------\n\n");

	Sn();
	printf("\n\n");
	printf("---------------------\n\n");

	Txn();
	printf("\n\n");
	printf("---------------------\n\n");

	Sxn();
	printf("\n\n");
	printf("---------------------\n\n");

	EX19();
	printf("\n\n");
	printf("---------------------\n\n");

	EX20();
	printf("\n\n");
	printf("---------------------\n\n");

	checkSoNguyenTo();
	printf("\n\n");
	printf("---------------------\n\n");

	checkSoChuSo();
	printf("\n\n");
	printf("---------------------\n\n");

	findBCNN();
	printf("\n\n");
	printf("---------------------\n\n");

	tinhTong();
	printf("\n\n");
	printf("---------------------\n\n");

	tienGuiNganHang();
	printf("\n\n");
	printf("---------------------\n\n");

	nhapVaoSoNguyen();
	printf("\n\n");
	printf("---------------------\n\n");

	checkChuSoChan();
	printf("\n\n");
	printf("---------------------\n\n");

	checkChuSoGiamDan();
	printf("\n\n");
	printf("---------------------\n\n");

	Find_m();
	printf("\n\n");
	printf("---------------------\n\n");

	soDaoNguoc();
	printf("\n\n");
	printf("---------------------\n\n");

	checkSoArmstrong();
	printf("\n\n");
	printf("---------------------\n\n");

	checkSoHoanHao();
	printf("\n\n");
	printf("---------------------\n\n");

	_getch();
	return 0;
}
