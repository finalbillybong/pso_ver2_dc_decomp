typedef struct Vector3 { float x; float y; float z; } Vector3;
typedef struct Item {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[2];
    short size;
    char unknown20[0x38];
    int unknown58;
    char unknown5c[0xc];
    unsigned short owner;
    char unknown6a[2];
    int unknown6c;
    Vector3 offset;
} Item;
extern void *lookup_object_by_id(unsigned short);
extern int can_spawn_8c0fca30(void *);
extern void *allocate_block(void *, int);
extern void initialize_base_8c0db1d0(Item *, void *);
extern void bind_item_8c0fc508(Item *, unsigned short);
Item *spawn_item_8c0fc440(unsigned short id)
{
    Item *item;
    void *owner;
    unsigned short none = 0xffff;
    if (id == none) return 0;
    owner = lookup_object_by_id(id);
    if (!can_spawn_8c0fca30(owner)) return 0;
    item = allocate_block(*(void **)0x8c4d97e0, 0x7c);
    if (item) {
        Item *self = item;
        Item **home = &self;
        (void)home;
        initialize_base_8c0db1d0(item, (void *)0x8c30aa04);
        self->dispatch = (void *)0x8c26906c;
        self->tag = *(int *)0x8c30a878;
        self->size = 0x7c;
        self->owner = 0xffff;
        self->unknown6c = 0;
        self->offset = *(Vector3 *)0x8c2875c0;
        bind_item_8c0fc508(self, id);
        self->unknown58 = 0;
    }
    return item;
}
