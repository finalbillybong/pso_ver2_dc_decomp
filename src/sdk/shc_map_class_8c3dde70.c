/* Pool group 0x8c3dde70-0x8c3ddfe4 (Hitachi SHC): maps a raw code to a compact
   class index (0xff for unknown codes). */
extern unsigned char g_flags_8c5be3ae[];

int map_class_8c3dde70(unsigned char c)
{
    int v;
    switch (c) {
    case 1: case 2: case 3: case 11: v = 2; break;
    case 12:
        if (g_flags_8c5be3ae[0] & 0x80) v = 1;
        else v = 4;
        break;
    case 5: v = 4; break;
    case 6: case 20: v = 5; break;
    case 7: case 15: case 21: v = 6; break;
    case 16: case 22: v = 7; break;
    case 9: case 10: case 17: case 23: v = 8; break;
    case 18: case 24: v = 0xb; break;
    case 19: case 25: v = 0xc; break;
    case 26: v = 0xd; break;
    case 27: v = 0xe; break;
    case 28: v = 0x15; break;
    case 29: v = 0x16; break;
    case 30: v = 0x17; break;
    case 31: v = 0x19; break;
    case 32: v = 0x1d; break;
    case 33: v = 0x20; break;
    case 34: case 50: v = 0x1e; break;
    case 35: v = 0x21; break;
    case 36: case 53: v = 0x23; break;
    case 37: v = 0x25; break;
    case 38: case 56: v = 0x28; break;
    case 39: v = 0x2a; break;
    case 40: case 59: v = 0x2c; break;
    case 41: v = 0x2e; break;
    case 42: case 62: v = 0x30; break;
    case 43: v = 0x32; break;
    case 44: case 65: v = 0x34; break;
    case 45: v = 0x36; break;
    case 46: case 68: v = 0x38; break;
    case 47: v = 0x18; break;
    case 48: v = 0x1a; break;
    case 49: v = 0x1c; break;
    case 51: v = 0x1f; break;
    case 52: v = 0x22; break;
    case 54: v = 0x24; break;
    case 55: v = 0x27; break;
    case 57: v = 0x29; break;
    case 58: v = 0x2b; break;
    case 60: v = 0x2d; break;
    case 61: v = 0x2f; break;
    case 63: v = 0x31; break;
    case 64: v = 0x33; break;
    case 66: v = 0x35; break;
    case 67: v = 0x37; break;
    default: v = 0xff; break;
    }
    return v;
}
