#include "WayPointLoader.h"

WayPoints::WayPoints(std::string filename)
{
	std::vector<Point> wayPoints;
	std::string line;
	std::regex re("([0-9]+),([0-9]+)");
	std::ifstream file(filename);
	if (!file) {
		std::cout << "unable to open file";
	}
	while (getline(file, line))
	{
		std::smatch sm;
		std::regex_search(line, sm, re);
		Point point = std::make_pair(stoi(sm[1]), stoi(sm[2]));
		wayPoints.push_back(point);
	}
	wps = wayPoints;
}