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
    void placeChemical(int cabinetId, char const* location, char const* chemType, int chemId);
    void findChemical(int id);
    void removeChemical(int id);
};