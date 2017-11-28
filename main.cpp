//
//  main.cpp
//  PIZZA
//
//  Created by Hlynur Hólm Hauksson on 28/11/2017.
//  Copyright © 2017 Hlynur Hólm Hauksson. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "pizza.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    //Tjékka hvort bakari, sala, afhending eða admin
    cout << "b - BAKARI" << endl;
    cout << "s - SALA" << endl;
    cout << "a - AFHENDING" << endl;
    cout << "x - ADMIN" << endl;
    get_type();
    
}
