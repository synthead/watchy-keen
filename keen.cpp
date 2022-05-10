#include "keen.h"
#include "graphics.h"

#define BACKGROUND_SWITCH_MINUTES 10

#define WEEKDAY_X 19
#define WEEKDAY_Y 12

#define POINTS_X 51
#define POINTS_Y 12

#define LIVES_X 35
#define LIVES_Y 44

#define AMMO_X 115
#define AMMO_Y 44

#define BATTERY_X 165
#define BATTERY_Y 180

#define BATTERY_SEGMENT_WIDTH 7
#define BATTERY_SEGMENT_HEIGHT 11
#define BATTERY_SEGMENT_SPACING 9

time_t epoch;

void WatchyKeen::drawWatchFace() {
  epoch = makeTime(currentTime);

  clearScreen();

  drawBackground();
  drawTime();
  drawDate();
  drawWeekday();
  drawBattery();
}

void WatchyKeen::clearScreen() {
  display.fillScreen(GxEPD_BLACK);
}

void WatchyKeen::drawBackground() {
  uint8_t background_number = epoch / 60 / BACKGROUND_SWITCH_MINUTES % BACKGROUNDS;
  const unsigned char *background = backgrounds[background_number];

  display.drawBitmap(0, 0, background, DISPLAY_WIDTH, DISPLAY_HEIGHT, GxEPD_WHITE);
}

void WatchyKeen::drawTime() {
  display.setFont(&keen_score_font);
  display.setTextColor(GxEPD_WHITE);

  display.setCursor(POINTS_X, POINTS_Y);

  display.print(";");

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

void WatchyKeen::drawWeekday() {
  uint8_t weekday_index = weekday(epoch) - 1;
  const unsigned char *current_weekday = weekdays[weekday_index];

  display.drawBitmap(WEEKDAY_X, WEEKDAY_Y, current_weekday, WEEKDAY_WIDTH, WEEKDAY_HEIGHT, GxEPD_WHITE);
}

void WatchyKeen::drawBattery() {
  float voltage = getBatteryVoltage();
  uint8_t level = 0;

  if (voltage > 4.1) {
    level = 3;
  } else if (voltage > 3.95) {
    level = 2;
  } else if (voltage > 3.80) {
    level = 1;
  }

  for (uint8_t segment = 0; segment < level; segment++) {
    uint8_t battery_x = BATTERY_X + (segment * BATTERY_SEGMENT_SPACING);

    display.fillRect(battery_x, BATTERY_Y, BATTERY_SEGMENT_WIDTH, BATTERY_SEGMENT_HEIGHT, GxEPD_BLACK);
  }
}
