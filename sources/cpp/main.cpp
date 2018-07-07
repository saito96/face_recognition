#include <opencv2/highgui.hpp>
#include <iostream>
#include "../hpp/function.h"
using namespace std;
using namespace cv;

int main( int argc, char** argv ) {
    Mat image = imread("sample.jpg" , CV_LOAD_IMAGE_COLOR);
    if(! image.data ) {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }
    namedWindow( "Display window", cv::WINDOW_AUTOSIZE );
    imshow( "Display window", image );
    waitKey(0);
    return 0;
}
