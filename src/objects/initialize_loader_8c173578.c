typedef struct Layout {
    int kind;
    int *table;
    char unknown8[0x18];
    int value;
    char unknown24[0x60];
} Layout;
typedef struct Source {
    char unknown0[0x28];
    Layout layout;
} Source;
typedef struct Loader {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[2];
    short size;
    Layout layout;
    int state;
} Loader;
extern void initialize_hierarchy_node(Loader *, Source *);
Loader *initialize_loader_8c173578(Loader *loader, Source *source, int index)
{
    initialize_hierarchy_node(loader, source);
    loader->dispatch = (void *)0x8c270258;
    loader->tag = *(int *)0x8c318de0;
    loader->size = 0xa8;
    loader->layout = source->layout;
    loader->layout.value = *(int *)((char *)loader->layout.table + (index << 2));
    loader->state = 0;
    if (loader->layout.value == -1) {
        for (;;) {
        }
    }
    return loader;
}
