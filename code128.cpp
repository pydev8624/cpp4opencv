#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
    Mat img = imread("test.jpg");
    namedWindow("xz",WINDOW_KEEPRATIO);
    imshow("title", img);
    waitKey(0);

    return 0;
}
