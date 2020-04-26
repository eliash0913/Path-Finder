//g++ LoggerTest.cpp FOD_Logger.cpp -o LoggerTest -L /usr/include/log4cxx -l log4cxx
#include "FOD_Logger.h"

int main()
{
   FOD_LOG fl = FOD_LOG();
   Point pt1 = std::make_pair(1,2);
   Point pt2 = std::make_pair(2,3);
   Point pt3 = std::make_pair(4,5);
   Point pt4 = std::make_pair(6,7);
   fl.InfoLog(DEPART, pt1);
   fl.InfoLog(WAYPOINT, pt2);
   fl.InfoLog(RETURN, pt3);
   fl.InfoLog(CLEAN, pt4);
   fl.AlertLog(CLEAN_FAIL, pt4);
   return 0;
}
