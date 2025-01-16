#pragma once
#include <unordered_set>
#include "watcher.hpp"

class Subject
{
private:
    std::unordered_set<Watcher*> watchers;

public:
    void addWatcher(Watcher *);

    void removeWatcher(Watcher *);

    void notifyWatchers();
};