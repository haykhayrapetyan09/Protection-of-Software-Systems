#include <iostream>
using namespace std;

class Stack{
    private:
        char *arr;
        int top;
        int capacity;
     
    public:
        Stack(int size){
            arr = new char[size];
            capacity = size;
            top = -1;
        }
        
        
        ~Stack() {
            delete[] arr;
        }
     
     
        void push(char x){
            if (isFull()){
                cout << "Overflow. Can't push" << endl;
            }
            else {
                cout << "Inserting " << x << endl;
                arr[++top] = x;
            }
        }
        
        
        int pop(){
            if (isEmpty()){
                cout << "Stack is empty. Can't pop" << endl;
            }
            else {
                char last = arr[top];
                cout << "Removing " << last << endl;
                arr[top--] = ' ';
                return last;
            }
        }
        
        void input(){
            if (capacity-top >= 26){
                for(char i='a'; i<='z'; i++)
                   push(i);
            }
            else{
                cout << "No capacity for inserting alphabet" << endl;
            }
        }
        
        void show(){
            for(int i=0; i < capacity; i++){
                cout << arr[i] << " ";
            }
        }
        
        
        bool isEmpty() {
            return top == -1;
        }
        
        
        bool isFull() {
            return top == capacity - 1;
        }
        
    
};
 
int main(){
    Stack stack(30);
    stack.input();
 
    stack.push('a');
    stack.push('b');
    stack.push('c');
 
    stack.pop();
    stack.pop();
 
    stack.push('f');
    stack.pop();
    
    stack.show();
 
    return 0;
}
