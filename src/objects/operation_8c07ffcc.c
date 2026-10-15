typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf8];
    int ff8;
};
extern void set_child_blend(void);
extern void call_8c38ae68(void);
extern void call_8c382a40(int);
extern void call_8c38e354(void *, int, int);
extern void call_8c38ad10(void);
extern void restore_child_blend(void);
void operation_8c07ffcc(Object *o)
{
    int v2;
    unsigned int v1;
    set_child_blend();
    v1 = (unsigned int)0;
    while ((unsigned int)o->ff8 > v1) {
        v2 = (int)(v1 * 0x18);
        if (*(char *)((char *)((char *)o + 0x20) + (v2)) != 0) {
            call_8c38ae68();
            call_8c382a40((int)((int)o + v2 + 0x24));
            call_8c38e354((void *)((void *)0x8c2feb98), 1, 0x40);
            call_8c38ad10();
        }
        v1 = (unsigned int)(v1 + 1);
    }
    restore_child_blend();
}
