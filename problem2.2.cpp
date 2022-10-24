#include <iostream>
using namespace std;

class Date{
    private:
        int day;
        int month;
        int year;
        
    public:
        Date(){
            cout << "Creating date" <<endl;
            day = 0;
            month = 0;
            year = 0;
        }
        
        Date(int d, int m, int y){
            cout << "Creating date" <<endl;
            day = d;
            month = m;
            year = y;
        }

        void show(){
            cout << "Date is " << day << "-" << month << "-" << year << endl;
        }
        
        bool operator==(Date& d){
            return day==d.day && month==d.month && year==d.year;
        }
};

int main()
{
    Date ob(2,10,2022);
    Date ob1 = ob;  //Date ob1(ob);
    ob.show();
    ob1.show();
    
    cout << (ob==ob1) << endl;

    return 0;
}
