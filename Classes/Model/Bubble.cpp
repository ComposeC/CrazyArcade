#include "Bubble.h"
#include "Settings.h"

Bubble * Bubble::create(const std::string & id, uint8_t damage)
{
    auto bubble = new (std::nothrow) Bubble();
    if (bubble && bubble->init())
    {
        bubble->_id = id;
        bubble->_damage = damage;

        bubble->autorelease();
        return bubble;
    }
    CC_SAFE_DELETE(bubble);
    return nullptr;
}

bool Bubble::init()
{
    if (!this->initWithFile(Settings::Bubble::path))
    {
        return false;
    }
    return true;
}

uint8_t Bubble::getDamage()
{
    return _damage;
}

void Bubble::setStatus(Status status)
{
    // this->_status = status;
    if (status == Status::ALIVE)
    {
        // TODO animation
    }
    else if (status == Status::BOOM)
    {
        // TODO animation
    }
}