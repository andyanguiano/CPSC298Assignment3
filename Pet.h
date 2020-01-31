#include <iostream>
#include <string>

using namespace std;

//create nw clas with constructors, accesors and mutators
class Pet{
  public:
    Pet();
    Pet(string name, int age, string type, double weight);

    string getName();
    int getAge();
    string getType();
    double getWeight();

    void setName(string name);
    void setAge(int age);
    void setType(string type);
    void setWeight(double weight);

  private:
    string m_name;
    int m_age;
    string m_type;
    double m_weight;
};
