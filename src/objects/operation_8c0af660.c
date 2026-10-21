typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg1 Arg1;
typedef struct Block_frame_ec {
    int f00;
    char unknown4[0xc];
} Block_frame_ec;
typedef struct Block_frame_e0 {
    int f00;
    char unknown4[0x8];
} Block_frame_e0;
typedef struct Block_frame_d0 {
    int f00;
    char unknown4[0xc];
} Block_frame_d0;
typedef struct Block_frame_c4 {
    int f00;
    char unknown4[0x8];
} Block_frame_c4;
typedef struct Block_frame_b4 {
    int f00;
    char unknown4[0xc];
} Block_frame_b4;
typedef struct Block_frame_a8 {
    int f00;
    char unknown4[0x8];
} Block_frame_a8;
typedef struct Block_frame_98 {
    int f00;
    char unknown4[0xc];
} Block_frame_98;
typedef struct Block_frame_8c {
    int f00;
    char unknown4[0x8];
} Block_frame_8c;
typedef struct Block_frame_7c {
    int f00;
    char unknown4[0xc];
} Block_frame_7c;
typedef struct Block_frame_70 {
    int f00;
    char unknown4[0x8];
} Block_frame_70;
typedef struct Block_frame_60 {
    int f00;
    char unknown4[0xc];
} Block_frame_60;
typedef struct Block_frame_54 {
    int f00;
    char unknown4[0x8];
} Block_frame_54;
typedef struct Block_frame_44 {
    int f00;
    char unknown4[0xc];
} Block_frame_44;
typedef struct Block_frame_38 {
    int f00;
    char unknown4[0x8];
} Block_frame_38;
typedef struct Block_frame_28 {
    int f00;
    char unknown4[0xc];
} Block_frame_28;
typedef struct Block_frame_1c {
    int f00;
    char unknown4[0x8];
} Block_frame_1c;
typedef struct Block_frame_c {
    int f00;
    char unknown4[0xc];
} Block_frame_c;
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
    Block_frame_1c f1c;
    Block_frame_28 f28;
    Block_frame_38 f38;
    Block_frame_44 f44;
    Block_frame_54 f54;
    Block_frame_60 f60;
    Block_frame_70 f70;
    Block_frame_7c f7c;
    Block_frame_8c f8c;
    Block_frame_98 f98;
    Block_frame_a8 fa8;
    Block_frame_b4 fb4;
    Block_frame_c4 fc4;
    Block_frame_d0 fd0;
    Block_frame_e0 fe0;
    Block_frame_ec fec;
};
struct Arg1 {
    char unknown0[0x308];
    short f308;
};
extern Block16 g_8c304ec0;
extern Vector3 g_8c304ed0;
extern Block16 g_8c304edc;
extern Vector3 g_8c304eec;
extern Block16 g_8c304ef8;
extern Vector3 g_8c304f08;
extern Block16 g_8c304f14;
extern Vector3 g_8c304f24;
extern Block16 g_8c304f30;
extern Vector3 g_8c304f40;
extern Block16 g_8c304f4c;
extern Vector3 g_8c304f5c;
extern Block16 g_8c304f68;
extern Vector3 g_8c304f78;
extern Block16 g_8c304f84;
extern Vector3 g_8c304f94;
extern Block16 g_8c304fa0;
extern Vector3 g_8c304fb0;
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c418280[];
extern int allocate_block(void *, unsigned int);
extern void operation_8c0b6448(void *, void *, void *, int, int, int, float, float, float);
extern void initialize_timed_owner_effect_8c132ec4(void *, void *, void *);
extern void initialize_timed_owner_effect_8c133000(void *, void *, void *);
extern void initialize_timed_owner_effect(void *, void *, void *);
extern void initialize_timed_owner_effect_8c13313c(void *, void *, void *);
extern void initialize_timed_owner_effect_8c133278(void *, void *, void *);
extern void initialize_timed_owner_effect_8c1333b4(void *, void *, void *);
void operation_8c0af660(int a0, Arg1 *a1)
{
    Frame frame;
    char *row;
    int v85;
    int v1;
    int v5;
    int v6;
    int v10;
    int v11;
    int v15;
    int v16;
    int v20;
    int v21;
    int v25;
    int v26;
    int v30;
    int v31;
    int v35;
    int v36;
    int v40;
    int v43;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    row = (char *)0x8c3047f8 + (a0 << 6);
    v85 = *(int *)(row + 0x14) + *(int *)(row + 0x38) + 0x32;
    switch (a0) {
    case 1:
        *(Block16 *)&(&frame)->fec = *(Block16 *)&g_8c304ec0;
        *(Vector3 *)&(&frame)->fe0 = *(Vector3 *)&g_8c304ed0;
        t1 = allocate_block(g_8c4d97e0, (unsigned int)0x68);
        if (t1 != 0) {
            v1 = (int)v85;
            operation_8c0b6448((void *)t1, (void *)(&(&frame)->fec.f00), (void *)(&(&frame)->fe0.f00), v1, (int)a1, (int)g_8c44bea0, 0.1f, 0.35f, *(float *)(g_8c418280 + 0x1c));
        }
        v5 = (int)(a1->f308 == 1);
        if (v5 == 0) {
            return;
        }
        t2 = allocate_block(g_8c4d97e0, (unsigned int)0x38);
        if (t2 == 0) {
            return;
        }
        initialize_timed_owner_effect_8c132ec4((void *)t2, (void *)a1, g_8c44bea0);
        return;
    case 0:
    case 2:
        *(Block16 *)&(&frame)->fd0 = *(Block16 *)&g_8c304edc;
        *(Vector3 *)&(&frame)->fc4 = *(Vector3 *)&g_8c304eec;
        t3 = allocate_block(g_8c4d97e0, (unsigned int)0x68);
        if (t3 != 0) {
            v6 = (int)v85;
            operation_8c0b6448((void *)t3, (void *)(&(&frame)->fd0.f00), (void *)(&(&frame)->fc4.f00), v6, (int)a1, (int)g_8c44bea0, 0.1f, 0.35f, *(float *)(g_8c418280 + 0x1c));
        }
        v10 = (int)(a1->f308 == 1);
        if (v10 == 0) {
            return;
        }
        t4 = allocate_block(g_8c4d97e0, (unsigned int)0x38);
        if (t4 == 0) {
            return;
        }
        initialize_timed_owner_effect_8c132ec4((void *)t4, (void *)a1, g_8c44bea0);
        return;
    case 3:
    case 4:
        *(Block16 *)&(&frame)->fb4 = *(Block16 *)&g_8c304ef8;
        *(Vector3 *)&(&frame)->fa8 = *(Vector3 *)&g_8c304f08;
        t5 = allocate_block(g_8c4d97e0, (unsigned int)0x68);
        if (t5 != 0) {
            v11 = (int)v85;
            operation_8c0b6448((void *)t5, (void *)(&(&frame)->fb4.f00), (void *)(&(&frame)->fa8.f00), v11, (int)a1, (int)g_8c44bea0, 0.1f, 0.35f, *(float *)(g_8c418280 + 0x1c));
        }
        v15 = (int)(a1->f308 == 1);
        if (v15 == 0) {
            return;
        }
        t6 = allocate_block(g_8c4d97e0, (unsigned int)0x38);
        if (t6 == 0) {
            return;
        }
        initialize_timed_owner_effect_8c133000((void *)t6, (void *)a1, g_8c44bea0);
        return;
    case 5:
        *(Block16 *)&(&frame)->f98 = *(Block16 *)&g_8c304f14;
        *(Vector3 *)&(&frame)->f8c = *(Vector3 *)&g_8c304f24;
        t7 = allocate_block(g_8c4d97e0, (unsigned int)0x68);
        if (t7 != 0) {
            v16 = (int)v85;
            operation_8c0b6448((void *)t7, (void *)(&(&frame)->f98.f00), (void *)(&(&frame)->f8c.f00), v16, (int)a1, (int)g_8c44bea0, 0.1f, 0.35f, *(float *)(g_8c418280 + 0x1c));
        }
        v20 = (int)(a1->f308 == 1);
        if (v20 == 0) {
            return;
        }
        t8 = allocate_block(g_8c4d97e0, (unsigned int)0x38);
        if (t8 == 0) {
            return;
        }
        initialize_timed_owner_effect_8c133000((void *)t8, (void *)a1, g_8c44bea0);
        return;
    case 6:
    case 7:
    case 8:
        *(Block16 *)&(&frame)->f7c = *(Block16 *)&g_8c304f30;
        *(Vector3 *)&(&frame)->f70 = *(Vector3 *)&g_8c304f40;
        t9 = allocate_block(g_8c4d97e0, (unsigned int)0x68);
        if (t9 != 0) {
            v21 = (int)v85;
            operation_8c0b6448((void *)t9, (void *)(&(&frame)->f7c.f00), (void *)(&(&frame)->f70.f00), v21, (int)a1, (int)g_8c44bea0, 0.1f, 0.35f, *(float *)(g_8c418280 + 0x1c));
        }
        v25 = (int)(a1->f308 == 1);
        if (v25 == 0) {
            return;
        }
        t10 = allocate_block(g_8c4d97e0, (unsigned int)0x38);
        if (t10 == 0) {
            return;
        }
        initialize_timed_owner_effect((void *)t10, (void *)a1, g_8c44bea0);
        return;
    case 9:
    case 15:
    case 16:
    case 17:
        *(Block16 *)&(&frame)->f60 = *(Block16 *)&g_8c304f4c;
        *(Vector3 *)&(&frame)->f54 = *(Vector3 *)&g_8c304f5c;
        t11 = allocate_block(g_8c4d97e0, (unsigned int)0x68);
        if (t11 != 0) {
            v26 = (int)v85;
            operation_8c0b6448((void *)t11, (void *)(&(&frame)->f60.f00), (void *)(&(&frame)->f54.f00), v26, (int)a1, (int)g_8c44bea0, 0.1f, 0.35f, *(float *)(g_8c418280 + 0x1c));
        }
        v30 = (int)(a1->f308 == 1);
        if (v30 == 0) {
            return;
        }
        t12 = allocate_block(g_8c4d97e0, (unsigned int)0x38);
        if (t12 == 0) {
            return;
        }
        initialize_timed_owner_effect_8c13313c((void *)t12, (void *)a1, g_8c44bea0);
        return;
    case 10:
    case 11:
    case 12:
    case 14:
        *(Block16 *)&(&frame)->f44 = *(Block16 *)&g_8c304f68;
        *(Vector3 *)&(&frame)->f38 = *(Vector3 *)&g_8c304f78;
        t13 = allocate_block(g_8c4d97e0, (unsigned int)0x68);
        if (t13 != 0) {
            v31 = (int)v85;
            operation_8c0b6448((void *)t13, (void *)(&(&frame)->f44.f00), (void *)(&(&frame)->f38.f00), v31, (int)a1, (int)g_8c44bea0, 0.1f, 0.35f, *(float *)(g_8c418280 + 0x1c));
        }
        v35 = (int)(a1->f308 == 1);
        if (v35 == 0) {
            return;
        }
        t14 = allocate_block(g_8c4d97e0, (unsigned int)0x38);
        if (t14 == 0) {
            return;
        }
        initialize_timed_owner_effect_8c133278((void *)t14, (void *)a1, g_8c44bea0);
        return;
    case 13:
        *(Block16 *)&(&frame)->f28 = *(Block16 *)&g_8c304f84;
        *(Vector3 *)&(&frame)->f1c = *(Vector3 *)&g_8c304f94;
        t15 = allocate_block(g_8c4d97e0, (unsigned int)0x68);
        if (t15 != 0) {
            v36 = (int)v85;
            operation_8c0b6448((void *)t15, (void *)(&(&frame)->f28.f00), (void *)(&(&frame)->f1c.f00), v36, (int)a1, (int)g_8c44bea0, 0.1f, 0.35f, *(float *)(g_8c418280 + 0x1c));
        }
        v40 = (int)(a1->f308 == 1);
        if (v40 == 0) {
            return;
        }
        t16 = allocate_block(g_8c4d97e0, (unsigned int)0x38);
        if (t16 == 0) {
            return;
        }
        initialize_timed_owner_effect_8c133278((void *)t16, (void *)a1, g_8c44bea0);
        return;
    case 18:
        *(Block16 *)&(&frame)->f0c = *(Block16 *)&g_8c304fa0;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c304fb0;
        t17 = allocate_block(g_8c4d97e0, (unsigned int)0x68);
        if (t17 != 0) {
            operation_8c0b6448((void *)t17, (void *)(&(&frame)->f0c.f00), (void *)(&frame), v85, (int)a1, (int)g_8c44bea0, 0.1f, 0.35f, *(float *)(g_8c418280 + 0x1c));
        }
        v43 = (int)(a1->f308 == 1);
        if (v43 != 0) {
            t18 = allocate_block(g_8c4d97e0, (unsigned int)0x38);
            if (t18 != 0) {
                initialize_timed_owner_effect_8c1333b4((void *)t18, (void *)a1, g_8c44bea0);
            }
        }
        return;
    }
}
