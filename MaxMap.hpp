#pragma once

#include <algorithm>
#include <map>
#include <string>
#include <vector>


/*

The consultMax function requires a std::string and a std::map with keys of type std::string
 and values std::vector of floats both passed in by const reference, and returns the maximum value 
 within the vector associated with the provided string. If the key is not found, you may return -1.
*/
float consultMax(const std::string& search_term, const std::map<std::string, std::vector<float>>& data) {
    
    float dataFound = 0;
    bool isFound = false;
    auto it = data.begin();
    while (it != data.end() || !isFound ){
        if (it->first == search_term){
            isFound = true;
            dataFound = it->second[0];
            for (int i = 0; i < it->second.size(); i++){
                if (dataFound < it->second[i])
                    dataFound = it->second[i];
            }

        }
        if (!isFound) return -1;
        else return dataFound;
    }

}

/*
The returnMaxMap function accepts a std::map with keys of type std::string and value std::vector
 of floats. The function will return a new std::map with keys of type std::string and values of 
 type float. The returned map has the same string keys, and its associated value is a float that
  corresponds to the the maximum value found within the corresponding vector.

*/
std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) {

    std::map<std::string, float> temp;
    auto it = in_map.begin();

    int max = 0;
    while(it != in_map.end()){
        max = it->second[0];
            for (int i = 0; i < it->second.size(); i++){
                if (max < it->second[i]) max = it->second[i];
            }

        temp.emplace(it->first, max);
    }

    return temp;


    
}