typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
};
extern int g_8c470324;
extern void select_mode0_8c1cc49c(void);
extern void select_mode3_8c1cc4e0(void);
void operation_8c0e96e4(Object *o)
{
    int v1;
    v1 = (int)((int)o->f28 + 1);
    o->f28 = (int)(v1);
    if ((float)v1 > 5.5f) {
        switch (g_8c470324) {
        case 0:
            select_mode0_8c1cc49c();
            return;
        case 1:
            select_mode3_8c1cc4e0();
        }
    }
}
