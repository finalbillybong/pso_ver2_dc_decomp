typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_g8c4da370 S_g8c4da370;
typedef struct S_g8c4da370_42c S_g8c4da370_42c;
typedef struct S_g8c4da370_42c_68 S_g8c4da370_42c_68;
typedef struct S_g8c4db680 S_g8c4db680;
typedef struct S_vv22 S_vv22;
struct S_g8c4da370 {
    char unknown0[0x42c];
    S_g8c4da370_42c *f42c;
};
struct S_g8c4da370_42c {
    char unknown0[0x68];
    S_g8c4da370_42c_68 *f68;
};
struct S_c8c011ecc {
    char unknown0[0x4];
    int f04;
};
struct S_vv22 {
    char unknown0[0x4];
    int f04;
};
extern S_c8c011ecc *call_8c011ecc(int);
extern void initialize_vector_array(void *, void *);
extern void call_8c38ae68(void);
extern void call_8c37b5c4(int);
extern void call_8c37e2e4(int, float, float, float);
extern void call_8c3be38c(int, int, int);
extern void call_8c38ad10(void);
void operation_8c175f64(void)
{
    int v21;
    int v23;
    S_vv22 *v22;
    S_c8c011ecc *t1;
    t1 = call_8c011ecc(0xc);
    if (t1 != 0) {
        initialize_vector_array((void *)t1, (void *)((*(S_g8c4da370 **)0x8c4da370)->f42c->f68));
    }
    *(S_c8c011ecc **)0x8c4db680 = t1;
    call_8c38ae68();
    call_8c37b5c4(0);
    call_8c37e2e4(0, *(float *)0x8c286290, *(float *)0x8c286290, *(float *)0x8c286290);
    v21 = (int)0;
    while (0x13 > v21) {
        call_8c3be38c(0, (int)(t1->f04 + v21 * 0x1c + 4), (int)(t1->f04 + v21 * 0x1c + 4));
        v21 = (int)(v21 + 1);
    }
    call_8c38ad10();
    v22 = (S_vv22 *)*(S_g8c4db680 **)0x8c4db680;
    call_8c38ae68();
    call_8c37b5c4(0);
    call_8c37e2e4(0, 1.1f, 0.0f, 1.1f);
    v23 = (int)0;
    while (0x13 > v23) {
        call_8c3be38c(0, (int)(v22->f04 + v23 * 0x1c + 0x10), (int)(v22->f04 + v23 * 0x1c + 0x10));
        v23 = (int)(v23 + 1);
    }
    call_8c38ad10();
}
