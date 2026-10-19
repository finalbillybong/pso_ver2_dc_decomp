typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c513420 S_g8c513420;
typedef struct Object Object;
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    int f24;
    int f28;
};
extern Vector3 g_8c3404bc;
extern Vector3 g_8c3404c8;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c513420 *g_8c513420;
extern void operation_8c0a2144(int);
extern void operation_8c0a237c(void *, void *);
extern int hierarchy_is_active(void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c25cff0(int, Object *, void *);
void operation_8c25cd7c(Object *o)
{
    Frame frame;
    char *v26;
    char *v27;
    int t1;
    int t2;
    int t3;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c3404bc;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c3404c8;
    operation_8c0a2144(6);
    operation_8c0a237c((void *)(&(&frame)->f0c), (void *)(&frame));
    v26 = (char *)o->f24;
    if (v26 != 0) {
        t1 = hierarchy_is_active((void *)v26);
        if (t1 == 0) {
            o->f24 = 0;
            t2 = allocate_block(g_8c4d97e0, (unsigned int)0x15c);
            if (t2 != 0) {
                call_8c25cff0(t2, o, g_8c513420);
            }
            o->f28 = (int)(t2);
        }
    }
    v27 = (char *)o->f28;
    if (v27 != 0) {
        t3 = hierarchy_is_active((void *)v27);
        if (t3 == 0) {
            o->f28 = 0;
            o->f04 |= 1;
        }
    }
}
