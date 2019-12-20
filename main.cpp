#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main(int argc, char *argv[])
{
    cv::Mat img = cv::imread( "monyet.jpg", cv::IMREAD_COLOR );
    cv::Mat img1 = cv::imread( "monyet1.jpg", cv::IMREAD_COLOR );

    if( img.empty() ) return -1;

    cv::namedWindow( "monyet", cv::WINDOW_AUTOSIZE );
    cv::imshow( "monyet", img );

    cv::namedWindow( "monyet1", cv::WINDOW_AUTOSIZE );
    cv::imshow( "monyet1", img1 );

    cv::waitKey( 0 );
    return 0;
}



