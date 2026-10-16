typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbc60 S_g8c4dbc60;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c100a9c(void);
extern void operation_8c189998(void);
extern void operation_8c1c720c(void);
extern void operation_8c207850(void);
extern void create_effect_a1448(void);
void operation_8c189d60(void)
{
    S_vv1 *v1;
    if (*(int *)0x8c4dbc60 != 0) {
        v1 = (S_vv1 *)*(S_g8c4dbc60 **)0x8c4dbc60;
        v1->f04 |= 1;
        *(int *)0x8c4dbc60 = 0;
    }
    switch (*(unsigned int *)0x8c4dbc64) {
    case 0:
        operation_8c100a9c();
        operation_8c189998();
        break;
    case 1:
        operation_8c100a9c();
        operation_8c1c720c();
        break;
    case 3:
    case 4:
        operation_8c100a9c();
        operation_8c207850();
    case 2:
        break;
    }
    create_effect_a1448();
}
