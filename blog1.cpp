// blog1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <cv.h> 
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
using namespace std;
using namespace cv;

int main()
{
	Mat cat=imread("D:\\work\\uptodiff\\cat.jpg");
	cout<<"pixel of cat at(183,1) "<<(int)cat.at<uchar>(182,1)<<endl;

	Mat dog=imread("D:\\work\\uptodiff\\dog.jpg");
	cout<<"pixel of dog at(183,1) "<<(int)dog.at<uchar>(182,1)<<endl;

	Mat cat_add_dog=cat+dog;
	cout<<"pixel of cat_add_dog at(183,1) "<<(int)cat_add_dog.at<uchar>(182,1)<<endl;

	imshow("cat_add_dog",cat_add_dog);


	Mat cat_minus_dog=cat-dog;
	cout<<"pixel of cat_minus_dog at(183,1) "<<(int)cat_minus_dog.at<uchar>(182,1)<<endl;

	imshow("cat_minus_dog",cat_minus_dog);
	cvWaitKey(0);
	return 0;
}

