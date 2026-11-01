typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x4];
    int f2c;
};
extern void TShopSequence_v06_8c1065dc(void *);
extern int spawn_node_8c0a49c8(int);
void THunterGuildSeqOnline_Server_v06_8c208644(Object *o)
{
    int t1;
    TShopSequence_v06_8c1065dc((void *)o);
    t1 = spawn_node_8c0a49c8(5);
    o->f2c = (int)(t1);
    o->f24 = 1;
}
