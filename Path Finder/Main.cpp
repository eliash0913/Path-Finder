#include "WayPointLoader.h"
using namespace std;

int test()
{
	WayPoints wps = WayPoints("waypoints.txt");
	for (Point point : wps.wps)
	{
		printf("%d %d \n", point.first, point.second);
	}
	return(0);
}

int main()
{
	test();
}

