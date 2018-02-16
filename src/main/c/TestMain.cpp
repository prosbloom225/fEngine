#define CATCH_CONFIG_RUNNER
/* #define CATCH_CONFIG_MAIN */
#include "include/catch.h"
#include "include/easylogging++.h"


INITIALIZE_EASYLOGGINGPP



int main(int argc, char* argv[]) {
    LOG(INFO) << "Begin!";

    // This is really just a test main, will move to testRunner
    return Catch::Session().run( argc, argv );
}
