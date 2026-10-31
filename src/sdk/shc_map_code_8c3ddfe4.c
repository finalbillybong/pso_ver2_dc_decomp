/* Pool group 0x8c3ddfe4-0x8c3de124 (Hitachi SHC): maps a code (2..56) to a compact
   index; unlisted codes map to 0. */
int map_code_8c3ddfe4(unsigned char c)
{
    switch (c) {
    case 56: return 45;
    case 55: return 44;
    case 54: return 43;
    case 53: return 42;
    case 52: return 41;
    case 51: return 40;
    case 50: return 39;
    case 49: return 38;
    case 48: return 37;
    case 47: return 36;
    case 46: return 35;
    case 45: return 34;
    case 44: return 33;
    case 43: return 32;
    case 42: return 31;
    case 41: return 30;
    case 40: return 29;
    case 39: return 28;
    case 37: return 26;
    case 36: return 25;
    case 35: return 24;
    case 34: return 23;
    case 33: return 22;
    case 32: return 21;
    case 31: return 20;
    case 30: return 19;
    case 29: return 18;
    case 28: return 17;
    case 26: return 16;
    case 25: return 15;
    case 24: return 14;
    case 23: return 13;
    case 22: return 12;
    case 21: return 11;
    case 14: return 10;
    case 13: return 9;
    case 12: return 8;
    case 11: return 7;
    case 8: return 6;
    case 7: return 5;
    case 6: return 4;
    case 5: return 3;
    case 4: return 2;
    case 2: return 1;
    default: return 0;
    }
}
