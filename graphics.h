#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <Watchy.h>

const unsigned char background[] PROGMEM = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x05, 0xc5, 0xfb, 0xfc, 0x1f, 0xd5, 0x55, 0x55, 0x3f,
  0xfb, 0xf8, 0xfe, 0xe3, 0xa0, 0xd9, 0xdf, 0xd9, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f,
  0xf1, 0xd0, 0xfb, 0xfb, 0xdf, 0xea, 0xaa, 0xaa, 0x3f, 0xf7, 0xff, 0x3e, 0x0b, 0x8f, 0xe7, 0xef,
  0xe7, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xf1, 0xc2, 0xe3, 0xfb, 0xdf, 0xd5, 0x55,
  0x55, 0x3f, 0xf7, 0xff, 0xde, 0xc3, 0x8f, 0x03, 0xf4, 0x03, 0xf4, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0x9f, 0xea, 0x97, 0x80, 0xf7, 0xdf, 0xea, 0xaa, 0xaa, 0x80, 0x0f, 0xfc, 0x02, 0xeb, 0x9f,
  0xf7, 0xf3, 0xf7, 0xf3, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xf7, 0xfb, 0xf7, 0xfe, 0x7f, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xfb, 0x83, 0xfb, 0x83, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x7d, 0xf9, 0x7d, 0xfe,
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xe0, 0xfd, 0xc0, 0xfd, 0xfe, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x7e, 0xbf,
  0x7e, 0xfe, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xbf, 0x7f, 0xbf, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe1,
  0x9f, 0xc1, 0x9f, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe, 0xd1, 0xbe, 0xd1, 0xfe, 0x18, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xff, 0x4e, 0x1f, 0x4e, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xef, 0x04, 0xef, 0x04, 0xfe, 0x18,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xf6, 0xf3, 0xf6, 0xf3, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf5, 0xfb, 0xf5, 0xfb,
  0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xe2, 0x1a, 0xd9, 0xdf, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf9, 0xe8,
  0xe7, 0xef, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfd, 0xf7, 0x03, 0xf4, 0xfe, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xfe, 0xf7, 0xf7, 0xf3, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe5, 0x43, 0xfb, 0xf7, 0xfe, 0x18, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xf9, 0x3d, 0xfb, 0x83, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe, 0x7e, 0xf9, 0x7d, 0xfe,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xfe, 0xff, 0xc0, 0xfd, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf0, 0x7f, 0xbf,
  0x7e, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe7, 0xa2, 0x7f, 0xbf, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xef,
  0xdd, 0xc1, 0x9f, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xef, 0xdb, 0xbe, 0xd1, 0xfe, 0x18, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xe3, 0xc3, 0x1f, 0x4e, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfd, 0x9d, 0xef, 0x04, 0xfe, 0x18,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xfe, 0xbe, 0xf6, 0xf3, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe, 0x3e, 0xf5, 0xfb,
  0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf9, 0xdf, 0xd9, 0xdf, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe7, 0xef,
  0xe7, 0xef, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xf4, 0x03, 0xf4, 0xfe, 0x1f, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xf7, 0xf3, 0xf7, 0xf3, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xf7, 0xfb, 0xf7, 0xfe, 0x1f, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xfb, 0x83, 0xfb, 0x83, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf9, 0x7d, 0xf9, 0x7d, 0xfe,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xe0, 0xfd, 0xc0, 0xfd, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x7e, 0xbf,
  0x7e, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xbf, 0x7f, 0xbf, 0xfe, 0x18, 0x00, 0x1f, 0xf8, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe1,
  0x9f, 0xc1, 0x9f, 0xfe, 0x18, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x00,
  0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe, 0xd1, 0xbe, 0xd1, 0xfe, 0x18, 0x00, 0x7f,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x10, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xff, 0x4e, 0x1f, 0x4e, 0xfe, 0x18, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xf8, 0x00, 0x28, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0xef, 0x04, 0xef, 0x04, 0xfe, 0x18,
  0x01, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x44, 0x47, 0xc0, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xf6, 0xf3, 0xf6, 0xf3, 0xfe, 0x18, 0x01, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xf8, 0x00, 0x2a, 0xaf, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf5, 0xfb, 0xf5, 0xfb,
  0xfe, 0x18, 0x01, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x01, 0x01, 0x01, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xed, 0xfb, 0xd9, 0xdf, 0xfe, 0x18, 0x01, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0xaa, 0xab, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf5, 0xe7,
  0xe7, 0xef, 0xfe, 0x18, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x04, 0x44,
  0x05, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf9, 0xdf, 0x03, 0xf4, 0xfe, 0x18, 0x01, 0xff, 0xe0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x02, 0xaa, 0x83, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xf0, 0xdf, 0xf7, 0xf3, 0xfe, 0x18, 0x01, 0xf9, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8,
  0x01, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xef, 0x23, 0xfb, 0xf7, 0xfe, 0x18, 0x01,
  0xf9, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x02, 0xa8, 0x02, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xef, 0xbd, 0xfb, 0x83, 0xfe, 0x18, 0x00, 0x7f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xf8, 0x04, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x7e, 0xf9, 0x7d, 0xfe,
  0x18, 0x00, 0x7f, 0xff, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x02, 0xa0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xf0, 0xfe, 0xc0, 0xfd, 0xfe, 0x18, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x01, 0xf8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe6, 0xfd, 0xbf,
  0x7e, 0xfe, 0x18, 0x00, 0x00, 0x07, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x02, 0xa0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xef, 0x40, 0x7f, 0xbf, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xef,
  0x9e, 0xc1, 0x9f, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xec, 0x7f, 0xbe, 0xd1, 0xfe, 0x18, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xe6, 0xff, 0x1f, 0x4e, 0xfe, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe2, 0x78, 0xef, 0x04, 0xfe, 0x1e,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1f, 0xf1, 0x97, 0xf6, 0xf3, 0xfe, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xeb, 0xe7, 0xf5, 0xfb,
  0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x5e, 0xd9, 0xdf, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x15,
  0xe7, 0xef, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0xc8, 0x03, 0xf4, 0xfe, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x77, 0xf7, 0xf7, 0xf3, 0xff, 0xf9, 0xdf, 0xfe, 0x03, 0xfb, 0xf7, 0xbc, 0x7f, 0x05, 0x43, 0xfe,
  0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xef, 0xfb, 0xf7, 0xff, 0xfa, 0xdf,
  0xff, 0x78, 0xfb, 0x83, 0x7e, 0xfe, 0x79, 0x3d, 0xfe, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xeb, 0xec, 0xfb, 0x83, 0xff, 0xf9, 0xdf, 0xfe, 0x79, 0xf9, 0x7d, 0xfc, 0xc0, 0xfe,
  0x7e, 0xc1, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe5, 0xeb, 0xf9, 0x7d, 0xff,
  0xfa, 0xdf, 0xfc, 0xb6, 0xc0, 0xfd, 0x83, 0xbe, 0xfe, 0xff, 0x1e, 0xbf, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xea, 0xc7, 0xc0, 0xfd, 0xff, 0xf1, 0xcf, 0xf8, 0x57, 0xbf, 0x7e, 0x7b,
  0x7f, 0x70, 0x7f, 0xbf, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 0xaf, 0xbf,
  0x7e, 0xff, 0xca, 0xf3, 0xf2, 0xa1, 0x7f, 0xbf, 0xfb, 0x7f, 0x67, 0xa2, 0x1f, 0xbf, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x3f, 0x7f, 0xbf, 0xff, 0x95, 0xfd, 0xfa, 0x5e, 0xc1,
  0x9f, 0xc4, 0xf0, 0x0f, 0xdd, 0xef, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd4,
  0x2f, 0xc1, 0x9f, 0xff, 0x2a, 0xfe, 0xfc, 0xaf, 0xbe, 0xd1, 0x3b, 0x2f, 0xef, 0xdb, 0xf7, 0xaf,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa8, 0x9f, 0xbe, 0xd1, 0xff, 0x55, 0xfe, 0xf8,
  0x17, 0x1f, 0x4e, 0x7d, 0x0f, 0xc3, 0xc3, 0xf7, 0x97, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xd1, 0x07, 0x1f, 0x4e, 0xff, 0xab, 0xf9, 0xfe, 0x22, 0xef, 0x04, 0xfc, 0xef, 0xbd, 0x9d,
  0xe6, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa2, 0x00, 0xef, 0x04, 0xff, 0xc5,
  0x53, 0xf8, 0x1c, 0xf6, 0xf3, 0xfd, 0xf0, 0x7e, 0xbe, 0x99, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xd0, 0x03, 0xf6, 0xf3, 0xff, 0xf0, 0x0f, 0xfc, 0x3f, 0xf5, 0xfb, 0x1b, 0xf7,
  0xbe, 0x3e, 0xbe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xea, 0x8f, 0xf5, 0xfb,
  0xff, 0xff, 0xff, 0xfe, 0x5e, 0x02, 0x1a, 0xeb, 0xcf, 0xd9, 0xdf, 0xe0, 0xf6, 0x7b, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xe1, 0xff, 0xfd, 0x1f, 0x8d, 0xfb, 0xff, 0xff, 0xff, 0xfc, 0x35, 0xf9, 0xe8,
  0xf3, 0xbf, 0xe7, 0xef, 0x1f, 0x79, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xde, 0xff, 0xff, 0x87,
  0xf5, 0xe7, 0xff, 0xff, 0xff, 0xeb, 0xc8, 0xfd, 0xf7, 0x61, 0xbf, 0x03, 0xf4, 0xbf, 0x83, 0x3d,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x0f, 0xff, 0x0b, 0xf9, 0xdf, 0xff, 0xff, 0xff, 0xf7, 0xf7,
  0x7e, 0xf7, 0x9e, 0x46, 0xf7, 0xf3, 0xc3, 0x7c, 0xbe, 0xbf, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xb7,
  0xff, 0x05, 0xb0, 0xdf, 0xff, 0xff, 0xff, 0xe7, 0xef, 0x05, 0x43, 0xdf, 0x7a, 0xfb, 0xf7, 0xbc,
  0x7f, 0xfe, 0x5f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xb7, 0xfd, 0x0a, 0xcf, 0x23, 0xff, 0xff, 0xff,
  0xea, 0x00, 0x79, 0x3d, 0xbe, 0xfd, 0xfb, 0x83, 0x7e, 0xfe, 0xfe, 0xbf, 0xff, 0xff, 0xff, 0xff,
  0x7f, 0xa7, 0xfa, 0xa0, 0xef, 0xbd, 0xff, 0xff, 0xff, 0xe1, 0xfd, 0xfe, 0x7e, 0xa1, 0xfd, 0xf9,
  0x7d, 0xfc, 0xc0, 0xc1, 0x5f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xa7, 0xfd, 0x50, 0xdf, 0x7e, 0xff,
  0xff, 0xff, 0xe7, 0xfe, 0xfe, 0xff, 0xcd, 0xfa, 0xc0, 0xfd, 0x83, 0xbe, 0x1e, 0xbf, 0xff, 0xff,
  0xff, 0xff, 0x7f, 0xa7, 0xfe, 0x88, 0xd0, 0xfe, 0xff, 0xff, 0xff, 0x03, 0xff, 0x70, 0x7f, 0xde,
  0x81, 0xbf, 0x7e, 0x7b, 0x7f, 0xbf, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xbb, 0x83, 0xff, 0x10, 0xe6,
  0xfd, 0xff, 0xff, 0xfc, 0xfc, 0x7c, 0x67, 0xa2, 0xdf, 0x3d, 0x7f, 0xbf, 0xfb, 0x7f, 0x1f, 0xbf,
  0xff, 0xff, 0xff, 0xff, 0xde, 0x23, 0xff, 0xa8, 0xef, 0x40, 0xff, 0xff, 0xfb, 0xff, 0xbb, 0x0f,
  0xdd, 0xc0, 0xfe, 0xc1, 0x9f, 0xc4, 0xf0, 0xef, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff,
  0xf1, 0xef, 0x9e, 0xff, 0xff, 0xe7, 0xff, 0xd7, 0xef, 0xdb, 0x9d, 0xfe, 0xbe, 0xd1, 0x3b, 0x2f,
  0xf7, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xab, 0xff, 0xf2, 0x2c, 0x7f, 0xff, 0xff, 0xdf, 0xff,
  0xcf, 0xc3, 0xc3, 0x7c, 0xf0, 0x1f, 0x4e, 0x7d, 0x0f, 0xf7, 0x97, 0xff, 0xff, 0xff, 0xff, 0xfc,
  0x43, 0xff, 0xf0, 0x06, 0xff, 0xff, 0xff, 0xdf, 0xff, 0x83, 0xbd, 0x9d, 0x98, 0x2f, 0xef, 0x04,
  0xfc, 0xef, 0xe6, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xc3, 0xff, 0xfa, 0xa2, 0x78, 0xff, 0xff,
  0xbf, 0xff, 0x9c, 0x7e, 0xbe, 0xe7, 0x9f, 0xf6, 0xf3, 0xfd, 0xf0, 0x99, 0x5f, 0xff, 0xff, 0xff,
  0xff, 0xfe, 0x07, 0xff, 0xfd, 0x11, 0x97, 0xff, 0xff, 0xbf, 0xfe, 0x7f, 0xbe, 0x3e, 0xef, 0xef,
  0xf5, 0xfb, 0x1b, 0xf7, 0xbe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x8b, 0xe7,
  0x7f, 0xff, 0xbf, 0xfd, 0xff, 0xd9, 0xdf, 0xe0, 0xf6, 0xe0, 0xf6, 0x02, 0x1a, 0xd9, 0xdf, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x1f, 0xaf, 0xff, 0x9f, 0xfb, 0xff, 0xe7, 0xef,
  0x1f, 0x79, 0x1f, 0x79, 0xf9, 0xe8, 0xe7, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f,
  0xff, 0x87, 0x57, 0xff, 0xbf, 0xf7, 0xff, 0x03, 0xf4, 0xbf, 0x83, 0xbf, 0x83, 0xfd, 0xf7, 0x03,
  0xf4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xbf, 0xff, 0x0b, 0xaf, 0xff, 0x9f, 0xf7, 0xff,
  0xf7, 0xf3, 0xc3, 0x7c, 0xc3, 0x7c, 0x7e, 0xf7, 0xf7, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
  0x0f, 0xdf, 0xff, 0x05, 0x57, 0xff, 0xaf, 0xf7, 0x07, 0xfb, 0xf7, 0xbc, 0x7f, 0xbc, 0x7f, 0x05,
  0x43, 0xfb, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0xff, 0xef, 0xfd, 0x0a, 0xab, 0xff, 0xb7,
  0xf6, 0xf3, 0xfb, 0x83, 0x7e, 0xfe, 0x7e, 0xfe, 0x79, 0x3d, 0xfb, 0x83, 0xff, 0xff, 0xff, 0xff,
  0xf8, 0xea, 0xbf, 0xe7, 0xfa, 0xa0, 0x57, 0xff, 0xaa, 0xf5, 0xfb, 0xf9, 0x7d, 0xfc, 0xc0, 0xfc,
  0xc0, 0xfe, 0x7e, 0xf9, 0x7d, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xe5, 0x7f, 0xe3, 0xfd, 0x50, 0xaf,
  0xff, 0x9d, 0x81, 0xfd, 0xc0, 0xfd, 0x83, 0xbe, 0x83, 0xbe, 0xfe, 0xff, 0xc0, 0xfd, 0xff, 0xff,
  0xff, 0xff, 0xdf, 0xf0, 0x3f, 0xeb, 0xfe, 0x88, 0x57, 0xff, 0xca, 0x7c, 0xfd, 0xbf, 0x7e, 0x7b,
  0x7f, 0x7b, 0x7f, 0x70, 0x7f, 0xbf, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xe3, 0xff,
  0x10, 0xab, 0xff, 0xd6, 0xff, 0x7d, 0x7f, 0xbf, 0xfb, 0x7f, 0xfb, 0x7f, 0x67, 0xa2, 0x7f, 0xbf,
  0x7f, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xf7, 0xff, 0xa8, 0x55, 0xff, 0xc9, 0xff, 0xbd, 0xc1,
  0x9f, 0xc4, 0xf0, 0xc4, 0xf0, 0x0f, 0xdd, 0xc1, 0x9f, 0xbf, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff,
  0xf7, 0xff, 0xf1, 0xab, 0xff, 0xcd, 0xff, 0xbb, 0xbe, 0xd1, 0x3b, 0x2f, 0x3b, 0x2f, 0xef, 0xdb,
  0xbe, 0xd1, 0xdf, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xef, 0xff, 0xf2, 0x57, 0xff, 0xc2, 0xbf,
  0xbb, 0x1f, 0x4e, 0x7d, 0x0f, 0x7d, 0x0f, 0xc3, 0xc3, 0x1f, 0x4e, 0xcf, 0xff, 0xff, 0xff, 0xff,
  0x01, 0xff, 0xdf, 0xff, 0xf0, 0xaf, 0xff, 0xe3, 0x7f, 0x87, 0xef, 0x04, 0xfc, 0xef, 0xfc, 0xef,
  0xbd, 0x9d, 0xef, 0x04, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xab, 0x1f, 0xff, 0xfa, 0x55, 0xff,
  0xc0, 0xff, 0x80, 0xf6, 0xf3, 0xfd, 0xf0, 0xfd, 0xf0, 0x7e, 0xbe, 0xf6, 0xf3, 0x87, 0xff, 0xff,
  0xff, 0xff, 0xf8, 0x00, 0x1f, 0xff, 0xfd, 0xef, 0xff, 0xe8, 0xff, 0xa8, 0xf5, 0xfb, 0x1b, 0xf7,
  0x1b, 0xf7, 0xbe, 0x3e, 0xf5, 0xfb, 0x7b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xfe,
  0x57, 0xff, 0xd0, 0x7e, 0x13, 0xd9, 0xdf, 0xeb, 0xcf, 0xeb, 0xcf, 0xd9, 0xdf, 0xeb, 0xcf, 0xeb,
  0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xab, 0xff, 0xea, 0x00, 0x27, 0xe7, 0xef,
  0xf3, 0xbf, 0xf3, 0xbf, 0xe7, 0xef, 0xf3, 0xbf, 0xf3, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0x57, 0xff, 0xf4, 0x00, 0x0f, 0x03, 0xf4, 0x61, 0xbf, 0x61, 0xbf, 0x03, 0xf4, 0x61,
  0xbf, 0x61, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xaf, 0xff, 0xfb, 0x88, 0xaf,
  0xf7, 0xf3, 0x9e, 0x46, 0x9e, 0x46, 0xf7, 0xf3, 0x9e, 0x46, 0x9e, 0x46, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0x57, 0xff, 0xfd, 0x15, 0x4f, 0xfb, 0xf7, 0xdf, 0x7a, 0xdf, 0x7a, 0xfb,
  0xf7, 0xdf, 0x7a, 0xdf, 0x7a, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0xff, 0xe1, 0xab, 0xff, 0xfe,
  0xa8, 0x8f, 0xfb, 0x83, 0xbe, 0xfd, 0xbe, 0xfd, 0xfb, 0x83, 0xbe, 0xfd, 0xbe, 0xfd, 0xff, 0xff,
  0xff, 0x9e, 0xff, 0xff, 0xff, 0x9e, 0x55, 0xff, 0xfd, 0x54, 0x45, 0xf9, 0x7d, 0xa1, 0xfd, 0xa1,
  0xfd, 0xf9, 0x7d, 0xa1, 0xfd, 0xa1, 0xfd, 0x7f, 0xff, 0xf0, 0x7f, 0x7f, 0xff, 0xf0, 0x7f, 0xab,
  0xff, 0xfe, 0xc0, 0xaa, 0xc0, 0xfd, 0xcd, 0xfa, 0xcd, 0xfa, 0xc0, 0xfd, 0xcd, 0xfa, 0xcd, 0xfa,
  0x1f, 0xff, 0xcf, 0xbe, 0x1f, 0xff, 0xcf, 0xbe, 0x57, 0xff, 0xff, 0xdd, 0x55, 0xbf, 0x7e, 0xde,
  0x81, 0xde, 0x81, 0xbf, 0x7e, 0xde, 0x81, 0xde, 0x81, 0xe3, 0xe0, 0xbf, 0xdd, 0xe3, 0xe0, 0xbf,
  0xdd, 0xab, 0xff, 0xff, 0xee, 0xa8, 0x7f, 0xbf, 0xdf, 0x3d, 0xdf, 0x3d, 0x7f, 0xbf, 0xdf, 0x3d,
  0xdf, 0x3d, 0xfd, 0x9f, 0xbe, 0x0b, 0xfd, 0x9f, 0xbe, 0x0b, 0x57, 0xff, 0xff, 0xf7, 0xf4, 0xc1,
  0x9f, 0xc0, 0xfe, 0xc0, 0xfe, 0xc1, 0x9f, 0xc0, 0xfe, 0xc0, 0xfe, 0xfd, 0x7f, 0xbd, 0xf5, 0xfd,
  0x7f, 0xbd, 0xf5, 0xaf, 0xff, 0xff, 0xff, 0x06, 0xbe, 0xd1, 0x9d, 0xfe, 0x9d, 0xfe, 0xbe, 0xd1,
  0x9d, 0xfe, 0x9d, 0xfe, 0xe0, 0xff, 0xc9, 0xea, 0xe0, 0xff, 0xc9, 0xea, 0x55, 0xff, 0xff, 0xfc,
  0xf8, 0x1f, 0x4e, 0x7c, 0xf0, 0x7c, 0xf0, 0x1f, 0x4e, 0x7c, 0xf0, 0x7c, 0xf0, 0x5e, 0x1f, 0x33,
  0x1f, 0x5e, 0x1f, 0x33, 0x1f, 0xaf, 0xff, 0xff, 0xf3, 0xfc, 0xef, 0x04, 0x98, 0x2f, 0x98, 0x2f,
  0xef, 0x04, 0x98, 0x2f, 0x98, 0x2f, 0xbd, 0xef, 0xfc, 0xef, 0xbd, 0xef, 0xfc, 0xef, 0x57, 0xff,
  0xff, 0xef, 0xfc, 0xf6, 0xf3, 0xe7, 0x9f, 0xe7, 0x9f, 0xf6, 0xf3, 0xe7, 0x9f, 0xe7, 0x9f, 0xbb,
  0xf7, 0xfe, 0xf7, 0xbb, 0xf7, 0xfe, 0xf7, 0xeb, 0xff, 0xff, 0xf7, 0xf9, 0xf5, 0xfb, 0xef, 0xef,
  0xef, 0xef, 0xf5, 0xfb, 0xef, 0xef, 0xef, 0xef, 0xbb, 0xf7, 0xfe, 0xf7, 0xbb, 0xf7, 0xfe, 0xf7,
  0x55, 0xff, 0xff, 0xff, 0xa0, 0xdf, 0x1f, 0x9f, 0xf7, 0xfb, 0xfc, 0xfb, 0xfc, 0x9f, 0xf7, 0xfb,
  0xfc, 0xfb, 0xfc, 0x8d, 0xfb, 0xe0, 0xf6, 0xe0, 0xf6, 0xab, 0xff, 0xff, 0xff, 0x8f, 0xec, 0xef,
  0xaf, 0xf7, 0xfb, 0xfe, 0xfb, 0xfe, 0xaf, 0xf7, 0xfb, 0xfe, 0xfb, 0xfe, 0xf5, 0xe7, 0x1f, 0x79,
  0x1f, 0x79, 0x57, 0xff, 0xff, 0xff, 0x8f, 0xf3, 0xf7, 0x9f, 0xf7, 0xfb, 0xfc, 0xfb, 0xfc, 0x9f,
  0xf7, 0xfb, 0xfc, 0xfb, 0xfc, 0xf9, 0xdf, 0xbf, 0x83, 0xbf, 0x83, 0xab, 0xff, 0xff, 0xff, 0x9f,
  0x81, 0xfa, 0xaf, 0xf7, 0xf9, 0xfd, 0xf9, 0xfd, 0xaf, 0xf7, 0xf9, 0xfd, 0xf9, 0xfd, 0xb0, 0xdf,
  0xc3, 0x7c, 0xc3, 0x7c, 0x55, 0xff, 0xff, 0xfe, 0x03, 0x7b, 0xf9, 0x17, 0xf3, 0xf1, 0xc1, 0xf1,
  0xc1, 0x17, 0xf3, 0xf1, 0xc1, 0xf1, 0xc1, 0xcf, 0x23, 0xbc, 0x7f, 0xbc, 0x7f, 0xae, 0xff, 0xff,
  0xff, 0x78, 0x7d, 0xfb, 0x6b, 0x29, 0x22, 0x21, 0x22, 0x21, 0x6b, 0x29, 0x22, 0x21, 0x22, 0x21,
  0xef, 0xbd, 0x7e, 0xfe, 0x7e, 0xfe, 0x57, 0xff, 0xff, 0xfe, 0x79, 0xfd, 0xc1, 0x00, 0x1b, 0xcd,
  0x30, 0xcd, 0x30, 0x00, 0x1b, 0xcd, 0x30, 0xcd, 0x30, 0xdf, 0x7e, 0xfc, 0xc0, 0xfc, 0xc0, 0xaf,
  0xff, 0xff, 0xfc, 0xb6, 0xfc, 0xbe, 0xc1, 0xc1, 0x88, 0x00, 0x88, 0x00, 0xc1, 0xc1, 0x88, 0x00,
  0x88, 0x00, 0xd0, 0xfe, 0x83, 0xbe, 0x83, 0xbe, 0x57, 0xff, 0xff, 0xf8, 0x57, 0x60, 0x7e, 0x40,
  0xd0, 0x44, 0x10, 0x44, 0x10, 0x40, 0xd0, 0x44, 0x10, 0x44, 0x10, 0xe6, 0xfd, 0x7b, 0x7f, 0x7b,
  0x7f, 0xab, 0xff, 0xff, 0xf2, 0xa1, 0xdf, 0xbf, 0xa2, 0x22, 0x82, 0x20, 0x82, 0x20, 0xa2, 0x22,
  0x82, 0x20, 0x82, 0x20, 0xef, 0x40, 0xfb, 0x7f, 0xfb, 0x7f, 0x57, 0xff, 0xff, 0xfa, 0x5e, 0xbf,
  0xdf, 0x41, 0x01, 0x40, 0x51, 0x40, 0x51, 0x41, 0x01, 0x40, 0x51, 0x40, 0x51, 0xef, 0x9e, 0xc4,
  0xf0, 0xc4, 0xf0, 0xab, 0xff, 0xff, 0xfc, 0xaf, 0x60, 0xce, 0xa2, 0x8a, 0xa0, 0xaa, 0xa0, 0xaa,
  0xa2, 0x8a, 0xa0, 0xaa, 0xa0, 0xaa, 0x2c, 0x7f, 0x3b, 0x2f, 0x3b, 0x2f, 0x55, 0xff, 0xff, 0xf8,
  0x17, 0x5f, 0x6d, 0x45, 0x45, 0x51, 0x11, 0x51, 0x11, 0x45, 0x45, 0x51, 0x11, 0x51, 0x11, 0x06,
  0xff, 0x7d, 0x0f, 0x7d, 0x0f, 0xaa, 0xff, 0xff, 0xfe, 0x22, 0x0f, 0xa6, 0x0a, 0xa0, 0x8a, 0x23,
  0x8a, 0x23, 0x0a, 0xa0, 0x8a, 0x23, 0x8a, 0x23, 0xa2, 0x78, 0xfc, 0xef, 0xfc, 0xef, 0x57, 0xff,
  0xff, 0xf8, 0x1c, 0xf7, 0x85, 0x40, 0x14, 0x55, 0x47, 0x55, 0x47, 0x40, 0x14, 0x55, 0x47, 0x55,
  0x47, 0x11, 0x97, 0xfd, 0xf0, 0xfd, 0xf0, 0xeb, 0xff, 0xff, 0xfc, 0x3f, 0xf8, 0x68, 0xee, 0x6e,
  0xea, 0xef, 0xea, 0xef, 0xee, 0x6e, 0xea, 0xef, 0xea, 0xef, 0x8b, 0xe7, 0x1b, 0xf7, 0x1b, 0xf7,
  0x55, 0xff, 0xff, 0xfd, 0x1f, 0x74, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xfe, 0x5e, 0xd9, 0xdf, 0xd9, 0xdf, 0xab, 0xff, 0xff, 0xff, 0x87, 0xf6, 0xff,
  0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xf8, 0xff, 0xff, 0xfc, 0x35, 0xe7, 0xef,
  0xe7, 0xef, 0x57, 0x7f, 0xff, 0xff, 0x0b, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xf0, 0x3e, 0x0f, 0xff,
  0xf0, 0xff, 0xf0, 0x3e, 0x0f, 0xeb, 0xc8, 0x03, 0xf4, 0x03, 0xf4, 0xaa, 0xff, 0xff, 0xff, 0x05,
  0xfa, 0x7f, 0xff, 0xfc, 0xff, 0xea, 0x80, 0xa7, 0xff, 0xea, 0xff, 0xea, 0x80, 0xa7, 0xf7, 0xf7,
  0xf7, 0xf3, 0xf7, 0xf3, 0x55, 0xff, 0xff, 0xfd, 0x0a, 0xf0, 0xff, 0xff, 0xfd, 0xff, 0x90, 0x15,
  0x00, 0xff, 0x90, 0xff, 0x90, 0x15, 0x00, 0xe7, 0xef, 0xfb, 0xf7, 0xfb, 0xf7, 0xaa, 0xff, 0xff,
  0xfa, 0xa0, 0xf2, 0xff, 0xff, 0xfa, 0x00, 0x22, 0x2a, 0xa2, 0x00, 0x22, 0x00, 0x22, 0x2a, 0xa2,
  0xeb, 0xec, 0xfb, 0x83, 0xfb, 0x83, 0x55, 0xff, 0xff, 0xfd, 0x50, 0x07, 0xff, 0xff, 0xf9, 0x05,
  0x54, 0x15, 0x01, 0x05, 0x54, 0x05, 0x54, 0x15, 0x01, 0xe5, 0xeb, 0xf9, 0x7d, 0xf9, 0x7d, 0xaa,
  0xff, 0xff, 0xfe, 0x88, 0xef, 0xff, 0xff, 0xfa, 0xaa, 0xa8, 0xaa, 0xa8, 0xaa, 0xa8, 0xaa, 0xa8,
  0xaa, 0xa8, 0x6a, 0xc7, 0xc0, 0xfd, 0xc0, 0xfd, 0x55, 0xff, 0xff, 0xff, 0x10, 0x47, 0xff, 0xff,
  0xe1, 0x05, 0x54, 0x15, 0x01, 0x05, 0x54, 0x05, 0x54, 0x15, 0x01, 0x50, 0xaf, 0xbf, 0x7e, 0xbf,
  0x7e, 0xaa, 0xff, 0xff, 0xff, 0xa8, 0xaf, 0xff, 0xff, 0xca, 0x2a, 0xa2, 0x2a, 0x22, 0x2a, 0xa2,
  0x2a, 0xa2, 0x2a, 0x22, 0x08, 0x3f, 0x7f, 0xbf, 0x7f, 0xbf, 0x57, 0xff, 0xff, 0xff, 0xf1, 0x57,
  0xff, 0xff, 0x91, 0x55, 0x40, 0x15, 0x41, 0x55, 0x40, 0x55, 0x40, 0x15, 0x41, 0x14, 0x2f, 0xc1,
  0x9f, 0xc1, 0x9f, 0xaf, 0xff, 0xff, 0xff, 0xf2, 0x0f, 0xff, 0xff, 0xa8, 0x8a, 0x88, 0x8a, 0x0a,
  0x8a, 0x88, 0x8a, 0x88, 0x8a, 0x0a, 0x88, 0x9f, 0xbe, 0xd1, 0xbe, 0xd1, 0xfd, 0xff, 0xff, 0xff,
  0xf0, 0x5f, 0xff, 0xff, 0x95, 0x55, 0x51, 0x54, 0x55, 0x55, 0x51, 0x55, 0x51, 0x54, 0x55, 0x11,
  0x07, 0x1f, 0x4e, 0x1f, 0x4e, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xff, 0xff, 0xff, 0xca, 0x00, 0xaa,
  0x82, 0xa8, 0x00, 0xaa, 0x00, 0xaa, 0x82, 0xa8, 0x02, 0x00, 0xef, 0x04, 0xef, 0x04, 0xff, 0xff,
  0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xe4, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
  0x55, 0x10, 0x03, 0xf6, 0xf3, 0xf6, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xe8,
  0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x8a, 0x8f, 0xf5, 0xfb, 0xf5, 0xfb,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
  0x55, 0x55, 0x55, 0x0d, 0x9f, 0xfb, 0xfc, 0x8d, 0xfb, 0xaa, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xfe, 0x2a, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x2f, 0x87, 0xfb, 0xfe,
  0xf5, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
  0x55, 0x55, 0x55, 0x55, 0x55, 0x0f, 0x0b, 0xfb, 0xfc, 0xf9, 0xdf, 0xaa, 0xaa, 0xff, 0xff, 0xff,
  0xff, 0xfc, 0xfa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x9f, 0x05,
  0xf9, 0xfd, 0xb0, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf9, 0x55, 0x55, 0x55, 0x55,
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x41, 0x0a, 0xf1, 0xc1, 0xcf, 0x23, 0xaa, 0xaa, 0xaa,
  0xff, 0xff, 0xff, 0xfa, 0x72, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
  0x80, 0x20, 0x22, 0x21, 0xef, 0xbd, 0x75, 0x57, 0x7f, 0xff, 0xff, 0xff, 0xf9, 0x05, 0x55, 0x55,
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x40, 0x50, 0xcd, 0x30, 0xdf, 0x7e, 0xaa,
  0xea, 0xaa, 0xff, 0xff, 0xff, 0xfa, 0xea, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
  0xaa, 0xaa, 0x88, 0x08, 0x88, 0x00, 0xd0, 0xfe, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xe1, 0x54,
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x10, 0x44, 0x10, 0xe6,
  0xfd, 0xaa, 0xaa, 0xaa, 0xbf, 0xff, 0xff, 0xca, 0xaa, 0x0a, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
  0xaa, 0xaa, 0xaa, 0xaa, 0x80, 0x08, 0x82, 0x20, 0xef, 0x40, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xff,
  0x91, 0x55, 0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54, 0x11, 0x40,
  0x51, 0xef, 0x9e, 0xaa, 0xaa, 0xaa, 0xab, 0xff, 0xff, 0xa8, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
  0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xa8, 0x82, 0xa0, 0xaa, 0x2c, 0x7f, 0x55, 0x55, 0x55, 0xdf,
  0xff, 0xff, 0x95, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x50,
  0x00, 0x51, 0x11, 0x06, 0xff, 0xaa, 0xaa, 0xaa, 0xaa, 0xbf, 0xff, 0xca, 0xaa, 0x2a, 0xaa, 0xaa,
  0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xa8, 0x26, 0x8a, 0x23, 0xa2, 0x78, 0x55, 0x55,
  0x55, 0x57, 0x7f, 0xff, 0xe4, 0x00, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
  0x55, 0x54, 0x7f, 0xff, 0xff, 0xff, 0xd7, 0xea, 0xea, 0xea, 0xea, 0xfb, 0xff, 0xe8, 0xaa, 0xaa,
  0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xc0, 0x00, 0x00, 0x00, 0x67,
  0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xc1, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
  0x55, 0x55, 0x55, 0x55, 0x80, 0x00, 0x00, 0x00, 0x3e, 0xaa, 0xaa, 0xaa, 0xaa, 0xaf, 0xfe, 0x2a,
  0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xab, 0x00, 0x00, 0x00,
  0x00, 0x15, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xfd, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x1f, 0xff, 0xff, 0xff, 0x18, 0xaa, 0xaa, 0xaa, 0xaa, 0xaf,
  0xfa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xab, 0x1f,
  0xff, 0xff, 0xff, 0x1f, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xf9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x1f, 0xff, 0xff, 0xff, 0x07, 0xaa, 0xaa, 0xaa,
  0xaa, 0xa8, 0x72, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
  0xab, 0x1f, 0xff, 0xff, 0xff, 0x04, 0x55, 0x55, 0x55, 0x55, 0x41, 0x05, 0x55, 0x55, 0x55, 0x55,
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x1f, 0xff, 0xff, 0xff, 0xc7, 0xaa,
  0xea, 0xaa, 0xea, 0x2a, 0xea, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
  0xaa, 0xaa, 0xab, 0x1f, 0xff, 0xff, 0xff, 0xc7, 0x55, 0x55, 0x55, 0x51, 0x55, 0x54, 0x55, 0x55,
  0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x00, 0x01, 0x15, 0x55, 0x55, 0x55, 0x1f, 0xff, 0xff, 0xff,
  0xc7, 0xaa, 0xaa, 0xaa, 0xa2, 0xaa, 0xaa, 0x0a, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x22,
  0x2a, 0xaa, 0xaa, 0xaa, 0xab, 0x1f, 0xff, 0xff, 0xff, 0xc7, 0x55, 0x55, 0x55, 0x45, 0x55, 0x55,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x50, 0x00, 0x00, 0x00, 0x01, 0x55, 0x55, 0x55, 0x1f, 0xff,
  0xff, 0xff, 0xc7, 0xaa, 0xaa, 0xaa, 0x8a, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
  0x88, 0x88, 0x88, 0x8a, 0xaa, 0xaa, 0xab, 0x1f, 0xff, 0xff, 0xff, 0xc7, 0x55, 0x55, 0x55, 0x54,
  0x05, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x40, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x55,
  0x1f, 0xff, 0xff, 0xff, 0xc7, 0xaa, 0xaa, 0xaa, 0xaa, 0xa8, 0xaa, 0x2a, 0xaa, 0xaa, 0xaa, 0xaa,
  0xaa, 0xaa, 0x22, 0x22, 0x22, 0x22, 0xaa, 0xaa, 0xab, 0x1f, 0xff, 0xff, 0xff, 0x04, 0x55, 0x55,
  0x55, 0x45, 0x55, 0x00, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x40, 0x00, 0x00, 0x00, 0x00, 0x55,
  0x55, 0x55, 0x1f, 0xff, 0xff, 0xff, 0x07, 0xea, 0xea, 0xea, 0xca, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
  0xaa, 0xaa, 0xaa, 0x88, 0x88, 0x88, 0x88, 0x88, 0xaa, 0xaa, 0xab, 0x1f, 0xff, 0xff, 0xff, 0x1f,
  0x11, 0x55, 0x11, 0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x50, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x15, 0x55, 0x55, 0x1f, 0xff, 0xff, 0xff, 0x11, 0xaa, 0xaa, 0xaa, 0x2a, 0xaa, 0xaa, 0xaa,
  0xaa, 0xaa, 0xaa, 0xaa, 0xa2, 0x02, 0x22, 0x02, 0x22, 0x02, 0xaa, 0xaa, 0xab, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x55, 0x55, 0x55, 0x80, 0x00, 0x00, 0x00, 0x30, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
  0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xa8, 0x88, 0x8a, 0xa8, 0x88, 0x88, 0x8a, 0xaa, 0xaa, 0xaa, 0xc0,
  0x00, 0x00, 0x00, 0x68, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x50, 0x00,
  0x00, 0x00, 0x55, 0x00, 0x00, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xc0, 0xaa, 0xaa, 0xaa,
  0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x22, 0xaa, 0xaa, 0xaa, 0xaa, 0x22, 0x22, 0xaa, 0xaa,
  0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x20, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x40,
  0x15, 0x51, 0x11, 0x11, 0x55, 0x00, 0x00, 0x05, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0xaa,
  0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x2a, 0xaa, 0xaa, 0xaa, 0xa8, 0xaa, 0xca, 0x88,
  0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x88
};

