#include <stdio.h>

/*
* 기본 일당은 1만원, 팁은 10만원이다.
* 월급날이면, 사장님의 기분이 좋으면 월급은 일당*일수+팁(원)이고, 아니면 월급은 일당*일수이다.
*/
int main(int argc, char* argv[]) {

	//기본 일당, 팁, 일수
	int dailyPay = 10000;
	int tip = 100000;
	int month = 30;


	//사장님의 기분 : true면 기분 좋음, false면 기분나쁨
	bool ownerState = false;
	//월급날
	bool toDayIsPayDay = false;

	//경우에 따른 pay
	int pay = 0;

	//1. 월급날이 아닐 때 팁 없음
	toDayIsPayDay = false;

	//1-1)(일수*일당)+팁
	if (toDayIsPayDay) {
		if (ownerState) {
			pay = (month * dailyPay) + tip;
		}
	}
	else {
		pay = month * dailyPay;
	}

	printf("1-1) 월급날이 아닐 때 팁추가가 없고, 월급 = (일수 * 일당) + 팁인 경우 월급 : %d원\n", pay);
	//다시 pay 초기화
	pay = 0;

	//1-2) 일수 * (일당 + 팁)
	if (toDayIsPayDay) {
		if (ownerState) {
			pay = month * (dailyPay + tip);
		}
	}
	else {
		pay = month * dailyPay;
	}

	printf("1-1) 월급날이 아닐 때 팁추가가 없고, 월급 = 일수 * (일당 + 팁)인 경우 월급 : %d원\n", pay);
	//다시 pay 초기화
	pay = 0;

	//2. 월급날이고, 사장님 기분이 좋지 않을 때 팁 없음
	toDayIsPayDay = true;
	ownerState = false;

	//2-1)(일수 * 일당) + 팁
	if (toDayIsPayDay) {
		if (ownerState) {
			pay = (month * dailyPay) + tip;
		}
		else {
			pay = month * dailyPay;
		}
	}

	printf("\n2-1) 사장님 기분이 좋지 않아 팁 없고, 월급 = (일수 * 일당) + 팁인 경우 월급 : %d원\n", pay);
	//다시 pay 초기화
	pay = 0;
	
	//2-2)일수 * (일당 + 팁)
	if (toDayIsPayDay) {
		if (ownerState) {
			pay = month * (dailyPay + tip);
		}
		else {
			pay = month * dailyPay;
		}
	}

	printf("2-1) 사장님 기분이 좋지 않아 팁 없고, 월급 = 일수 * (일당 + 팁)인 경우 월급 : %d원\n", pay);
	//다시 pay 초기화
	pay = 0;

	//3. 월급날이고, 사장님 기분이 좋을때
	toDayIsPayDay = true;
	ownerState = true;

	//3-1)(일수 * 일당) + 팁
	if (toDayIsPayDay) {
		if (ownerState) {
			pay = (month * dailyPay) + tip;
		}
		else {
			pay = month * dailyPay;
		}
	}

	printf("\n3-1) 사장님 기분이 좋아 팁이 있고, 월급 = (일수 * 일당) + 팁인 경우 월급 : %d원\n", pay);
	//다시 pay 초기화
	pay = 0;

	//3-2)일수 * (일당 + 팁)
	if (toDayIsPayDay) {
		if (ownerState) {
			pay = month * (dailyPay + tip);
		}
		else {
			pay = month * dailyPay;
		}
	}

	printf("3-2) 사장님 기분이 좋아 팁이 있고, 월급 = 일수 * (일당 + 팁)인 경우 월급 : %d원\n", pay);
}