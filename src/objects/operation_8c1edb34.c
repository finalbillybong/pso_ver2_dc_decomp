typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct S_x90736 S_x90736;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    short f04;
};
struct S_c8c021ef8 {
    char unknown0[0x454];
    unsigned short f454;
};
struct S_x90736 {
    char unknown0[0x48];
    int f48;
};
extern S_g8c418248 *g_8c418248;
extern int g_8c4627c8;
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c02a6d4(S_c8c021ef8 *);
extern int object_ready(void *);
extern int operation_8c02a930(void *);
extern void call_8c184c5c(void *, unsigned short, short);
void operation_8c1edb34(Object *o)
{
    int v11;
    unsigned short id;
    S_c8c021ef8 *t4;
    int t2;
    int t3;
    S_c8c021ef8 *t1;
    int t5;
    int v8;
    int t6;
    int t7;
    int pm8;
    t1 = lookup_low_id((int)((int)(int)o->f02));
    t2 = call_8c02a6d4(t1);
    if (t2 != 0) {
        t3 = object_ready((void *)t1);
        if (t3 != 0) {
            ((S_x90736 *)((char *)(int *)((char *)t1 + 0x418) + ((t1->f454 & 0xffff) << 2)))->f48 |= 8;
        }
    }
    t4 = lookup_low_id((int)g_8c418248);
    t5 = call_8c02a6d4(t4);
    if (t5 != 0) {
        t6 = operation_8c02a930((void *)t4);
        if (t6 != 0) {
            t7 = object_ready((void *)t4);
            if (!(t7 == 0)) {
                pm8 = 0;
                v11 = pm8;
                v8 = 0;
                id = o->f02;
                if (g_8c4627c8 == 0 && id == (int)(g_8c418248)) {
                    v8 = 1;
                }
                if (v8 == 0 && o->f04 >= 0) {
                    v11 = 1;
                }
                if (v11 != 0) {
                    call_8c184c5c((void *)(((char *)t4 + 0x418)), id, o->f04);
                }
            }
        }
    }
}
