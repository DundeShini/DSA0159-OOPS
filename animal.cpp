#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    std::string species;
    int age;

public:
    Animal(const std::string& name, const std::string& species, int age)
        : name(name), species(species), age(age) {}

    void SetName(const std::string& newName) {
        name = newName;
    }

    std::string GetName() const {
        return name;
    }

    void SetSpecies(const std::string& newSpecies) {
        species = newSpecies;
    }

    std::string GetSpecies() const {
        return species;
    }

    void SetAge(int newAge) {
        age = newAge;
    }

    int GetAge() const {
        return age;
    }
};

class Cat : public Animal {
private:
    std::string color;
    std::string breed;

public:
    Cat(const std::string& name, const std::string& species, int age, const std::string& color, const std::string& breed)
        : Animal(name, species, age), color(color), breed(breed) {}

    void SetColor(const std::string& newColor) {
        color = newColor;
    }

    std::string GetColor() const {
        return color;
    }

    void SetBreed(const std::string& newBreed) {
        breed = newBreed;
    }

    std::string GetBreed() const {
        return breed;
    }
};

class Dog : public Animal {
private:
    double weight;
    std::string breed;

public:
    Dog(const std::string& name, const std::string& species, int age, double weight, const std::string& breed)
        : Animal(name, species, age), weight(weight), breed(breed) {}

    void SetWeight(double newWeight) {
        weight = newWeight;
    }

    double GetWeight() const {
        return weight;
    }

    void SetBreed(const std::string& newBreed) {
        breed = newBreed;
    }

    std::string GetBreed() const {
        return breed;
    }
};

int main() {
    Cat myCat("rio", "Cat", 5, "Gray", "Siamese");
    Dog myDog("rockcy", "Dog", 3, 25.5, "Labrador");

    std::cout << "Cat Info:" << std::endl;
    std::cout << "Name: " << myCat.GetName() << std::endl;
    std::cout << "Species: " << myCat.GetSpecies() << std::endl;
    std::cout << "Age: " << myCat.GetAge() << std::endl;
    std::cout << "Color: " << myCat.GetColor() << std::endl;
    std::cout << "Breed: " << myCat.GetBreed() << std::endl;

    std::cout << "\nDog Info:" << std::endl;
    std::cout << "Name: " << myDog.GetName() << std::endl;
    std::cout << "Species: " << myDog.GetSpecies() << std::endl;
    std::cout << "Age: " << myDog.GetAge() << std::endl;
    std::cout << "Weight: " << myDog.GetWeight() << " kg" << std::endl;
    std::cout << "Breed: " << myDog.GetBreed() << std::endl;

    return 0;
}

