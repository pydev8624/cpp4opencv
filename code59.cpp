// g++ -std=c++17 yourfile.cpp -o yourprogram


#include <iostream>
#include <string>
#include <tuple>

using namespace std;

tuple<int, double, string> tupction() {
    return {10, 2.55, "python"};
}

int main() {
    auto [age, grade, name] = tupction();
    cout << age << endl;
    cout << grade << endl;
    cout << name << endl;
    return 0;
}
