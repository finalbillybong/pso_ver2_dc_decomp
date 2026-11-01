typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    char f02;
};
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TItemProArmorRecalc_ctor_8c255930(void *, void *, Object *);
extern void TItemProArmorParticle_ctor_8c255584(void *, int, int);
extern void TItemProArmor_ctor_8c0e6d1c(int, void *, Object *);
int operation_8c0e6c54(Object *o)
{
    unsigned char v1;
    int t1;
    int t2;
    int t3;
    if (o != 0) {
        v1 = (unsigned char)o->f02;
        if ((unsigned int)(unsigned char)v1 >= (unsigned int)0x18 && (unsigned int)0x1a >= (unsigned int)(unsigned char)v1) {
            goto L_8c0e6c7e;
        }
        if ((unsigned int)(unsigned char)v1 >= (unsigned int)0x26 && (unsigned int)0x28 >= (unsigned int)(unsigned char)v1) {
L_8c0e6c7e:;
            t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x1e0);
            if (t1 != 0) {
                TItemProArmorRecalc_ctor_8c255930((void *)t1, (void *)(*(S_g8c4689e0 **)0x8c4689e0), o);
            }
            return (int)(t1);
        }
        if ((unsigned int)(unsigned char)v1 >= (unsigned int)0x29 && (unsigned int)0x35 > (unsigned int)(unsigned char)v1) {
            t2 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x1ec);
            if (t2 != 0) {
                TItemProArmorParticle_ctor_8c255584((void *)t2, (int)(*(S_g8c4689e0 **)0x8c4689e0), (int)o);
            }
            return (int)(t2);
        }
        t3 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x1e0);
        if (t3 != 0) {
            TItemProArmor_ctor_8c0e6d1c(t3, (void *)(*(S_g8c4689e0 **)0x8c4689e0), o);
        }
        return (int)(t3);
    }
    return 0;
}
