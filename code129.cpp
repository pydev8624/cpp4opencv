#include <opencv2/opencv.hpp>
using namespace std;

int main() {
    cv::Mat img = cv::imread("test.jpg");
    if (img.empty()) {
        cout << "Error"  << endl;
        return -1;
    }

    vector<int> params;
    params.push_back(cv::IMWRITE_JPEG_QUALITY);
    params.push_back(80);

    bool success = cv::imwrite("output.jpg", img, params);
    if (!success) {
        cout << " Error  " << endl;
        return -1;
    }

    return 0;
}
