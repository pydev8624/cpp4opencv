#include <opencv2/opencv.hpp>
using namespace cv;
int main() {
    Mat img = Mat::zeros(300, 300, CV_8UC3);
    line(img, Point(0, 0), Point(300, 300), Scalar(0, 255, 0), 2);
    imshow("Line", img);
    waitKey(0);
    return 0;
}
