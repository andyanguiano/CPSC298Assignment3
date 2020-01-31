#include "pet.h"

//main function that creates 2 pet classes and prints their details and deletes instances after done using
int main(int argc, char **argv){
  Pet *p1 = new Pet("Charlie", 5, "Dog", 20.4);
  Pet *p2 = new Pet("Chanel", 3, "Dog", 15.5);

  cout << "Information about the first pet" << endl;
  cout << "Name: " << p1->getName() << endl;
  cout << "Age: " << p1->getAge() << endl;
  cout << "Type: " << p1->getType() << endl;
  cout << "Weight: " << p1-> getWeight() << endl << endl;

  cout << "Information about the second pet" << endl;
  cout << "Name: " << p2->getName() << endl;
  cout << "Age: " << p2->getAge() << endl;
  cout << "Type: " << p2->getType() << endl;
  cout << "Weight: " << p2-> getWeight() << endl << endl;

  delete p1;
  delete p2;

  return 0;
}
