//
//  Runner.cpp
//  MyFirstCPP
//
//  Created by Stout, Zachary on 1/23/18.
//  Copyright © 2018 Stout, Zachary. All rights reserved.
//

#include "Controller.hpp"

int main()
{
    Controller app;
    app.start();
    
    Controller * appPointer = new Controller();
    appPointer->start();
    return 0;
}
