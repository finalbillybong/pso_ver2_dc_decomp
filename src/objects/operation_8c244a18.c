typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Block_frame_0 {
    int f00;
    int f04;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
extern Block8 g_8c33ab20;
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_239258(void *);
extern int operation_239288(void *);
int operation_8c244a18(void)
{
    int k;
    int v1;
    int v2;
    Frame frame;
    S_c8c021ef8 *t1;
    int v8;
    int v3;
    int v4;
    int v5;
    v5 = -1;
    v3 = 0x6dc;
    v1 = 0;
    v2 = 0;
    *(Block8 *)&(&frame)->f00 = *(&g_8c33ab20);
    v4 = 0x7b4;
    for (; 4 > v2; v2 += 1) {
        S_c8c021ef8 *pm2;
        pm2 = lookup_low_id(v2);
        t1 = pm2;
        if (0 != t1) {
            v8 = 1;
            if (*(int *)((char *)0x8c510cd0 + (v2 << 2)) == 0) {
                v8 = 0;
            } else {
                if ((t1->f34 & 0x800) != 0) {
                    if ((unsigned char)operation_239258((void *)0x8c41ce5c) == 1) {
                        v8 = 0;
                    } else {
                        if ((unsigned char)operation_239258((void *)0x8c41ce5c) == 2) {
                            if (*(int *)((char *)t1 + v3) == 0) {
                                v8 = 0;
                            }
                        }
                    }
                }
            }
            if (v8 != 0) {
                v1++;
                if ((unsigned char)operation_239288((void *)0x8c41ce5c) == 1) {
                    k = *(int *)((char *)t1 + v4) + v5;
                    if (k >= 0 && 2 > k) {
                        *(int *)((char *)&(&frame)->f00 + (k << 2)) = 1;
                    }
                }
            }
        }
    }
    if ((unsigned char)operation_239288((void *)0x8c41ce5c) == 1) {
        if ((&frame)->f00.f00 == 0 || (&frame)->f00.f04 == 0) {
            return 1;
        }
    }
    return 1 >= v1;
}
