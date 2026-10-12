typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void initialize_scene_node_8c1930a0(void *, int);
extern int call_8c01c25c(void);
extern int current_effect_mode(void);
extern void call_8c192670(int);
extern int call_8c177a00(int, int);
extern void create_related_effect_8c221084(void *, void *, unsigned int);
extern void call_8c219a94(void);
extern void call_8c25f8a0(int);
void operation_8c163738(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x20);
    if (t1 != 0) {
        initialize_scene_node_8c1930a0((void *)t1, (int)*(S_g8c44be9c **)0x8c44be9c);
    }
    t3 = call_8c01c25c();
    t2 = current_effect_mode();
    *(int *)0x8c4db244 = 0;
    call_8c192670(t2);
    if (t2 == 0) {
        *(int *)0x8c4db248 |= 1;
        if (t3 == 0xf) {
            if (*(int *)0x8c4db250 != 0) {
                goto L_8c1637ee;
            }
            t4 = call_8c177a00(0, 0x3c);
            if (t4 == 0) {
                create_related_effect_8c221084(*(S_g8c4689e0 **)0x8c4689e0, (void *)0x8c286474, (unsigned int)(void *)0x8c163998);
            }
            t5 = call_8c177a00(0, 0x3d);
            if (t5 == 0) {
                create_related_effect_8c221084(*(S_g8c4689e0 **)0x8c4689e0, (void *)0x8c286481, (unsigned int)(void *)0x8c163ac4);
            }
            t6 = call_8c177a00(0, 0x3e);
            if (t6 == 0) {
                create_related_effect_8c221084(*(S_g8c4689e0 **)0x8c4689e0, (void *)0x8c28648e, (unsigned int)(void *)0x8c163bf4);
            }
            *(int *)0x8c4db250 = 1;
        } else {
            if (t3 == 0x10) {
                call_8c219a94();
            }
        }
    }
L_8c1637ee:;
    if ((*(int *)0x8c510ba0 != 0) == 1) {
        call_8c219a94();
    }
    if (t3 == 0x10) {
        t7 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x20);
        if (t7 != 0) {
            call_8c25f8a0(t7);
        }
    }
    *(int *)0x8c4db244 = 1;
}
