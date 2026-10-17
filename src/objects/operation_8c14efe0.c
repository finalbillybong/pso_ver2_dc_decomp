typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x66];
    float f6c;
    char unknown70[0x4];
    float f74;
    char unknown78[0x20];
    float f98;
    float f9c;
    float fa0;
    float fa4;
    char unknowna8[0xc];
    int fb4;
    int fb8;
    char unknownbc[0xc];
    int fc8;
    float fcc;
};
void operation_8c14efe0(Object *o)
{
    float v3;
    float v9;
    float v10;
    float v15;
    float v22;
    float v26;
    float v23;
    float v51;
    if ((unsigned int)o->fb4 > (unsigned int)o->fc8) {
        o->fb8 = 1;
    }
    if (o->fb8 != 0) {
        if (o->fb8 == 1) {
            goto L_8c14f050;
        }
    } else {
        v3 = (float)o->fa4;
        if (1.0f > v3) {
            o->fa4 = v3 + o->fcc * 2.0f;
        }
        v9 = (float)o->f6c;
        if (1.0f > v9) {
            o->f6c = v9 + o->fcc * 2.0f;
            o->f74 += o->fcc * 2.0f;
            goto L_8c14f0d0;
L_8c14f050:;
            v10 = (float)o->fa4;
            if (v10 > 0.0f) {
                o->fa4 = v10 - o->fcc;
            }
            v15 = (float)o->f6c;
            if (v15 > 0.0f) {
                o->f6c = v15 - o->fcc;
                o->f74 -= o->fcc;
            }
            v22 = (float)(float)(unsigned int)o->fc8;
            v23 = (float)(v22 + 1.0f / o->fcc);
            v26 = (float)(float)(unsigned int)o->fb4;
            if (v26 > v23) {
                o->f04 |= 1;
                return;
            }
        }
    }
L_8c14f0d0:;
    o->fb4 += 1;
    v51 = (float)o->fa0;
    if (o->f98 > v51) {
        o->fa0 = v51 + o->f9c;
        return;
    }
    o->fa0 = 0.0f;
}
