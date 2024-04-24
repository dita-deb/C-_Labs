
/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: 11A
*/


#include <iostream>
using namespace std;

class BuildingBlueprint {
private:
    int numOfStories;
    int numOfAprtmnt;
    float occupancyRate;
    bool isBuildingOccupied;

public:
    BuildingBlueprint() {
        numOfStories = 10;
        numOfAprtmnt = 20;
        occupancyRate = 100;
        isBuildingOccupied = true;
    }

    BuildingBlueprint(int numOfStories, int numOfAprtmnt, float occupancyRate) {
        this->numOfStories = numOfStories;
        this->numOfAprtmnt = numOfAprtmnt;
        this->occupancyRate = occupancyRate;
        if ((float)occupancyRate / 100 == 1.0) {
            isBuildingOccupied = true;
        }
        else {
            isBuildingOccupied = false;
        }
    }
    
    float getOccupancyRate() {
        return occupancyRate;
    }

    void setOccupancyRate(float occupancyRate) {
        this->occupancyRate = occupancyRate;
    }

    int getNumOfStories() {
        return numOfStories;
    }

    int getNumOfAprtmnt() {
        return numOfAprtmnt;
    }

    bool getIsBuildingOccupied() {
        if ((float)occupancyRate / 100 == 1.0) {
            isBuildingOccupied = true;
        }
        else {
            isBuildingOccupied = false;
        }
        return isBuildingOccupied;
    }
};

int main()
{
    BuildingBlueprint buildingOne;

    BuildingBlueprint buildingTwo(30, 30, 75);

    cout << "Year 2020:" << endl;
    
    cout << "Building 1 has " << buildingOne.getNumOfStories() << " floors, " << buildingOne.getNumOfAprtmnt();
    cout << " apartments, and is " << buildingOne.getOccupancyRate() << "% occupied. ";
    if (buildingOne.getIsBuildingOccupied() == 1) {
        cout << "Full? true" << endl;
    }
    else {
        cout << "Full? false" << endl;
    }

    cout << "Building 2 has " << buildingTwo.getNumOfStories() << " floors, " << buildingTwo.getNumOfAprtmnt();
    cout << " apartments, and is " << buildingTwo.getOccupancyRate() << "% occupied. ";
    if (buildingTwo.getIsBuildingOccupied() == 1) {
        cout << "Full? true" << endl;
    }
    else {
        cout << "Full? false" << endl;
    }

    cout << endl;
    cout << "Many years pass.\n\n";


    buildingOne.setOccupancyRate(0);
    buildingTwo.setOccupancyRate(100);

    cout << "Year 2043:" << endl;
    cout << "Building 1 has " << buildingOne.getNumOfStories() << " floors, " << buildingOne.getNumOfAprtmnt();
    cout << " apartments, and is " << buildingOne.getOccupancyRate() << "% occupied. ";
    if (buildingOne.getIsBuildingOccupied() == 1) {
        cout << "Full? true" << endl;
    }
    else {
        cout << "Full? false" << endl;
    }

    cout << "Building 2 has " << buildingTwo.getNumOfStories() << " floors, " << buildingTwo.getNumOfAprtmnt();
    cout << " apartments, and is " << buildingTwo.getOccupancyRate() << "% occupied. ";
    if (buildingTwo.getIsBuildingOccupied() == 1) {
        cout << "Full? true" << endl;
    }
    else {
        cout << "Full? false" << endl;
    }

    cout << "\nLooks like people prefer taller buildings.";


    return 0;
}
