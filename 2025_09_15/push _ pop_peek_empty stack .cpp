   #include <iostream>
#include <stack>
using namespace std ;

class Stack {
  public:
  int *arr;
  int size;
  int top;
  
  Stack(int size){
      this->size =size;
      arr = new int[size];
      top = -1;
  }
  
  void push (int element) {
  if(size - top > 1){
      top++;
      arr[top] = element;
  } 
  else {
      cout << " stack overflow" << endl;
  }
  }
  void pop(){
      if(top >= 0){
          top--;
      }
      else {
          cout << " stack underflow" << endl;
      }
  }
  int peek (){
      if(top >= 0){
          return arr[top];
      }
      else {
          cout << " stack is empty " << endl;
          return 1;
      }
  }
  int empty (){
      if (top == -1){
          return true;
      }
      else {
          return false ;
      }
  }
};

int main() {
    
    Stack st(3);
    
    st.push(54);
    st.push(73);
    st.push(42);
     
    cout << st.peek() << endl;
    st.pop();
    
    cout << st.peek() << endl;
    st.pop();
    
    cout << st.peek() << endl;
    st.pop();
    
   cout << st.peek() << endl;
   
   if(st.empty()) {
       cout << "stack is empty mere dost" << endl;
   }
   else {
       cout << "stack is not empty mere dost "<< endl;
   }
    
    
    return 0;
}
