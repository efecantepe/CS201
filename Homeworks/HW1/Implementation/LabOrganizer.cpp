#include <iostream>
#include <string>
#include "LabOrganizer.h"
class LabOrganizer{

public:

    const int START_OF_BIG_LETTER_ASCII = 41; // For the start of the Big letters in ASCII. 
    const int MAX_ROW = 9; // Defining the maximum row.
    const int MAX_COLUMN = 9; // Defining the .

    int row;
    int column;

    /*
        Lab Organizer Constructor
    */
    LabOrganizer(){

    }

    ~LabOrganizer(){

    }

    void addCabinet(int id, int rows, int columns){

    }
    void removeCabinet(int id){

    }
    void listCabinets(){

    }
    void cabinetContents(int id){

    }
    void placeChemical(int cabinetId, char const* location, char const* chemType, int chemId){

    }
    void findChemical(int id){

    }
    void removeChemical(int id){

    }



};