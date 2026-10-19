typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    char unknown24[0x8];
    int f2c;
};
extern void select_state2_8c01c1b4(void);
extern void select_mode4_8c1cc4f8(void);
void operation_8c0ed130(Object *o)
{
    int v1;
    v1 = (int)o->f20;
    o->f20 = v1 + 1;
    if ((float)v1 > 5.5f) {
        switch (o->f2c) {
        case 1:
            o->f04 |= 1;
            select_state2_8c01c1b4();
            return;
        case 2:
            o->f04 |= 1;
            select_mode4_8c1cc4f8();
        }
    }
}
