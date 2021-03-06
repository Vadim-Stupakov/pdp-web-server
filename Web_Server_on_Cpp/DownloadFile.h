#ifndef DOWNLOAD_FILE_H
#define DOWNLOAD_FILE_H

#include <sys/stat.h>
#include <unistd.h>

#include "iRequestHandler.h"

class DownloadFile : public iRequestHandler
{
public:
    virtual void handleRequest(const std::string& inputStr, std::vector<char>& out) const;
};

#endif // DOWNLOAD_FILE_H
