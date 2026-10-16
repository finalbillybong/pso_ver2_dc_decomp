typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    unsigned short tag;
    short f02;
    int f04;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x318];
    int f350;
    char unknown354[0x254];
    float f5a8;
    char unknown5ac[0x618];
    int fbc4;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c02a930(void *);
extern int actor_matches_current_mode(void *);
extern void operation_8c02aff0(void *);
extern void call_8c18a4ac(short);
extern void operation_8c02b1e0(int);
void operation_8c03be74(Object *o)
{
    int v1;
    S_c8c021ef8 *t1;
    float v7;
    int v2;
    int t2;
    int t3;
    t1 = lookup_low_id((int)(o->tag));
    if (t1 != 0) {
        switch (o->f04) {
        case 2:
            break;
        case 0:
            v1 = (int)(t1->fbc4 == 0);
            if (v1 == 0) {
                return;
            }
            t2 = operation_8c02a930((void *)t1);
            if (t2 != 0) {
                return;
            }
            v2 = (int)(((t1->f350 & 0x4000000)) != 0);
            if (v2 == 0) {
                return;
            }
            t3 = actor_matches_current_mode((void *)t1);
            if (t3 == 0) {
                return;
            }
            if ((short)--o->f02 >= 0) {
                return;
            }
            if (*(int *)0x8c46f0a0 != 0) {
                t1->f5a8 = 1.0f;
                o->f04 = 2;
                return;
            }
            o->f04 = 1;
            operation_8c02aff0((void *)t1);
            if (((t1->f34 & 0x800)) == 0) {
                call_8c18a4ac(o->tag);
            }
            t1->f5a8 = 0.0f;
            operation_8c02b1e0((int)t1);
            return;
        case 1:
            v7 = (float)(t1->f5a8 + 0.1f);
            if (!(1.0f > (t1->f5a8 + 0.1f))) {
                o->f04 = 2;
                t1->f350 |= 0x2000000;
                v7 = (float)1.0f;
            }
            t1->f5a8 = v7;
        }
    }
}
