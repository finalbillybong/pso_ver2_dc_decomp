typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c04b794(int a0)
{
    if ((((unsigned short)a0 & 0x80)) != 0) {
        a0 = a0 + -1;
    }
    if (!((unsigned int)0x9f > (unsigned int)(unsigned short)a0)) {
        if ((unsigned int)0x8140 > (unsigned int)(unsigned short)a0) {
            a0 = a0 + -0x1f;
        } else if ((unsigned int)0x824f > (unsigned int)(unsigned short)a0) {
            a0 = a0 + 0x5ec0;
        } else if ((unsigned int)0x829e > (unsigned int)(unsigned short)a0) {
            a0 = a0 + 0x5e6e;
        } else if ((unsigned int)0x8340 > (unsigned int)(unsigned short)a0) {
            a0 = a0 + 0x5e6b;
        } else if ((unsigned int)0x839e > (unsigned int)(unsigned short)a0) {
            a0 = a0 + 0x5e1c;
        } else if ((unsigned int)0x8440 > (unsigned int)(unsigned short)a0) {
            a0 = a0 + 0x5e15;
        } else if ((unsigned int)0x849e > (unsigned int)(unsigned short)a0) {
            a0 = a0 + 0x5dab;
        } else if ((unsigned int)0x889e > (unsigned int)(unsigned short)a0) {
            a0 = a0 + 0x5d9f;
        } else {
            if ((unsigned int)(unsigned short)a0 > (unsigned int)0xa000) {
                a0 -= 0x4000;
            }
            a0 = a0 - (((unsigned short)a0 + -0x8800 & 0xff00) >> 8) * 0x44 + 0x59bf;
        }
    }
    return a0;
}
