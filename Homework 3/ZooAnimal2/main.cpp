#include <iostream>

using namespace std;
enum scale {ounces, kilograms};

  class ZooAnimal
 {
     private:
         char *name;
         int cageNumber;
         int weightDate;
         int weight;
         ZooAnimal *mother;
     public:
         void Create (char*, int, int, int); // create function
         void Destroy (); // destroy function
         void isMotherOf (ZooAnimal&);
         void changeWeight (int pounds);
         void changeWeightDate (int today);
         char* reptName ();
         int reptWeight ();
         void reptWeight (scale which);
         inline int reptWeightDate () {return weightDate;}; //2 - 1
         int daysSinceLastWeighed (int today);
 };


 void ZooAnimal::Create (char* name2, int cageNumber2, int weightDate2, int weight2){
    name = name2;
    cageNumber = cageNumber2;
    weightDate = weightDate2;
    weight =weight2;
 }

 void ZooAnimal::Destroy ()
     {
        delete [] name;
     }

char* ZooAnimal::reptName ()
     {
        return name;
     }



int ZooAnimal::daysSinceLastWeighed(int today) //1.2 Header for daysSinceLastWeighed function
     {
     int startday, thisday;
     thisday = today/100*30 + today - today/100*100;
     startday = weightDate/100*30 + weightDate - weightDate/100*100;
     if (thisday < startday)
     thisday += 360;
     return (thisday-startday);
 }


inline void ZooAnimal::changeWeightDate(int today){weightDate = today;} //2 - 2
void ZooAnimal::isMotherOf(ZooAnimal &child){child.mother  = this;} //2 - 3

int main()
{
    ZooAnimal bozo;

    bozo.Create ("Bozo", 408, 1027, 400);


    cout << "This animal's name is " << bozo.reptName() << endl; //1 -3 Modified name

    bozo.Destroy ();
    return 0;
}
