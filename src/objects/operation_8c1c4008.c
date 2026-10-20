typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x138];
    short f138;
    short f13a;
    int f13c;
};
extern int call_8c12b944(void);
void operation_8c1c4008(Object *o)
{
    int v1;
    int v3;
    int v5;
    int v7;
    int t1;
    int lim;
    switch (o->f138) {
    case 0:
        t1 = call_8c12b944();
        if (!(((float)t1 / 32768.0f) > 0.125f)) {
            o->f138 = 1;
            return;
        }
        if (!(((float)t1 / 32768.0f) > 0.25f)) {
            o->f138 = 2;
            return;
        }
        if (!(((float)t1 / 32768.0f) > 0.375f)) {
            o->f138 = 3;
            return;
        }
        if (!(((float)t1 / 32768.0f) > 0.5f)) {
            o->f138 = 4;
            return;
        }
        o->f138 = 5;
        return;
    case 1:
        *(int *)((char *)o + 0x13c) += 0x97b;
        lim = 0x238e;
        if (!(o->f13c >= lim)) {
            return;
        }
        o->f13c = lim;
        if (4 > (short)++o->f13a) {
            o->f138 = 2;
            return;
        }
        o->f138 = 5;
        return;
    case 2:
        *(int *)((char *)o + 0x13c) -= 0x97b;
        lim = -0x238e;
        if (!(lim >= o->f13c)) {
            return;
        }
        o->f13c = lim;
        if (4 > (short)++o->f13a) {
            o->f138 = 1;
            return;
        }
        o->f138 = 5;
        return;
    case 3:
        *(int *)((char *)o + 0x13c) += 0x97b;
        lim = 0xffff;
        if (!(o->f13c >= lim)) {
            return;
        }
        o->f13c = lim;
        if (1 > (short)++o->f13a) {
            o->f138 = 4;
            return;
        }
        o->f138 = 5;
        return;
    case 4:
        *(int *)((char *)o + 0x13c) -= 0x97b;
        v7 = (int)o->f13c;
        if (!(-0xffff >= v7)) {
            return;
        }
        o->f13c = -0xffff;
        if (1 > (short)++o->f13a) {
            o->f138 = 3;
            return;
        }
        o->f138 = 5;
        return;
    case 5:
        o->f138 = 0;
        o->f13c = 0;
        o->f13a = 0;
        return;
    }
}
