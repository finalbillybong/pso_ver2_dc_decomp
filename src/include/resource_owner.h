#ifndef PSO_RESOURCE_OWNER_H
#define PSO_RESOURCE_OWNER_H
/* Provisional observed prefixes only; pointer-chain names do not identify
 * complete engine types. Static dispatch/tag/callback data remain reference inputs. */
typedef struct RenderFlags { unsigned int flags; } RenderFlags;
typedef struct RenderLinkC { char unknown00[48]; RenderFlags *flags; } RenderLinkC;
typedef struct RenderLinkB { char unknown00[48]; RenderLinkC *next; } RenderLinkB;
typedef struct RenderLinkA { char unknown00[44]; RenderLinkB *next; } RenderLinkA;
typedef struct ResourceOwner {
    unsigned int tag; char unknown04[20]; void *dispatch;
    char unknown1c[2]; unsigned short size;
    char unknown20[24]; RenderLinkA *link;
    char unknown3c[256]; void *target;
    char unknown140[2]; short part;
    char unknown144[156]; unsigned char field1e0, field1e1;
    char unknown1e2[26]; unsigned int flags;
    char unknown200[36]; short field224;
    char unknown226[6]; void *callback;
    char unknown230[4]; int angle, speed; unsigned int counter; int state;
} ResourceOwner;
typedef char check_RenderFlags_flags[(unsigned long)&((RenderFlags *)0)->flags == 0 ? 1 : -1];
typedef char check_RenderFlags_prefix[sizeof(RenderFlags) == 4 ? 1 : -1];
typedef char check_RenderLinkC_flags[(unsigned long)&((RenderLinkC *)0)->flags == 48 ? 1 : -1];
typedef char check_RenderLinkC_prefix[sizeof(RenderLinkC) == 52 ? 1 : -1];
typedef char check_RenderLinkB_next[(unsigned long)&((RenderLinkB *)0)->next == 48 ? 1 : -1];
typedef char check_RenderLinkB_prefix[sizeof(RenderLinkB) == 52 ? 1 : -1];
typedef char check_RenderLinkA_next[(unsigned long)&((RenderLinkA *)0)->next == 44 ? 1 : -1];
typedef char check_RenderLinkA_prefix[sizeof(RenderLinkA) == 48 ? 1 : -1];
typedef char check_ResourceOwner_tag[(unsigned long)&((ResourceOwner *)0)->tag == 0 ? 1 : -1];
typedef char check_ResourceOwner_dispatch[(unsigned long)&((ResourceOwner *)0)->dispatch == 24 ? 1 : -1];
typedef char check_ResourceOwner_size[(unsigned long)&((ResourceOwner *)0)->size == 30 ? 1 : -1];
typedef char check_ResourceOwner_link[(unsigned long)&((ResourceOwner *)0)->link == 56 ? 1 : -1];
typedef char check_ResourceOwner_target[(unsigned long)&((ResourceOwner *)0)->target == 316 ? 1 : -1];
typedef char check_ResourceOwner_part[(unsigned long)&((ResourceOwner *)0)->part == 322 ? 1 : -1];
typedef char check_ResourceOwner_field1e0[(unsigned long)&((ResourceOwner *)0)->field1e0 == 480 ? 1 : -1];
typedef char check_ResourceOwner_field1e1[(unsigned long)&((ResourceOwner *)0)->field1e1 == 481 ? 1 : -1];
typedef char check_ResourceOwner_flags[(unsigned long)&((ResourceOwner *)0)->flags == 508 ? 1 : -1];
typedef char check_ResourceOwner_field224[(unsigned long)&((ResourceOwner *)0)->field224 == 548 ? 1 : -1];
typedef char check_ResourceOwner_callback[(unsigned long)&((ResourceOwner *)0)->callback == 556 ? 1 : -1];
typedef char check_ResourceOwner_angle[(unsigned long)&((ResourceOwner *)0)->angle == 564 ? 1 : -1];
typedef char check_ResourceOwner_speed[(unsigned long)&((ResourceOwner *)0)->speed == 568 ? 1 : -1];
typedef char check_ResourceOwner_counter[(unsigned long)&((ResourceOwner *)0)->counter == 572 ? 1 : -1];
typedef char check_ResourceOwner_state[(unsigned long)&((ResourceOwner *)0)->state == 576 ? 1 : -1];
typedef char check_ResourceOwner_prefix[sizeof(ResourceOwner) == 580 ? 1 : -1];
#endif
