#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
    Mat img = imread("download.jpeg");
    imshow("Image", img);
    waitKey(0);

    return 0;
}
