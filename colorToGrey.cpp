#include<opencv2/opencv.hpp>
#include<opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main()
{
	string img = "E:\1.png";
	Mat image = imread(img,IMREAD_COLOR);
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

}