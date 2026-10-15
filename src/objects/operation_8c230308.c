typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
extern void call_8c3806f6(int, int, int);
extern void call_8c01d9dc(void);
extern void forward_reviewed_8c104e8c(void);
extern void operation_8c01c250(int);
extern void call_8c013620(void *, int);
extern void call_8c014498(void *, int);
extern int allocate_block(void *, unsigned int);
extern void call_8c0a1448(int, void *);
extern void call_8c0a1a78(int);
extern void call_8c0a237c(void *, Frame *);
extern void create_descriptor_managers(void);
extern void operation_8c1bec9c(void *, int);
extern void call_8c230028(int);
void operation_8c230308(void)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    call_8c3806f6(0, 0, 0);
    call_8c01d9dc();
    forward_reviewed_8c104e8c();
    operation_8c01c250(2);
    call_8c013620((void *)((void *)0x8c338648), 0x28);
    call_8c014498((void *)((void *)0x8c2e2e84), 4);
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xf8);
    if (t1 != 0) {
        call_8c0a1448(t1, (void *)(*(S_g8c44be88 **)0x8c44be88));
    }
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&*(Vector3 *)0x8c338690;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&*(Vector3 *)0x8c33869c;
    call_8c0a1a78(6);
    call_8c0a237c((void *)(&(&frame)->f0c), (Frame *)((&frame)));
    create_descriptor_managers();
    t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x20);
    if (t2 != 0) {
        operation_8c1bec9c((void *)t2, (int)(*(S_g8c44be88 **)0x8c44be88));
    }
    t3 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x418);
    if (t3 != 0) {
        call_8c230028(t3);
    }
}
