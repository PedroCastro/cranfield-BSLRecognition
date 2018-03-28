
#include "Decoder.h"
#include "Recorder.h"
#include "DeepLearningModel.h"


int main(int argc, char** argv) {

	Recorder recorder = Recorder();

	Decoder decoder = Decoder();

	cv::Mat mathouse = decoder.decode("house");

	//cv::Mat matdata = decoder.decode("data");

	DeepLearningModel model = DeepLearningModel(mathouse.cols, 2);

	vector<int> labelmathouse = vector<int>(mathouse.rows, 1);
	//vector<int> labelmatdata = vector<int>(matdata.rows, 1);

	std::cout << "train";

	model.train(mathouse, labelmathouse);

}