#include "WayPointLoader.h"

//using namespace FOD;
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
		
int WayPoints::test()
{
	WayPoints wps = WayPoints("waypoints.txt");
	for (Point point : wps.wps)
	{
		printf("%d %d \n", point.first, point.second);
	}
	return(0);
}
	




//namespace FOD
//{
//	typedef pair<int, int> Point;
//	typedef vector<Point> WPS;
//	class WayPoints
//	{
//	public:
//		WPS wps;
//		WayPoints(string filename)
//		{
//			vector<Point> wayPoints;
//			string line;
//			regex re("([0-9]+),([0-9]+)");
//			ifstream file(filename);
//			if (!file) {
//				cout << "unable to open file";
//			}
//			while (getline(file, line))
//			{
//				smatch sm;
//				regex_search(line, sm, re);
//				Point point = make_pair(stoi(sm[1]), stoi(sm[2]));
//				wayPoints.push_back(point);
//			}
//			wps = wayPoints;
//		}
//		int test()
//		{
//			FOD::WayPoints wps = FOD::WayPoints("waypoints.txt");
//			for (FOD::Point point : wps.wps)
//			{
//				printf("%d %d \n", point.first, point.second);
//			}
//			return(0);
//		}
//	};
//}