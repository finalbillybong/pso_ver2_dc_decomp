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
extern void *heap_alloc_8c122700(void *, int);
extern void TObject_ctor_8c0330e4(Loader *, Source *);
extern void reparent_hierarchy_node(Loader *, void *);
Loader *TQuestThread_ctor_3_8c1736ac(int index)
{
    Loader *loader;
    Source *source;
    if (*(Source **)0x8c4db520 != 0) {
        loader = heap_alloc_8c122700(*(void **)0x8c4d97e0, 0xa8);
        if (loader == 0) {
            for (;;) {
            }
        }
        if (loader) {
            source = *(Source **)0x8c4db520;
            TObject_ctor_8c0330e4(loader, source);
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
        }
        if (loader) {
            reparent_hierarchy_node(loader, *(void **)0x8c44be84);
            return loader;
        }
        for (;;) {
        }
    }
    return 0;
}
