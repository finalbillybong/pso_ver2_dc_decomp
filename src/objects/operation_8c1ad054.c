typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e1af0 S_g8c4e1af0;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_10 S_vv3_10;
typedef struct S_vv3_c S_vv3_c;
struct S_vv3 {
    char unknown0[0xc];
    S_vv3_c *f0c;
    S_vv3_10 *f10;
};
extern void set_effect_blend_state(float);
extern void call_8c3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(S_vv3 *);
extern void call_8c37df90(int, void *);
extern void call_8c37dd28(int, void *);
extern void call_8c3c1f82(int);
extern void call_8c38ad10(void);
extern void restore_effect_blend_state(void);
void operation_8c1ad054(void)
{
    char *v2;
    int v1;
    S_vv3 *v3;
    int v4;
    v1 = (int)(void *)0x8c4e1af8;
    v2 = (char *)*(int *)((char *)0x8c4e1ae0 + (*(int *)0x8c4e227c << 2));
    set_effect_blend_state(1.0f);
    call_8c3827d8((void *)(*(S_g8c4e1af0 **)0x8c4e1af0));
    v3 = (S_vv3 *)v1;
    v4 = (int)0;
    while (*(int *)0x8c4e2278 > v4) {
        call_8c38ae68();
        call_8c382a40(v3);
        call_8c37df90(0, (void *)(v3->f10));
        call_8c37dd28(0, (void *)(v3->f0c));
        call_8c3c1f82((int)(v2));
        call_8c38ad10();
        v4 = (int)(v4 + 1);
        v3 = (S_vv3 *)((char *)v3 + 20);
    }
    restore_effect_blend_state();
}
