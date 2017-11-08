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
#include "Fahrzeug.h"

int main(void) {
    persistent<std::string> test("/Users/lukasgrotz/Documents/Coding/xCode/persistente-werte/test.bin");
    test = "Hallo";
	/*persistent<int> c("D:\c.binary");
	persistent<Komplex> d("D:\d.binary");
	persistent<Fahrzeug> zeiger("D:\zeiger.binary");
	zeiger = Fahrzeug(20.3);
	//c("D:\c.binary");
	//c = 5;
	//d = 2;
	//b = 2;
	//0d = Komplex(5,2);
	std::cout << zeiger.get_wert().get_gewicht();
	//c.del();
	system("pause");*/
    return 0;
}
