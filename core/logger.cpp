#include "logger.h"

using namespace Quto::Core;

Logger::Logger(QObject *parent) :
    QObject(parent)
{
    mPlugins.clear();
}

Logger::~Logger()
{
    mPlugins.clear();
}

bool Logger::registerPlugin(LoggingPlugin *aPlugin)
{
    return true;
}

bool Logger::deregisterPlugin(LoggingPlugin *aPlugin)
{
    return true;
}
