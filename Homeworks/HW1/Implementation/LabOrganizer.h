#include<iostream>
#include <cstring>

class LabOrganizer {

public:
    LabOrganizer();
    ~LabOrganizer();

    void addCabinet(int id, int rows, int columns);
    void removeCabinet(int id);
    void listCabinets();
    void cabinetContents(int id);
    void placeChemical(int cabinetId, string location, string chemType, int chemId);
    void findChemical(int id);
    void removeChemical(int id);
};