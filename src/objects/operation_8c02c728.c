typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2d8];
    int f310;
    char unknown314[0x3c];
    int f350;
};
extern int operation_2391f4(void *);
extern int call_8c02c7f4(Object *);
extern int call_8c244b78(void);
extern int create_effect(void *, int, int);
extern void bind_id(void *, unsigned short);
void operation_8c02c728(Object *o)
{
    int v10;
    int v23;
    int v24;
    int t2;
    int t3;
    int t4;
    v10 = (int)0;
    if (*(int *)0x8c2e2ad8 != 0 && (char)operation_2391f4((void *)((void *)0x8c41ce5c)) == 1) {
        v10 = (int)1;
    }
    if (v10 != 0) {
        t2 = call_8c02c7f4(o);
        if (t2 == 0) {
            t3 = call_8c244b78();
            if (t3 != 0) {
                v23 = (int)(((o->f310 & 0x408000)) != 0);
                if (v23 == 0 && ((o->f34 & 0x2000000)) == 0) {
                    v24 = (int)(((o->f350 & 0x8000000)) != 0);
                    if (v24 == 0) {
                        t4 = create_effect((void *)(((char *)o + 0x324)), 0x114, 0x10);
                        if (t4 != 0) {
                            bind_id((void *)t4, (unsigned short)(o->f20));
                        }
                    }
                }
            }
        }
    }
}
