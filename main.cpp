#include "lib.h"

#include <iostream>

#include <spdlog/spdlog.h>

using namespace std;

int main (int argc, char *argv[])
{
    auto logger = spdlog::stdout_logger_mt("console");
    logger->info("version {} was started", version());
    cout << "Hello, world!" << endl;

    return 0;
}
