#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main(int argc, char *argv[])
{
    cv::Mat img = cv::imread( "photo.jpg", cv::IMREAD_COLOR );

    if( img.empty() ) return -1;

    cv::namedWindow( "photo", cv::WINDOW_AUTOSIZE );
    cv::imshow( "photo", img );
    cv::waitKey( 0 );
    return 0;
}



