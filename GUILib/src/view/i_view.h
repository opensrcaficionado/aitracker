#pragma once

class IView {
public:
	virtual void paint_video_frame(cv::Mat& img) = 0;
	virtual void set_tracking_mode(bool is_tracking) = 0;
	virtual void connect_presenter(IPresenter* presenter) = 0;
};