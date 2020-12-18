#include <hallo.h>

/*
 * test.h is included into the hallo target as PUBLIC so
 * no need to include it inside the CMakeLists for
 * target MAIN again*/
#include "test.h"

int main() {
    hallo(); // function of shared library
    testfunction(); // function of shared libary, but linked to library and not the source is included directly

    while(1);
}
