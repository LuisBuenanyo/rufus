#pragma once

#define RELEASE_VER_MAIN    1 
#define RELEASE_VER_MAIN2   0
#define RELEASE_VER_SUB     0
#define RELEASE_VER_SUB2    5

// version number (string)
#define TOSTRING2(arg) #arg
#define TOSTRING(arg) TOSTRING2(arg)
#define RELEASE_VER_STR TOSTRING(RELEASE_VER_MAIN) "." TOSTRING(RELEASE_VER_MAIN2) "." TOSTRING(RELEASE_VER_SUB) "." TOSTRING(RELEASE_VER_SUB2)
