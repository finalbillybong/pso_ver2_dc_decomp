#ifndef PSO_RESOURCE_WIDGET_H
#define PSO_RESOURCE_WIDGET_H
/* Provisional resource-widget prefix; names retain observed offsets. */
typedef struct ResourceWidget {
    int tag;char unknown04[20];void *dispatch;
    char unknown1c[2];unsigned short size;char unknown20[12];
    char panel[8];unsigned int flags;char unknown38[44];
    unsigned int field64;int unknown68;void *child;
} ResourceWidget;
typedef char check_ResourceWidget_tag[(unsigned long)&((ResourceWidget *)0)->tag == 0 ? 1 : -1];
typedef char check_ResourceWidget_dispatch[(unsigned long)&((ResourceWidget *)0)->dispatch == 24 ? 1 : -1];
typedef char check_ResourceWidget_size[(unsigned long)&((ResourceWidget *)0)->size == 30 ? 1 : -1];
typedef char check_ResourceWidget_panel[(unsigned long)&((ResourceWidget *)0)->panel == 44 ? 1 : -1];
typedef char check_ResourceWidget_flags[(unsigned long)&((ResourceWidget *)0)->flags == 52 ? 1 : -1];
typedef char check_ResourceWidget_field64[(unsigned long)&((ResourceWidget *)0)->field64 == 100 ? 1 : -1];
typedef char check_ResourceWidget_unknown68[(unsigned long)&((ResourceWidget *)0)->unknown68 == 104 ? 1 : -1];
typedef char check_ResourceWidget_child[(unsigned long)&((ResourceWidget *)0)->child == 108 ? 1 : -1];
typedef char check_ResourceWidget_prefix[sizeof(ResourceWidget) == 112 ? 1 : -1];
#endif
