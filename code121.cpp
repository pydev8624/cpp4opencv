#include <iostream>
#include <vector>

using namespace std;

int main() {
    // تعریف ماتریس 2x2 با vector
    vector<vector<int>> mat = {
        {1, 2},
        {3, 4}
    };
    // mat[0][0]=0;
    // mat[1].push_back(0);
    // mat[0].push_back(1);
    // mat.push_back({5,3,0});
    // چاپ ماتریس
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
