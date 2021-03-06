/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   $Creator: Dom Lawlor $
   ======================================================================== */

#define PALETTE_ENTRIES 64
uint8 Palette[PALETTE_ENTRIES][3] =
{
    {0x75, 0x75, 0x75}, {0x27, 0x1B, 0x8F}, {0x00, 0x00, 0xAB}, {0x47, 0x00, 0x9F}, //0x00
    {0x8F, 0x00, 0x77}, {0xAB, 0x00, 0x13}, {0xA7, 0x00, 0x00}, {0x7F, 0x0B, 0x00}, //0x04
    {0x43, 0x2F, 0x00}, {0x00, 0x47, 0x00}, {0x00, 0x51, 0x00}, {0x00, 0x3F, 0x17}, //0x08
    {0x1B, 0x3F, 0x5F}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, //0x0C
    {0xBC, 0xBC, 0xBC}, {0x00, 0x73, 0xEF}, {0x23, 0x3B, 0xEF}, {0x83, 0x00, 0xF3}, //0x10
    {0xBF, 0x00, 0xBF}, {0xE7, 0x00, 0x5B}, {0xDB, 0x2B, 0x00}, {0xCB, 0x4F, 0x0F}, //0x14
    {0x8B, 0x73, 0x00}, {0x00, 0x97, 0x00}, {0x00, 0xAB, 0x00}, {0x00, 0x93, 0x3B}, //0x18
    {0x00, 0x83, 0x8B}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, //0x1C
    {0xFF, 0xFF, 0xFF}, {0x3F, 0xBF, 0xFF}, {0x5F, 0x97, 0xFF}, {0xA7, 0x8B, 0xFD}, //0x20
    {0xF7, 0x7B, 0xFF}, {0xFF, 0x77, 0xB7}, {0xFF, 0x77, 0x63}, {0xFF, 0x9B, 0x3B}, //0x24
    {0xF3, 0xBF, 0x3F}, {0x83, 0xD3, 0x13}, {0x4F, 0xDF, 0x4B}, {0x58, 0xF8, 0x98}, //0x28
    {0x00, 0xEB, 0xDB}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, //0x2C
    {0xFF, 0xFF, 0xFF}, {0xAB, 0xE7, 0xFF}, {0xC7, 0xD7, 0xFF}, {0xD7, 0xCB, 0xFF}, //0x30
    {0xFF, 0xC7, 0xFF}, {0xFF, 0xC7, 0xDB}, {0xFF, 0xBF, 0xB3}, {0xFF, 0xDB, 0xAB}, //0x34
    {0xFF, 0xE7, 0xA3}, {0xE3, 0xFF, 0xA3}, {0xAB, 0xF3, 0xBF}, {0xB3, 0xFF, 0xCF}, //0x38
    {0x9F, 0xFF, 0xF3}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}  //0x3C
}; 


void getPaletteValue(uint8 Entry, uint8 *Colour)
{
    Colour[0] = Palette[Entry][0];
    Colour[1] = Palette[Entry][1];
    Colour[2]  = Palette[Entry][2];
}
