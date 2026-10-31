typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Pad {
    unsigned char flags;
    unsigned char unknown1;
    unsigned char ids[6];
} Pad;
extern Pad g_8c41ccec;
int operation_8c1e0e4c(void)
{
    unsigned char c;
    unsigned char *p;
    unsigned int i;
    p = g_8c41ccec.ids;
    for (i = 0; i < 6; i++) {
        c = p[i];
        if (c <= 3) {
            break;
        }
        if (c != 0x28 && c != 0x29 && c != 0x2a && c != 0x4c && c != 0x52 && c != 0x51 && c != 0x50 && c != 0x4f) {
            return 1;
        }
    }
    c = g_8c41ccec.flags;
    if ((c & 0x20) != 0 || (c & 2) != 0) {
        return 1;
    }
    if ((c & 0x10) != 0 || (c & 1) != 0) {
        return 1;
    }
    if ((c & 0x40) != 0 || (c & 4) != 0) {
        return 1;
    }
    if ((c & 8) != 0 || (c & 0x80) != 0) {
        return 1;
    }
    return 0;
}
