typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
};
extern void operation_8c1cc690(void);
extern void operation_8c232618(void);
extern void select_mode0_8c1cc49c(void);
extern void select_mode4_8c1cc4f8(void);
void operation_8c25fa24(Object *o)
{
    int v1;
    int v3;
    int v4;
    operation_8c1cc690();
    switch (o->f20) {
    case 0:
        v1 = (int)o->f24;
        o->f24 = v1 + 1;
        if (!(v1 > 0x1e)) {
            return;
        }
        o->f20 = 1;
        o->f24 = 0;
        return;
    case 1:
        operation_8c232618();
        o->f20 = 2;
        return;
    case 2:
        v3 = (int)o->f24;
        o->f24 = v3 + 1;
        if (!(v3 > 0x3c)) {
            return;
        }
        select_mode0_8c1cc49c();
        return;
    case 3:
        v4 = (int)((int)o->f24 + 1);
        o->f24 = (int)(v4);
        if ((float)v4 > 5.5f) {
            select_mode4_8c1cc4f8();
        }
    }
}
