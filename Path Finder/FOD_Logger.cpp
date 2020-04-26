#include "FOD_Logger.h"
#include <log4cxx/logger.h>
#include <log4cxx/xml/domconfigurator.h>

using namespace log4cxx;
using namespace log4cxx::xml;
using namespace log4cxx::helpers;

FOD_LOG::FOD_LOG()
{
    DOMConfigurator::configure("FOD_LoggerConfig.xml");
}
LoggerPtr Info(Logger::getLogger("Info"));
LoggerPtr Alert(Logger::getLogger("Alert"));

void FOD_LOG::InfoLog(INFO_STATUS stat, Point point)
{
    std::string strPoint = '(' + std::to_string(point.first) + ',' + std::to_string(point.second) + ')';
    switch(stat){
        case DEPART:
            LOG4CXX_INFO(Info, "Robot departed from Home: " + strPoint);        
            break;
        case WAYPOINT:
            LOG4CXX_INFO(Info, "Robot arrived at a waypoint: " + strPoint);        
            break;
        case RETURN:
            LOG4CXX_INFO(Info, "Robot returned to Home: " + strPoint);        
            break;
        case CLEAN:
            LOG4CXX_INFO(Info, "Robot cleaned FOD at: " + strPoint);        
            break;

        }
}

void FOD_LOG::AlertLog(ALERT_STATUS stat, Point point)
{
    std::string strPoint = '(' + std::to_string(point.first) + ',' + std::to_string(point.second) + ')';
    switch(stat){
        case CLEAN_FAIL:
            LOG4CXX_WARN(Alert, "Robot failed to clean FOD at: " + strPoint);
            break;
    }
}