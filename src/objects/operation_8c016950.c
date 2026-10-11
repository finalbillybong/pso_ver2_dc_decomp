typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41c604 S_g8c41c604;
typedef struct S_g8c41c608 S_g8c41c608;
typedef struct S_g8c41c60c S_g8c41c60c;
typedef struct S_g8c41c614 S_g8c41c614;
typedef struct S_g8c41c618 S_g8c41c618;
typedef struct S_g8c41c61c S_g8c41c61c;
typedef struct S_g8c41c620 S_g8c41c620;
typedef struct S_g8c41c624 S_g8c41c624;
typedef struct S_g8c41c628 S_g8c41c628;
typedef struct S_g8c41c62c S_g8c41c62c;
typedef struct S_g8c41c630 S_g8c41c630;
struct S_g8c41c628 {
    char unknown0[0x4];
    short f04;
};
struct S_g8c41c62c {
    char unknown0[0x4];
    short f04;
};
struct S_g8c41c630 {
    char unknown0[0x4];
    short f04;
};
extern void request_resource_release(void *);
extern void call_8c0178d4(void);
void operation_8c016950(void)
{
    if (*(int *)0x8c41c604 != 0) {
        request_resource_release(*(S_g8c41c604 **)0x8c41c604);
        *(int *)0x8c41c604 = 0;
    }
    if (*(int *)0x8c41c608 != 0) {
        request_resource_release(*(S_g8c41c608 **)0x8c41c608);
        *(int *)0x8c41c608 = 0;
    }
    if (*(int *)0x8c41c60c != 0) {
        request_resource_release(*(S_g8c41c60c **)0x8c41c60c);
        *(int *)0x8c41c60c = 0;
    }
    if (*(int *)0x8c41c614 != 0) {
        request_resource_release(*(S_g8c41c614 **)0x8c41c614);
        *(int *)0x8c41c614 = 0;
    }
    if (*(int *)0x8c41c618 != 0) {
        request_resource_release(*(S_g8c41c618 **)0x8c41c618);
        *(int *)0x8c41c618 = 0;
    }
    if (*(int *)0x8c41c61c != 0) {
        request_resource_release(*(S_g8c41c61c **)0x8c41c61c);
        *(int *)0x8c41c61c = 0;
    }
    if (*(int *)0x8c41c620 != 0) {
        request_resource_release(*(S_g8c41c620 **)0x8c41c620);
        *(int *)0x8c41c620 = 0;
    }
    if (*(int *)0x8c41c624 != 0) {
        request_resource_release(*(S_g8c41c624 **)0x8c41c624);
        *(int *)0x8c41c624 = 0;
    }
    if (*(int *)0x8c41c628 != 0) {
        (*(S_g8c41c628 **)0x8c41c628)->f04 |= 1;
        *(int *)0x8c41c628 = 0;
    }
    if (*(int *)0x8c41c62c != 0) {
        (*(S_g8c41c62c **)0x8c41c62c)->f04 |= 1;
        *(int *)0x8c41c62c = 0;
    }
    if (*(int *)0x8c41c630 != 0) {
        (*(S_g8c41c630 **)0x8c41c630)->f04 |= 1;
        *(int *)0x8c41c630 = 0;
    }
    call_8c0178d4();
    *(int *)0x8c41bce4 = 0;
}
