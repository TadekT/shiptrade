#include <vector>
#include <iostream>
#include <string>

class Ship{
    private:
    std::string name_;
    int id_;
    int maxCrew_;
    int capacity_;
    int speed_;
    
    public:
    //constructors    
    Ship(): id_(-1){};
    Ship(std::string name, int id, int maxCrew, int capacity, int speed)
    :name_(name),id_(id),maxCrew_(maxCrew),capacity_(capacity),speed_(speed){};

    /// functions setters  
    void setName(std::string n){name_=n;}

    // functions getters
    std::string getName(){return name_;}
};

int main(){

    Ship neo_("Neo",07,20,50,10);

    std::cout<<neo_.getName(); 

    return 0;
}