typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c510c80 S_g8c510c80;
typedef struct Object Object;
typedef struct Arg0_8 Arg0_8;
struct Object {
    char unknown0[0x4];
    char f04;
    char f05;
    char unknown6[0x1];
    char f07;
    Arg0_8 *f08;
    int f0c;
};
struct S_g8c510c80 {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x2c];
    int f58;
    int f5c;
};
struct S_c8c021ef8 {
    char unknown0[0x748];
    int f748;
};
extern int g_8c418248;
extern S_g8c510c80 *g_8c510c80;
extern int g_8c510c90;
extern int g_8c510cbc;
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c244710(void *);
void operation_8c243b9c(Object *o)
{
    int v5;
    S_c8c021ef8 *t1;
    switch (o->f04) {
    case 0:
        if (g_8c510c80 == 0) {
            return;
        }
        g_8c510c80->f28 = o->f05;
        g_8c510c80->f58 = (int)(o->f08);
        g_8c510c80->f5c = (int)(o->f0c);
        return;
    case 2:
        g_8c510c90 = 1;
        return;
    case 3:
        t1 = lookup_low_id((int)(o->f08));
        if (t1 != 0) {
            if ((int)(o->f08) != g_8c418248) {
                t1->f748 = (int)(o->f0c);
            }
            *(int *)((char *)0x8c510cd0 + ((int)(o->f08) << 2)) = o->f07;
        }
        g_8c510cbc += 1;
        return;
    case 4:
        *(char *)((char *)((char *)o->f08 + 0x0) + ((int)((void *)0x8c510cc8))) = 1;
        return;
    case 5:
        if (g_8c510c80 == 0) {
            return;
        }
        operation_8c244710((void *)g_8c510c80);
        return;
    case 6:
        if (g_8c510c80 != 0) {
            g_8c510c80->f28 = 6;
            v5 = (int)0;
            while (4 > v5) {
                *(short *)((char *)0x8c510cf8 + (v5 << 1)) = *(int *)((char *)&o->f08 + (v5 << 2));
                v5 = (int)(v5 + 1);
            }
        }
        return;
    case 1:
        break;
    }
}
