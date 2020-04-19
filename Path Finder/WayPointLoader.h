#include<bits/stdc++.h> 
#include<fstream>
#include<streambuf>

typedef std::pair<int, int> Point;
typedef std::vector<Point> WPS;
class WayPoints
{
public:
	WPS wps;
	WayPoints(std::string filename);
};

