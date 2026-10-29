typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x3a];
    unsigned short f40;
    char unknown42[0x6];
    int f48;
    int f4c;
};
extern void operation_8c13f1cc(int, int);
extern void call_8c168980(Object *);
void operation_8c168608(Object *o)
{
    int v1;
    int t;
    o->f48 += 1;
    if (o->f4c < o->f48) {
        v1 = (int)0;
        while (4 > v1) {
            t = *(int *)((char *)((char *)o + 0x54) + (v1 << 2));
            if (t == 4 || t == 5) {
                operation_8c13f1cc((int)(o->f40), t);
            }
            v1 = (int)(v1 + 1);
        }
        call_8c168980(o);
        o->f04 |= 1;
    }
}
