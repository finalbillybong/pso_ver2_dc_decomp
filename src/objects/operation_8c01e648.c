typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv7 S_vv7;
typedef struct S_vv9 S_vv9;
struct S_vv1 {
    int f00;
};
struct S_vv4 {
    int f00;
};
struct S_vv5 {
    int f00;
};
struct S_vv7 {
    int f00;
};
struct S_vv9 {
    int f00;
};
extern int g_8c41cd20;
extern int g_8c41cd24;
extern int g_8c41cd28;
extern int g_8c41cd2c;
extern int g_8c41cd30;
extern int g_8c41cd38;
extern char g_8c2e75bc[];
extern int call_8c104ff8(void *);
extern void operation_8c0d8ed0(void);
void operation_8c01e648(void)
{
    int t1;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    g_8c41cd20 = 0;
    g_8c41cd24 = 1;
    g_8c41cd28 = 0;
    g_8c41cd38 = 0;
    g_8c41cd2c = 0;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    t1 = call_8c104ff8((void *)((g_8c2e75bc + 0xb)));
    g_8c41cd30 = (int)(t1);
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    operation_8c0d8ed0();
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
}
