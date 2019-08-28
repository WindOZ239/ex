#ifndef _LIBRARY_SHAR_H_
#define _LIBRARY_SHAR_H_

#if defined(_WIN32) || defined(_WIN64)

    #define MYLIB_EXPORT __declspec(dllexport)

#endif

struct MYLIB_EXPORT sharLibrary
{
  void print_info1();
};

#endif
