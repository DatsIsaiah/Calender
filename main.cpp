#include <iostream>
using namespace std;

int main() {

    float month, date, year;
    cin  >> month;
    cin >> date;
    cin >> year;

//error if above or below real months

if (month > 12){
        cout << "Invalid date" << endl;
        return 1;
    }
if (month <= 0){
        cout << "Invalid date" << endl;
        return 1;
    }

//months

    if (month == 1) {
    if (date < 0 || date > 31) {
    cout << "Invalid date" << endl;
    return 1;
    }
    cout << "January " << date;
     }

    if (month == 2) {
    if (date < 0 || date > 28) {
    cout << "Invalid date" << endl;
    return 1;
    }
    cout << "February " << date;
     }

    if (month == 3) {
    if (date < 0 || date > 31) {
    cout << "Invalid date" << endl;
    return 1;
    }
    cout << "March " << date;
     }

 if (month == 4) {
    if (date < 0 || date > 30) {
    cout << "Invalid date" << endl;
    return 1;
    }
    cout << "April " << date;
     }

 if (month == 5) {
    if (date < 0 || date > 31) {
    cout << "Invalid date" << endl;
    return 1;
    }
    cout << "May " << date;
     }

 if (month == 6) {
    if (date < 0 || date > 30) {
    cout << "Invalid date" << endl;
    return 1;
    }
    cout << "June " << date;
     }

 if (month == 7) {
    if (date < 0 || date > 31) {
    cout << "Invalid date" << endl;
    return 1;
    }
    cout << "July " << date;
     }

 if (month == 8) {
    if (date < 0 || date > 31) {
    cout << "Invalid date" << endl;
    return 1;
    }
    cout << "August " << date;
     }

 if (month == 9) {
    if (date < 0 || date > 30) {
    cout << "Invalid date" << endl;
    return 1;
    }
    cout << "September " << date;
     }

 if (month == 10) {
    if (date < 0 || date > 31) {
    cout << "Invalid date" << endl;
    return 1;
    }
    cout << "October " << date;
     }

 if (month == 11) {
    if (date < 0 || date > 30) {
    cout << "Invalid date" << endl;
    return 1;
    }
    cout << "November " << date;
     }

 if (month == 12) {
    if (date < 0 || date > 31) {
    cout << "Invalid date" << endl;
    return 1;
    }
    cout << "December " << date;
     }

// coding to add suffixes 

if (date == 1 || date == 21 || date == 31) {
cout << "st,";
}
if (date == 2 || date == 22) {
cout << "nd,";
}
if (date == 3 || date == 23) {
cout << "rd,";
}
if (date >=4 && date <=20) {
cout << "th,";
}
if (date >=24 && date <=30) {
cout << "th,";
}

cout <<" "<< year << endl;


    return 0;
}
