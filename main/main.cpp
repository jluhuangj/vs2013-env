//#include <iostream>
//
//#include "json/json.h"
//
//void main()
//{
//	std::cout << "hello world" << std::endl;
//
//	system("pause");
//}

#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
	using namespace boost::lambda;
	typedef std::istream_iterator<int> in;

	std::for_each(
		in(std::cin), in(), std::cout << (_1 * 3) << " ");
}

//#include <iostream>
//
//#include "opencv2/opencv.hpp"
//
//void main()
//{
//	cv::Mat img = cv::imread("1.jpg");
//	cv::imshow("1", img);
//	cv::waitKey(0);
//
//	//system("pause");
//}