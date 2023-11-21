#include <iostream>

class Car {
public:
    // Constructor
    Car(const char* make, const char* model) : make(make), model(model) {
        std::cout << "Car is being constructed." << std::endl;
    }

    // Destructor
    ~Car() {
        std::cout << "Car is being destroyed." << std::endl;
    }

    void Start() {
        std::cout << "The " << make << " " << model << " is starting." << std::endl;
    }

    void Stop() {
        std::cout << "The " << make << " " << model << " is stopping." << std::endl;
    }

private:
    const char* make;
    const char* model;
};

int main() {
    Car myCar("Toyota", "Camry");
    
    myCar.Start();
    myCar.Stop();
    
    return 0;
}

