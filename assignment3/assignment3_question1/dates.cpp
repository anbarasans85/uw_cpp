#include"dates.h"

void print_date(const struct Date &arg_date)
{
	std::cout << "Date is:" << arg_date.year << "/" << arg_date.month << "/" << arg_date.day << std::endl;

	return;
}

int check_month_end(const struct Date &arg_date)
{
	if(arg_date.day <= 27) {
		return 0;
	} else if(arg_date.day <30 && arg_date.month != 2) {
		return 0;
	} else if(arg_date.month == 1 || arg_date.month == 3 || arg_date.month == 5 || arg_date.month == 7 || arg_date.month == 8 || arg_date.month == 10) {
		if(arg_date.day == 30) {
			return 0;
		} else if(arg_date.day == 31) {
			return 1;
		}
	} else if(arg_date.month == 2) {
		if(((arg_date.year%4) == 0) && (arg_date.day == 28)) {
			return 0;
		} else {
			return 2;
		}
	} else if(arg_date.day == 30 && (arg_date.month == 4 || arg_date.month == 6 || arg_date.month == 9 || arg_date.month == 11) ) {
		return 3;
	} else if(arg_date.month == 12) {
		if(arg_date.day == 30) {
			return 0;
		} else if(arg_date.day == 31) {
			return 4;
		}
	}

	return -1;
}

void add_day(struct Date &arg_date)
{
	int action=0;
	//std::cout << "Add date..." << std::endl;
	action=check_month_end(arg_date);
	if(action==0) {
		arg_date.day++;
	} else if(action==1) {
		arg_date.month++;
		arg_date.day=1;
	} else if(action==2) {
		arg_date.month=3;
		arg_date.day=1;
	} else if(action==3) {
		arg_date.month++;
		arg_date.day=1;
	} else if(action==4) {
		arg_date.year++;
		arg_date.month=1;
		arg_date.day=1;
	} else {
		std::cout << "add_day something wrong." << arg_date.year << arg_date.month << arg_date.day << std::endl;
	}
		
	return;
}
void add_month(struct Date &arg_date)
{
	int action=0;
	//std::cout << "Add month..." << std::endl;
	action=check_month_end(arg_date);
	if(action==0) {
		if(arg_date.month == 12) {
			arg_date.year++;
			arg_date.month=1;
		} else {
			arg_date.month++;
		}
	} else if(action==1) {
		if(arg_date.month == 1) {
			if(arg_date.year%4 == 0) {
				arg_date.month++;
				arg_date.day=29;
			} else {
				arg_date.month++;
				arg_date.day=28;
			}
		} else {
			arg_date.month++;
			arg_date.day=30;
		}
	} else if(action==2) {
				arg_date.month++;
	} else if(action==3) {
				arg_date.month++;
	} else if(action==4) {
		arg_date.year++;
		arg_date.month=1;
	} else {
		std::cout << "add_month something wrong." << arg_date.year << arg_date.month << arg_date.day << std::endl;
	}
		
	return;
}

void add_year(struct Date &arg_date)
{
	//std::cout << "Add year..." << std::endl;
	if(arg_date.month == 2) {
		if(arg_date.day <= 28) {
			;
		} else if(arg_date.day == 29) {
			arg_date.year++;
			arg_date.day=28;
		}
	} else {
			arg_date.year++;
	}
	return ;
}

std::string days(const struct Date arg_date)
{
	int days_count=0;
	int day_of_the_week;
	struct Date start_date;
	std::string day;

	start_date.year=2012;
	start_date.month=1;
	start_date.day=1;

	while(!(arg_date.year==start_date.year && arg_date.month == start_date.month && arg_date.day == start_date.day)) {
		days_count++;
		add_day(start_date);
//		std::cout << "days: " << start_date.year << start_date.month << start_date.day << std::endl;
	}

	day_of_the_week=first_day+(days_count%7);
	switch(day_of_the_week) {
		case 1:
			day="Sunday";
			break;
		case 2:
			day="Monday";
			break;
		case 3:
			day="Tuesday";
			break;
		case 4:
			day="Wednesday";
			break;
		case 5:
			day="Thursday";
			break;
		case 6:
			day="Friday";
			break;
		case 7:
			day="Saturday";
			break;
	}

	return day;
}

void next_monday(struct Date &arg_date)
{
	std::string temp_string("Monday");
	while(temp_string.compare(days(arg_date))) {
		std::cout << "days: " << arg_date.year << arg_date.month << arg_date.day << std::endl;
		add_day(arg_date);
	}
}
