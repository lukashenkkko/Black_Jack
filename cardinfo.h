#ifndef CARDINFO_H
#define CARDINFO_H

#include "iostream"
#include "QString"

class CardInfo
{
public:
    CardInfo(std::string link, int cost, int skinID);

    QString link;
    int cost;
};

#endif // CARDINFO_H
