#include <iostream>
using namespace std;

class Date{
    int day, month, year;
public:
    Date(){
        int d, m, y;
        cout << "Enter dd/mm/yy: ";
        cin >> d >> m >> y;
        day = d;
        month = m;
        year = y;
    }
    void printDate(){
        cout << day << '/' << month << '/' << year << endl;
    }
};

class Diary{
    string name;
    int n_entries;
    Date *last_entry;
public:
    Diary(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter no of entries: ";
        cin >> n_entries;
        last_entry = new Date();
    }
    friend void displayDiary(Diary);
};

void displayDiary(Diary D){
    cout << "Owner: " << D.name << endl;
    cout << "Number of entries: " << D.n_entries << endl;
    cout << "Last entry: ";
    D.last_entry->printDate();
}

int main(){
    Diary* D = new Diary();
    displayDiary(*D);

    delete D;
    return 0;
}