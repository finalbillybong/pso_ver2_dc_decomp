typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block76 {
    int words[19];
} Block76;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Block_frame_4c {
    char unknown0[0xc];
    Vector3 f0c;
    char unknown18[0x28];
    int f40;
    int f44;
    char unknown48[0x4];
} Block_frame_4c;
typedef struct Block_frame_0 {
    char unknown0[0xc];
    Vector3 f0c;
    char unknown18[0x28];
    int f40;
    int f44;
    char unknown48[0x4];
} Block_frame_0;
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x36];
    Vector3 f3c;
    char unknown48[0x54];
    float f9c;
    int fa0;
    int fa4;
    int fa8;
    int fac;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_4c f4c;
};
extern Block76 g_8c328734;
extern Block76 g_8c328780;
extern S_g8c44be98 *g_8c44be98;
extern int g_8c467874;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c021ef8 *lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
extern void create_effect_777c(void *, int);
extern int allocate_block(void *, unsigned int);
extern void initialize_panel_8c087d8c(void *, void *, void *);
void operation_8c1c060c(Object *o)
{
    Frame frame;
    int v2;
    int v1;
    S_c8c021ef8 *t1;
    float t2;
    int t3;
    int t4;
    v1 = (int)0x800;
    v2 = (int)0;
    while (g_8c467874 > v2) {
        t1 = lookup_low_id(v2);
        if (t1 != 0 && ((t1->f34 & v1)) == 0) {
            t2 = squared_distance_xz((void *)(((char *)t1 + 0x3c)), (void *)(&o->f3c));
            if (!(t2 > (o->f9c * o->f9c))) {
                *(Block76 *)&(&frame)->f4c = *(Block76 *)&g_8c328734;
                *(Vector3 *)&(&frame)->f4c.f0c = *(Vector3 *)&o->f3c;
                (&frame)->f4c.f40 = (int)(o->fa0);
                (&frame)->f4c.f44 = (int)(o->fa8);
                *(Block76 *)&(&frame)->f00 = *(Block76 *)&g_8c328780;
                *(Vector3 *)&(&frame)->f00.f0c = *(Vector3 *)&o->f3c;
                (&frame)->f00.f40 = (int)(o->fa4);
                (&frame)->f00.f44 = (int)(o->fac);
                create_effect_777c((void *)(&o->f3c), 0x45);
                create_effect_777c((void *)(&o->f3c), 0x46);
                t3 = allocate_block(g_8c4d97e0, (unsigned int)0x78);
                if (t3 != 0) {
                    initialize_panel_8c087d8c((void *)t3, g_8c44be98, (void *)(&(&frame)->f4c));
                }
                t4 = allocate_block(g_8c4d97e0, (unsigned int)0x78);
                if (t4 != 0) {
                    initialize_panel_8c087d8c((void *)t4, g_8c44be98, (void *)(&frame));
                }
                o->f04 |= 1;
                return;
            }
        }
        v2 = (int)(v2 + 1);
    }
}
