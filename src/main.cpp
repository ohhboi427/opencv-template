#include <opencv2/opencv.hpp>

#include <string_view>

auto main() -> int
{
	using namespace std::string_view_literals;

	static constexpr size_t WIDTH = 1280u;
	static constexpr size_t HEIGHT = 720u;
	static constexpr std::string_view TITLE = "opencv-template"sv;

	cv::Mat image = cv::Mat::zeros(HEIGHT, WIDTH, CV_8UC3);

	cv::namedWindow(TITLE.data(), cv::WINDOW_AUTOSIZE);

	bool running = true;
	while(running)
	{
		const int key = cv::pollKey();

		if(key == 27)
		{
			running = false;
		}

		cv::rectangle(
			image,
			cv::Point{ 0, 0 },
			cv::Point{ WIDTH, HEIGHT },
			cv::Scalar{ 255.0, 0.0, 255.0 },
			cv::FILLED
		);

		cv::imshow(TITLE.data(), image);
	}
}
