typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_bc8 S_vv4_bc8;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    int f04;
    int f08;
};
struct S_vv4 {
    char unknown0[0xbc8];
    S_vv4_bc8 *fbc8;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern int operation_8c16a18c(void *, int);
extern int hierarchy_is_active_wrapper_2_8c169508(void *);
extern void operation_8c022428(void *, void *, int);
void handle_6x25_equip_item_8c022388(Object *o)
{
    Object *base;
    S_vv4 *v4;
    int v14;
    int v10;
    short sid;
    int id;
    int t1;
    int t2;
    base = o;
    sid = base->f02;
    id = (unsigned short)sid;
    if (id == 0xffff) {
        v4 = (S_vv4 *)0;
    } else if (id >= 0xc) {
        v4 = (S_vv4 *)0;
    } else {
        v4 = *(S_vv4 **)((char *)0x8c41ce2c + (id << 2));
    }
    if (v4 != 0) {
        v14 = 0;
        if (base->f08 >= 0) {
            v10 = 0;
            if (g_8c4627c8 == 0) {
                if ((unsigned short)sid == g_8c418248) {
                    v10 = 1;
                }
            }
            if (v10 == 0) {
                v14 = 1;
            }
        }
        if (v14 != 0) {
            t1 = operation_8c16a18c((void *)(v4->fbc8), (int)(base->f04));
            if (t1 != 0) {
                t2 = hierarchy_is_active_wrapper_2_8c169508((void *)t1);
                if (t2 != 0) {
                    operation_8c022428((void *)v4, (void *)t2, (int)(base->f08));
                }
            }
        }
    }
}
