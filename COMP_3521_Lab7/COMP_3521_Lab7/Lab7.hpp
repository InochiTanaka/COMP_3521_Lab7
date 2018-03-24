#pragma once
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

class Lab7
{
public:
	Lab7();
	int sum(const std::vector<int>& v);
	int max(const std::vector<int>& v);
	int min(const std::vector<int>& v);
	int average(const std::vector<int>& v);
};
