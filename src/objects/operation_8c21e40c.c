typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char f20;
    char unknown21[0x3];
    int f24;
    int f28;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TWindowSubQuestBoardSelect_ctor_8c21e5a8(int);
Object *TWindowSubQuestBoard_ctor_8c21e40c(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278680;
    o->tag = (int)(*(int *)0x8c3367d8);
    o->size = 0x2c;
    t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x70);
    if (t1 != 0) {
        TWindowSubQuestBoardSelect_ctor_8c21e5a8(t1);
    }
    o->f24 = (int)(t1);
    o->f28 = 0;
    o->f20 = 0;
    return o;
}
