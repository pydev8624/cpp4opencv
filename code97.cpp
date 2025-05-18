#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(30);
    q.push(61);
    
    cout<<q.front()<<endl;
    cout<<q.back()<<endl<<endl;

    while (!q.empty()) {
        cout << q.front() << " "<<endl;
        q.pop();
    }
    cout<<endl;
    cout << q.front() << " "<<endl;
    q.pop() ;
    cout << q.back() << " "<<endl;
    q.pop() ;

    return 0;
}
