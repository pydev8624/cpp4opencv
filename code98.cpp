#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_front(5);
    dq.push_back(15);

    cout << "Deque: ";
    for (int i : dq) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;

    dq.pop_front();
    dq.pop_back();

    cout << "Deque after pops: ";
    for (int i : dq) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
