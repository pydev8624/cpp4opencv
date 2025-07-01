#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
    Mat img = imread("test.jpeg");

    Rect roi(50, 50, 90, 50);
    Mat cropped = img(roi);

    imshow("Original", img);
    imshow("Cropped", cropped);
    waitKey(0);
    return 0;
}
