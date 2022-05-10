#ifndef KEEN_H
#define KEEN_H

#include <Watchy.h>

class WatchyKeen : public Watchy {
  using Watchy::Watchy;

  public:
    void drawWatchFace();
    void clearScreen();
    void drawBackground();
    void drawTime();
    void drawDate();
    void drawWeekday();
    void drawBattery();
};

#endif
