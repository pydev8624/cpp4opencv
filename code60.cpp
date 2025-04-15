#include <iostream>
#include <string>
#include <utility>

using namespace std;

pair<int, string> paiction() {
    return {10, "python"};
}

int main() {
    auto result = paiction();
    cout << result.first << endl;
    cout << result.second << endl;
    
    return 0;
}
