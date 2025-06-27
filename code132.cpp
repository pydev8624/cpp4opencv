#include <opencv2/opencv.hpp>
using namespace cv;
int main() {
    Mat img = imread("test.jpeg");
    imshow("img", img);
    Mat resized;
    resize(img, resized, Size(300, 300));
    imshow("Resized", resized);
    waitKey(0);
    return 0;
}
