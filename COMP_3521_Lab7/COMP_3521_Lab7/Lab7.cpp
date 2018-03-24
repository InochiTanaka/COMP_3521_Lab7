#include "Lab7.hpp"

int main() 
{
	//std:cout << std::numeric_limits<long>::max() <<"\n";

	Lab7 test;

	system("pause");
}

Lab7::Lab7()
{
	int resultSum;
	std::vector<int> vector;

	vector.push_back(0);
	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);
	vector.push_back(4);
	vector.push_back(5);

	std::cout << " Sum:     " << sum(vector) << "\n";

	std::cout << " Max:     " << max(vector) << "\n";

	std::cout << " Min:     " << min(vector) << "\n";

	std::cout << " Average: " << average(vector) << "\n";


}

int Lab7::sum(const std::vector<int>& v)
{
	return std::accumulate(v.begin(), v.end(), 0);
}

int Lab7::max(const std::vector<int>& v)
{
	return *std::max_element(v.begin(), v.end());
}

int Lab7::min(const std::vector<int>& v)
{
	return *std::min_element(v.begin(), v.end());
}

int Lab7::average(const std::vector<int>& v)
{
	return std::accumulate(v.begin(), v.end(), 0) / v.size();

}
