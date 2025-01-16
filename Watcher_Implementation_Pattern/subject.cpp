#include "subject.hpp"


void Subject::notifyWatchers()
{
    for (auto watcher : watchers)
    {
        watcher->update();
    }
}

void Subject::addWatcher(Watcher *watcher)
{
    watchers.insert(watcher);
}

void Subject::removeWatcher(Watcher *watcher)
{
    watchers.erase(watcher);
}