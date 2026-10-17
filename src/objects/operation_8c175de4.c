typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    float tag;
    float f04;
    float f08;
    char unknownc[0x4];
    float f10;
    float f14;
    int dispatch;
    int f1c;
    void *f20;
    float f24;
    int f28;
};
extern void call_8c3bdf60(Object *, void *);
int operation_8c175de4(Object *o)
{
    int v1;
    float v4;
    float v5;
    float v6;
    float v7;
    char *v3;
    int v29;
    int v2;
    v1 = (int)o->f1c;
    v2 = (int)0;
    v3 = (char *)v2;
    switch (o->f28) {
    case 0:
        o->f10 -= 0.2f;
        call_8c3bdf60(o, (void *)(((char *)o + 0xc)));
        v4 = (float)o->f10;
        if (0.0f > v4) {
            v5 = (float)o->f04;
            if (*(float *)0x8c286298 > v5) {
                v6 = (float)o->tag;
                v7 = (float)o->f08;
                if (!(v6 > *(float *)0x8c28629c)) {
                    if (!(*(float *)0x8c2862a0 > v6)) {
                        if (!(v7 > *(float *)0x8c2862a4)) {
                            if (!(*(float *)0x8c2862a8 > v7)) {
                                o->f10 = v4 * -0.8f;
                                o->f28 = 2;
                                goto L_8c175e76;
                            }
                        }
                    }
                }
                if (*(float *)0x8c286288 > v5) {
                    v3 = (char *)1;
                    o->f28 = (int)(v3);
                }
            }
        }
L_8c175e76:;
        o->dispatch += v1;
        v29 = (int)(v1 << 1);
        o->f20 = (void *)((int)o->f20 + v29);
        break;
    case 2:
        o->f10 -= 0.2f;
        call_8c3bdf60(o, (void *)(((char *)o + 0xc)));
        o->f24 -= 0.05f;
        if (0.0f > o->f24) {
            o->f24 = 0.0f;
            o->f28 = 3;
        }
        o->dispatch += v1;
        o->f20 = &*(int *)((char *)((char *)o->f20 + 0x0) + (v1 << 1));
        break;
    case 1:
        o->f04 += o->f10 * 0.2f;
        o->f08 += o->f14;
    }
    return (int)(v3);
}
