typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
};
extern void call_8c1e8e60(Object *, int, int);
extern int query_flag_32(void *);
void operation_8c1efcdc(Object *o)
{
    int v3;
    int t1;
    if (((o->f34 & 0x200)) != 0) {
        if (((o->f34 & 0x400)) != 0) {
            call_8c1e8e60(o, 0xe, 5);
            return;
        }
        call_8c1e8e60(o, 0xd, 5);
        return;
    }
    if (((o->f34 & 0x100)) != 0 && ((o->f34 & 0x4000000)) == 0) {
        v3 = (int)1;
    } else {
        v3 = (int)0;
    }
    if (v3 != 0) {
        call_8c1e8e60(o, 0xa, 5);
        return;
    }
    t1 = query_flag_32((void *)o);
    if (t1 != 0) {
        call_8c1e8e60(o, 0x13, 5);
    }
}
