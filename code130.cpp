#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main() {
    Mat img = imread("test.jpg");
    if (img.empty()) return -1;

    namedWindow("Display", WINDOW_AUTOSIZE);
    imshow("Display", img);

    vector<int> params;
    params.push_back(IMWRITE_JPEG_QUALITY);
    params.push_back(60);  // Lower quality

    imwrite("output.jpg", img, params);

    waitKey(0);
    return 0;
}
