typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
extern int g_8c2e2ad8;
extern int g_8c44be04;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c021ef8 *lookup_low_id(int);
extern int get_current_area_8c032b10(void);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TOMineTrap_ctor_8c0fdc48(int, Object *, int, int);
int operation_8c0fe1f4(Object *o, int a1, int a2)
{
    unsigned short v35;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    if (g_8c2e2ad8 == 1 && o != 0) {
        v35 = (unsigned short)o->f20;
        if (v35 != 0xffff && !(v35 >= (unsigned int)0x1000)) {
            t1 = lookup_low_id(v35);
            if (t1 != 0 && t1->f37c == g_8c44be04 && (short)a1 >= 0 && !((short)a1 >= 4) && (short)a2 >= 0 && !((short)a2 > 0x14)) {
                goto L_8c0fe258;
            }
        }
    }
    return 0;
L_8c0fe258:;
    t2 = get_current_area_8c032b10();
    if (!(t2 > 0)) {
        if (t2 == 0) {
            goto L_8c0fe298;
        }
    } else {
        switch (t2) {
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
L_8c0fe298:;
            return 0;
        }
    }
    t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x398);
    if (t3 != 0) {
        TOMineTrap_ctor_8c0fdc48(t3, o, a1, a2);
    }
    return (int)(t3);
}
