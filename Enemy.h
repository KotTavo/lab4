#pragma once
#include "Entity.h"

class Enemy : public Entity
{
    std::string type;

public:

    Enemy(const std::string& n, int h, const std::string& t);

    void displayInfo() const override;

    ~Enemy();

};

