#include <iostream>
#include <vector>  
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 

#include "home.h"

Home::Home(std::string path)
: Controller(path)
{
   this->title = "C++ mvc web framwork";
}

void Home::index()
{
   this->page_content = "This is the Home controller.";
   this->render_view();
}

