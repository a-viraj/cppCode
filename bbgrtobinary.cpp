#include<opencv2/opencv.hpp>
#include<opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main()
{
	Mat image = imread("E:\\1.png",IMREAD_COLOR);
	if (image.empty())
	{
		cout << "Image is not found" << endl;
		return 0;
	}
	Mat greyScale, BinaryImage;
	imshow("Original Image",image);
	waitKey(0);
	cvtColor(image,greyScale,COLOR_BGR2GRAY);
	imshow("GreyScale",greyScale);
	waitKey(0);
	threshold(greyScale,BinaryImage,127,255,THRESH_BINARY);
	imshow("BinaryImage",BinaryImage);
	waitKey(0);
	return 0;
}