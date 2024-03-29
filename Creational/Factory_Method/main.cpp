#include "headers/AnimalFactory.hpp"
#include "headers/Animal.hpp"

int main(int argc, char* argv[])
{
    std::cout<<"\nFactory method pattern stupid example\n"<<std::endl;
    AnimalFactory* animalFactory = new AnimalFactory();

    Animal* cat = animalFactory->CreateAnimal(CAT, "Tom");
    Animal* dog = animalFactory->CreateAnimal(DOG, "Bowsie");
    Animal* chinchilla = animalFactory->CreateAnimal(CHINCHILLA, "Rattigan");

    cat->Speak();
    dog->Speak();
    chinchilla->Speak();

    delete cat;
    delete dog;
    delete chinchilla;
    delete animalFactory;
}