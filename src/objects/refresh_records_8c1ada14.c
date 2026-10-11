typedef struct Manager { char unknown0[0x20]; short flags; } Manager;
typedef struct Item { int unknown0; short flags; } Item;
extern int operation_021fcc(void *);
void refresh_records_8c1ada14(void)
{
    Manager *manager = *(Manager **)0x8c46fe20;
    int i;
    if (manager) {
        Item *item;
        manager->flags |= 1;
        item = *(Item **)0x8c4d59d8;
        if (item) item->flags |= 0x10;
    }
    for (i = 0; i < *(int *)0x8c467874; i++) {
        void *record = *(void **)((char *)0x8c467240 + (i << 2));
        if (record) operation_021fcc(record);
    }
}
