//
//  150 - Double Time.cpp
//  OnlineJudge
//
//  Created by Tien Do on 2022/1/22.
//

#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

string months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August",
    "September", "October", "November", "December"};  // month starts from 1
string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
int dateOfMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int dateOfYear = 365;

bool isLeafYear(long y, bool old) {
    return old ? !(y%4) : (!(y%4) && y%100) || !(y%400);
}

long getDate(long d, long m, long y, bool old, int *dates) {
    long lastYear = y-1;
    long lastDate = lastYear * 365 + lastYear / 4 + (old ? 0 : (lastYear/400 - lastYear/100));
    return lastDate + dates[m-1] + d - 1 - (old*2);
}

int main() {
    string s;
    int dates[13] = {0};
    int leafDates[13] = {0};
    for (int i=1; i<13; i++) {
        dates[i] = dates[i-1] + dateOfMonth[i-1];
        leafDates[i] = leafDates[i-1] + dateOfMonth[i-1] + (i == 2 ? 1 : 0);
    }
    while (getline(cin, s) && s != "#") {
        stringstream ss(s);
        string d, m;
        long day, date, month, year;
        ss >> d >> date >> m >> year;
        day = find(days, days+7, d) - days;
        month = find(months, months+12, m) - months;
//        assume old style
        long nDate = getDate(date, month, year, true, isLeafYear(year, true) ? leafDates : dates);
//        converted style
        bool old = false;
        if (day == (nDate + 1) % 7) {   // 1 January 0001 is a Saturday
//            old to new
            long dateOfLeafCenturyPeriod = 400 * dateOfYear + 100 - 3;
            year = nDate / dateOfLeafCenturyPeriod * 400;
            nDate %= dateOfLeafCenturyPeriod;
            long dateOfCenturyPeriod = 100 * dateOfYear + 25 - 1;
            year += nDate / dateOfCenturyPeriod * 100;
            nDate %= dateOfCenturyPeriod;
        } else {
//            new to old
            nDate = getDate(date, month, year, false, isLeafYear(year, false) ? leafDates : dates) + 2;
            year = 0;
            old = true;
        }
        int dateOfOneLeafPeriod = 4 * dateOfYear + 1;
        year += nDate / dateOfOneLeafPeriod * 4;
        nDate %= dateOfOneLeafPeriod;
        if (nDate == dateOfYear * 4) {  // leaf year
            year += 3;
            nDate -= dateOfYear * 3;
        } else {
            year += nDate / dateOfYear;
            nDate %= dateOfYear;
        }
        year++; // start from 0001
        int *pDates = isLeafYear(year, old) ? leafDates : dates;
        for (month = 0; month < 12 && pDates[month] <= nDate; month++);
        date = nDate - pDates[month-1] + 1;
        day = (getDate(date, month, year, old, pDates) + 1) % 7;
        cout << days[day] << ' ' << date << (old ? "* " : " ") << months[month] << ' ' << year << endl;
    }
}


