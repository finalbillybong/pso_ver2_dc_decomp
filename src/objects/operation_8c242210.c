typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    unsigned short f04;
};
static inline int get_slot_8c510c10(unsigned short i)
{
    if (i >= 0xc) {
        return 0;
    }
    return *(int *)((char *)0x8c510c10 + (i << 2));
}
static inline void set_slot_8c510c10(unsigned short i, int v)
{
    if (i >= 0xc) {
        return;
    }
    *(int *)((char *)0x8c510c10 + (i << 2)) = v;
}
void operation_8c242210(Object *o)
{
    unsigned short id = o->f04;
    if (get_slot_8c510c10(id) != 0) {
        set_slot_8c510c10(id, 0);
        return;
    }
    set_slot_8c510c10(id, 0x12c);
}
