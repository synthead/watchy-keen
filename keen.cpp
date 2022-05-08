#include "keen.h"
#include "graphics.h"

#define POINTS_X 3
#define POINTS_Y 12

#define LIVES_X 35
#define LIVES_Y 44

#define AMMO_X 115
#define AMMO_Y 44

void WatchyKeen::drawWatchFace() {
  clearScreen();

  drawBackground();
  drawTime();
  drawDate();
}

void WatchyKeen::clearScreen() {
  display.fillScreen(GxEPD_WHITE);
}

void WatchyKeen::drawBackground() {
  display.drawBitmap(0, 0, background, DISPLAY_WIDTH, DISPLAY_HEIGHT, GxEPD_BLACK);
}

void WatchyKeen::drawTime() {
  display.setFont(&keen_score_font);
  display.setTextColor(GxEPD_WHITE);

  display.setCursor(POINTS_X, POINTS_Y);

  display.print(";;;;");

  uint8_t hour = currentTime.Hour % 12;

  if (hour == 0) {
    hour = 12;
  }

  if (hour < 10) {
    display.print(";");
  }

  display.print(hour);
  display.print(":");

  if (currentTime.Minute < 10) {
    display.print(0);
  }

  display.print(currentTime.Minute);
}

void WatchyKeen::drawDate() {
  display.setFont(&keen_score_font);
  display.setTextColor(GxEPD_WHITE);

  display.setCursor(LIVES_X, LIVES_Y);

  if (currentTime.Month < 10) {
    display.print(";");
  }

  display.print(currentTime.Month);

  display.setCursor(AMMO_X, AMMO_Y);

  if (currentTime.Day < 10) {
    display.print(";");
  }

  display.print(currentTime.Day);
}
