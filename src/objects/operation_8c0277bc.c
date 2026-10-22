typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d0];
    short f308;
};
extern int call_8c03b55c(void *, int);
extern int call_8c1acc80(void *, int);
extern int current_mode_active(void);
extern void operation_8c184a38(void *, float);
void operation_8c0277bc(Object *o, float f0)
{
    int v1;
    v1 = (int)(o->f308 == 1);
    if (v1 == 0 || ((o->f34 & 0x800)) != 0 || call_8c03b55c((void *)(((char *)o + 0xbcc)), 1) == 0 || call_8c1acc80((void *)(((char *)o + 0x4e4)), 1) != 0 || current_mode_active() == 0) {
        return;
    }
    operation_8c184a38((void *)(((char *)o + 0x418)), f0);
}
