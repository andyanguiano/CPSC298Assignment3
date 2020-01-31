#include "pet.h"

//set variables to default values
Pet::Pet(){
  m_name = "";
  m_age = 0;
  m_type = "";
  m_weight = 0.0;
}

//overload constructors
Pet::Pet(string name, int age, string type, double weight){
  m_name = name;
  m_age = age;
  m_type = type;
  m_weight = weight;
}
//mutators and accesors for each variables
void Pet::setName(string name){
  m_name = name;
}

string Pet::getName(){
  return m_name;
}

void Pet::setAge(int age){
  m_age = age;
}

int Pet::getAge(){
  return m_age;
}

void Pet::setType(string type){
  m_type = type;
}

string Pet::getType(){
  return m_type;
}

void Pet::setWeight(double weight){
  m_weight = weight;
}

double Pet::getWeight(){
  return m_weight;
}
