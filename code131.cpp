#include <opencv2/opencv.hpp>
using namespace cv;

int main() {
    Mat image = imread("download.png");
    if (image.empty()) {
        std::cerr << "Could not open or find the image." << std::endl;
        return -1;
    }

    Mat gray;
    cvtColor(image, gray, COLOR_BGR2GRAY);
    namedWindow("img",WINDOW_NORMAL);
    imshow("img", gray);
    waitKey(0);
    return 0;
}
