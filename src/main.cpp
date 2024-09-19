#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

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
		cv::pollKey();

		if(cv::getWindowProperty(TITLE.data(), cv::WND_PROP_VISIBLE) < 1.0)
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
