typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x9a];
    int fa0;
    char unknowna4[0xa4];
    int f148;
    float f14c;
};
struct Frame {
    char unknown0[0x14];
    int f14;
    char unknown18[0x4];
    Vector3 f1c;
    Vector3 f28;
    char unknown34[0x14];
};
extern Vector3 g_8c338b28;
extern Vector3 g_8c338b34;
extern int lookup_low_id(int);
extern void operation_8c0a2144(int);
extern void call_8c0a22fc(Frame *);
void operation_8c230bf8(Object *o)
{
    Frame frame;
    int v3;
    int v2;
    int v1;
    int t1;
    v2 = (int)0;
    v1 = (int)0x144;
    while (*(int *)((char *)((char *)o + 0x0) + (v1)) > v2) {
        v3 = (int)(v2 * 0x28);
        if (*(int *)((char *)((char *)o + 0xa4) + (v3)) != 0) {
            t1 = lookup_low_id((int)(*(unsigned short *)((char *)((char *)o + 0xa8) + (v3)) & 0xffff));
            if (t1 == 0) {
                *(int *)((char *)((char *)o + 0xa4) + (v3)) = 0;
            }
        }
        v2 = (int)(v2 + 1);
    }
    switch (o->fa0) {
    case 0:
        o->fa0 = 1;
        return;
    case 1:
        operation_8c0a2144(6);
        *(Vector3 *)&(&frame)->f1c = *(Vector3 *)&g_8c338b28;
        *(Vector3 *)&(&frame)->f28 = *(Vector3 *)&g_8c338b34;
        (&frame)->f14 = 0x1555;
        call_8c0a22fc((Frame *)((&frame)));
        o->fa0 = 2;
        return;
    default:
        if (!(17.0f > (o->f14c += 0.3f))) {
            o->f14c = 17.0f;
        }
        if (++o->f148 >= 0x1c2) {
            o->f04 |= 1;
        }
        return;
    }
}
