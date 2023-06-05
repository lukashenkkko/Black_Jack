#include "cardinfo.h"

CardInfo::CardInfo(std::string link, int cost, int skinID)
{
    this->cost=cost;
   // :/Cards3/image/cards/3/3C.png
   // :/Cards2/image/cards/2/10P.png
   // :/Cards1/image/cards/1/AP.png
    std::string linkSTR;
    linkSTR= ":/Cards"+std::to_string(skinID)+"/image/cards/"+std::to_string(skinID)+"/";
    linkSTR.insert(23,link,23,link.size()-23);
    //linkSTR.insert()
    this->link=QString::fromStdString(linkSTR);
}
