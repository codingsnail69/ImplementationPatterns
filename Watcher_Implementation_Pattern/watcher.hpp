#pragma once
class Watcher
{
public:
    virtual void update() = 0;
    virtual ~Watcher() = default;
};