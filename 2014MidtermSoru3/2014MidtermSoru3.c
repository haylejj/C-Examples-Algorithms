#include <stdio.h>
#include <stdlib.h>



void yasHesapla(int,int,int,int,int,int);

int main(void) {
	
	int birtday_day,birtday_month,birtday_year,now_day,now_month,now_year;
	
	printf("\n Dogum gununuzu giriniz->>>>\n");
	scanf("%d%d%d",&birtday_day,&birtday_month,&birtday_year);
	printf("\n Bugunun tarihini giriniz->>>>\n");
	scanf("%d%d%d",&now_day,&now_month,&now_year);
	
	yasHesapla(birtday_day,birtday_month,birtday_year,now_day,now_month,now_year);
	
	return 0;
}
void yasHesapla(int birtdayDay,int birtdayMonth,int birtdayYear,int nowDay,int nowMonth,int nowYear){
	
	if(birtdayDay>nowDay){
		nowMonth=nowMonth-1;
		nowDay=nowDay+30;
	}
	
	if(birtdayMonth>nowMonth){
		nowYear=nowYear-1;
		nowMonth=nowMonth+12;
	}
	
	int calculateDay=nowDay-birtdayDay;
	int calculateMonth=nowMonth-birtdayMonth;
	int calculateYear=nowYear-birtdayYear;
	
	printf("%d yil %d ay %d gun",calculateYear,calculateMonth,calculateDay);
}