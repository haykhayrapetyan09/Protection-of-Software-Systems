#include <iostream>
#include <typeinfo>
using namespace std;

class Triangle{
    private:
        float height;
        float base;
        
    public:
        Triangle(){
            cout << "Creating triangle" <<endl;
        }
        
        Triangle(float h, float b){
            cout << "Creating triangle" <<endl;
            set(h,b);
        }
        
        ~Triangle(){
            cout << "Deleting triangle" << endl;
        }
        
        void set(float h, float b){
            height = h;
            base = b;
        }
        
        float area(){
            return height*base/2;
        }
        
        void show(){
            cout << "Area is: " << area() << endl;
        }
};

Triangle input(){
    float h; cout << "Input height: "; cin >> h;
    float b; cout << "Input base: "; cin >> b;
    
    Triangle triangle(h, b);
    triangle.show();
    
    return triangle;
};

int main()
{
    Triangle test;
    test = input();
    cout << typeid(test).name() << endl;

    return 0;
}