const uint8_t keen_score_font_bitmaps[] PROGMEM = {
  // 0
  0x3f, 0xc0, 0x3f, 0xc0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0x3f, 0xc0, 0x3f, 0xc0,

  // 1
  0x00, 0xc0, 0x00, 0xc0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xc0, 0x00, 0xc0,

  // 2
  0x3f, 0xc0, 0x3f, 0xc0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x3f, 0xc0, 0x3f, 0xc0,
  0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x3f, 0xc0, 0x3f, 0xc0,

  // 3
  0x3f, 0xc0, 0x3f, 0xc0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x3f, 0xc0, 0x3f, 0xc0,
  0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x3f, 0xc0, 0x3f, 0xc0,

  // 4
  0x00, 0xc0, 0x00, 0xc0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0x3f, 0xc0, 0x3f, 0xc0,
  0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xc0, 0x00, 0xc0,

  // 5
  0x3f, 0xc0, 0x3f, 0xc0, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x3f, 0xc0, 0x3f, 0xc0,
  0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x3f, 0xc0, 0x3f, 0xc0,

  // 6
  0x3f, 0xc0, 0x3f, 0xc0, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x3f, 0xc0, 0x3f, 0xc0,
  0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0x3f, 0xc0, 0x3f, 0xc0,

  // 7
  0x3f, 0xc0, 0x3f, 0xc0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xc0, 0x00, 0xc0,

  // 8
  0x3f, 0xc0, 0x3f, 0xc0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0x3f, 0xc0, 0x3f, 0xc0,
  0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0x3f, 0xc0, 0x3f, 0xc0,

  // 9
  0x3f, 0xc0, 0x3f, 0xc0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xf0, 0x3f, 0xc0, 0x3f, 0xc0,
  0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xc0, 0x00, 0xc0,

  // :
  0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,

  // ; (empty)
  0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x04, 0x40,
  0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x04, 0x40

};

const GFXglyph keen_score_font_glyphs[] PROGMEM = {
  { 0,   16, 16, 16, 16, 0 },  // 0x30 0
  { 32,  16, 16, 16, 16, 0 },  // 0x31 1
  { 64,  16, 16, 16, 16, 0 },  // 0x32 2
  { 96,  16, 16, 16, 16, 0 },  // 0x33 3
  { 128, 16, 16, 16, 16, 0 },  // 0x34 4
  { 160, 16, 16, 16, 16, 0 },  // 0x35 5
  { 192, 16, 16, 16, 16, 0 },  // 0x36 6
  { 224, 16, 16, 16, 16, 0 },  // 0x37 7
  { 256, 16, 16, 16, 16, 0 },  // 0x38 8
  { 288, 16, 16, 16, 16, 0 },  // 0x39 9
  { 320, 16, 16, 16, 16, 0 },  // 0x3a :
  { 352, 16, 16, 16, 16, 0 }   // 0x3b ; (empty)
};

const GFXfont keen_score_font PROGMEM = {
  (uint8_t  *)keen_score_font_bitmaps,
  (GFXglyph *)keen_score_font_glyphs,
  0x30, 0x3b, 16
};

#endif
