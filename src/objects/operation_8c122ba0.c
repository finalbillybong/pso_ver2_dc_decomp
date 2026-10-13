typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void operation_8c1215e0(void);
extern void operation_8c163738(void);
extern void create_context_control(void);
extern void operation_8c09f220(void);
extern void create_object_8c09d698(void);
extern void call_8c186e84(void);
extern int allocate_block(void *, unsigned int);
extern void operation_8c1bec9c(void *, int);
extern void call_8c0dc9ac(int, void *);
extern void initialize_fade_state(void *, void *);
extern void start_fade_state(int);
extern void call_8c1af9c0(int, void *);
extern void call_8c10112c(int, void *);
extern void call_8c0b49c0(void);
extern void call_8c1107e0(int, void *);
extern void operation_03cf18(void *, void *);
extern void call_8c19df2c(void);
extern int current_effect_mode(void);
extern int operation_8c1a9c50(void);
extern void operation_8c236ee0(void);
extern void call_8c253698(int, void *, void *);
extern int call_8c01c25c(void);
extern void initialize_manager_8c208384(void *, void *);
void operation_8c122ba0(void)
{
    int v181;
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
    operation_8c1215e0();
    *(int *)0x8c4689e0 = (int)(*(int *)0x8c44be9c);
    operation_8c163738();
    create_context_control();
    operation_8c09f220();
    create_object_8c09d698();
    call_8c186e84();
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x20);
    if (t1 != 0) {
        operation_8c1bec9c((void *)t1, (int)(*(S_g8c44be88 **)0x8c44be88));
    }
    t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xb8);
    if (t2 != 0) {
        call_8c0dc9ac(t2, (void *)(*(S_g8c44be84 **)0x8c44be84));
    }
    t3 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x30);
    if (t3 != 0) {
        initialize_fade_state((void *)t3, (void *)(*(S_g8c44be84 **)0x8c44be84));
    }
    start_fade_state(0);
    t4 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x34);
    if (t4 != 0) {
        call_8c1af9c0(t4, (void *)(*(S_g8c44be84 **)0x8c44be84));
    }
    t5 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x1c4);
    if (t5 != 0) {
        call_8c10112c(t5, (void *)(*(S_g8c44be98 **)0x8c44be98));
    }
    call_8c0b49c0();
    t6 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x24);
    if (t6 != 0) {
        call_8c1107e0(t6, (void *)(*(S_g8c44be9c **)0x8c44be9c));
    }
    t7 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
    if (t7 != 0) {
        operation_03cf18((void *)t7, (void *)(*(S_g8c44be84 **)0x8c44be84));
    }
    call_8c19df2c();
    t8 = current_effect_mode();
    if (t8 == 0xf) {
        t9 = operation_8c1a9c50();
        if (t9 != 0) {
            operation_8c236ee0();
        }
    }
    v181 = (int)(*(int *)0x8c510ba0 != 0);
    if (v181 != 0 || *(int *)0x8c4703c0 == 3) {
        t10 = current_effect_mode();
        if (t10 == 0xb) {
            t11 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x34);
            if (t11 != 0) {
                call_8c253698(t11, (void *)(*(S_g8c418248 **)0x8c418248), (void *)(*(S_g8c44bea0 **)0x8c44bea0));
            }
        }
    } else {
    }
    t12 = call_8c01c25c();
    if (t12 == 0x10) {
        t13 = current_effect_mode();
        if (t13 == 0) {
            t14 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x20);
            if (t14 != 0) {
                initialize_manager_8c208384((void *)t14, (void *)(*(S_g8c44be88 **)0x8c44be88));
            }
        }
    }
}
