 #include <iostream>
#include<queue>
using namespace std;

int main() {
    
    queue<int> q;
    
    q.push(15);
    cout << "front of q is " << q.front() << endl;
    
    q.push(17);
    cout << "front of q is " << q.front() << endl;
    
    q.push(19);
    cout << "front of q is " << q.front() << endl;
    
    q.push(11);
    cout << "front of q is " << q.front() << endl;
    
    cout << " size of queue is " << q.size() << endl;
    q.pop();
    
    cout << " size of queue is " << q.size() << endl;
    
    
    if(q.empty()) {
        cout << "queue is empty " << endl;
    }
    else {
        cout << "queue is not empty " << endl;
    }
    return 0;
}
