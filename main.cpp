#include <opencv2/opencv.hpp>

int main(int argc, char *argv[])
{
    cv::Mat img = cv::imread( "photo.jpg", cv::IMREAD_COLOR );

    if( img.empty() ) return -1;

    cv::namedWindow( "photo", cv::WINDOW_AUTOSIZE );
    cv::imshow( "photo", img );
    cv::waitKey( 0 );
    return 0;
}



