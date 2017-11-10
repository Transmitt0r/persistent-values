//
//  main.cpp
//  persistente-werte
//
//  Created by Lukas Grotz on 03.11.17.
//  Copyright © 2017 Lukas Grotz. All rights reserved.
//

#include <iostream>
#include "persistent.h"
#include "Komplex.h"

int main(void) {
    persistent<double> a("/Users/lukasgrotz/Documents/Coding/xCode/persistente-werte/a.bin");
    persistent<Komplex> b("/Users/lukasgrotz/Documents/Coding/xCode/persistente-werte/b.bin");

    /*a = 3.14;
    b = Komplex(1,2);

    double c;
    c = a;
    Komplex d;
    d = b;*/

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}
