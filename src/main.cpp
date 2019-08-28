//
// Created by Igor on 25.07.2019.
//

#include <iostream>
#include <stdio.h>
//#include "lib_shar.h"
//#include "lib_stat.h"
#include <lib_shar.h>
#include <lib_stat.h>
#include "add.h"
#include "version.h"
#include "path.h"


int main()
{
    std::cout << "The sum of 3 and 4 is " << add(3, 4) << std::endl;
    std::cout << "source_path: " << g_source_path << "\n";
    std::cout << "binary_path: " << g_binary_path << "\n";
    std::cout << "version: " << g_version << "\n";
    sharLibrary sharl;
    sharl.print_info1();
    statLibrary statl;
    statl.print_info();
    getchar();
    return 0;
}

