//
//  main.cpp
//  persistente-werte
//
//  Created by Lukas Grotz on 03.11.17.
//  Copyright © 2017 Lukas Grotz. All rights reserved.
//

#include <iostream>
#include "persistent.hpp"

int main(void) {
    persistent<int> test("/Users/lukasgrotz/Documents/Coding/xCode/persistente-werte/persistente-werte/test.bin");
    test = 12;
    return 0;
}
