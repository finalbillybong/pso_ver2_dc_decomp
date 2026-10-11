typedef struct Item { int unknown0; short flags; } Item;
extern void request_resource_release(void *);
void release_scene_8c16c1e4(void)
{
    if (*(void **)0x8c4db40c) {
        request_resource_release(*(void **)0x8c4db40c);
        *(void **)0x8c4db40c = 0;
    }
    if (*(void **)0x8c4db410) {
        request_resource_release(*(void **)0x8c4db410);
        *(void **)0x8c4db410 = 0;
    }
    if (*(void **)0x8c4db414) {
        request_resource_release(*(void **)0x8c4db414);
        *(void **)0x8c4db414 = 0;
    }
    if (*(Item **)0x8c4db4c8) {
        (*(Item **)0x8c4db4c8)->flags |= 1;
        *(Item **)0x8c4db4c8 = 0;
    }
    if (*(Item **)0x8c4db4cc) {
        (*(Item **)0x8c4db4cc)->flags |= 1;
        *(Item **)0x8c4db4cc = 0;
    }
    if (*(Item **)0x8c4db4d0) {
        (*(Item **)0x8c4db4d0)->flags |= 1;
        *(Item **)0x8c4db4d0 = 0;
    }
}
