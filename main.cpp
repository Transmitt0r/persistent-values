//
//  main.cpp
//  persistente-werte
//
//  Created by Lukas Grotz on 03.11.17.
//  Copyright © 2017 Lukas Grotz. All rights reserved.
//

#include <iostream>
#include "persistent.h"

int main(void) {
    persistent<std::string> test("/Users/lukasgrotz/Documents/Coding/xCode/persistente-werte/test.bin");
    test = "Hallo";
    return 0;
}
