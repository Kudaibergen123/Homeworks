#include <iostream>

using namespace std;

class ZooAnimal
 {
    private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
    public:
    void Create (char *, int, int, int); // 1.1 Prototype for Create Function or Constructor
    void Destroy ();
    char* reptName ( );
    int daysSinceLastWeighed (int);
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


int main()
{
    ZooAnimal bozo;

    bozo.Create ("Bozo", 408, 1027, 400);


    cout << "This animal's name is " << bozo.reptName() << endl; //1 -3 Modified name

    bozo.Destroy ();
    return 0;
}
