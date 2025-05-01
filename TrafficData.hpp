#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>

/*
Create a function called loadTrafficData() that has one parameter of type std::string 
for the filename. The loadTrafficData() function will read a .csv file (example below), 
putting the airport codes and their associated annual passenger numbers into a std::map with 
key of std::string airport_code and value int number_of_passengers. The loadTrafficData() function
 will return the map that was created.
*/
std::map<std::string, int> loadTrafficData(const std::string& filename) {

    // std::map<std::string, int> trafficData;
    // std::ifstream in(filename);
    // if (!in){
    //   return;
    // }
    // std::stringstream sstream;

    // std::string tempStr;
    // int tempInt;
    // while (filename, sstream, in){
    //   in >> tempStr;
    //   in.ignore(','); 
    //   in >> tempInt;  
    //   in.ignore('\n');
    //   trafficData.insert({tempStr, tempInt});
    // }
    // return trafficData;

}

/*
Create a Function named updateTrafficData() that has two parameters: a const std::string filename 
and a const reference to a std::map of key std::string and value int. The updateTrafficData() 
function will read the file and update the std::map that was passed in by updating the passenger 
number if the airport code is already in the map or add the new airport code with its passenger 
number, according to the CSV file.
*/
void updateTrafficData(const std::string& filename, std::map<std::string, int>& dataMap) {
    
  // std::ifstream in(filename);
  // if (!in){
  //   return;
  // }

  // std::map<std::string, int> trafficData = loadTrafficData(filename);

  // auto it = dataMap.begin();
  // while (it != dataMap.end()){
  //   if (dataMap[it->first]){
  //     dataMap[it->first] = it->second;
  //       }
  //   else
  //   dataMap.insert({it->first, it->second});
  // }


  }
