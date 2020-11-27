#include <iostream>
#include <ctime>

std::string time_output_variable;

std::string time_output() {

    // Declaring argument for time() 
    time_t tt; 
  
    // Declaring variable to store return value of 
    // localtime() 
    struct tm * ti; 
  
    // Applying time() 
    time (&tt); 
  
    // Using localtime() 
    ti = localtime(&tt); 
  
    default_timeoutput = asctime(ti); 
  
  return 0; 
} 
