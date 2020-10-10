#include <opencv2/opencv.hpp>

int main(int argc, char* argv[])
{

    // Read the image file
    cv::Mat image = cv::imread("logo.png");

    // Check for failure
    if (image.empty())
    {
        return -1;
    }

    cv::String windowName = "Logo";
    cv::namedWindow(windowName, cv::WINDOW_AUTOSIZE);
    imshow(windowName, image);
    cv::waitKey(0);
    
    return 0;
}
