#ifndef SHIP_H
#define SHIP_H

#include <vector>
#include <iostream>
#include <string>
#include <memory>
class Ship{
    private:
    std::string name_;
    int id_;
    int maxCrew_;
    size_t capacity_;
    size_t speed_;
    size_t crew_;

    
    public:

    //operator
    Ship& operator+=(const int);
    Ship& operator-=(const int);
    
    //constructors    
    Ship();
    Ship(std::string name, int id, int maxCrew, size_t capacity, size_t speed,size_t crew);
    Ship(int ,int ,size_t);
    

    /// functions setters  
    std::string setName(std::string& n);

    // functions getters
  
    std::string getName();
    int getId();
    int getMaxCrew();
    size_t getCapacity();
    size_t getSpeed();
    size_t getCrew();
    void getAllInfo();

};

#endif //SHIP_H