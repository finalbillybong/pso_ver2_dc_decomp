/* Static data 8c2ee218-8c2ee278: record_table objects, in address order. */

typedef struct { int type; const void *factory; float unknown_08; int unknown_0c; } DatConstructorEntry;

extern void TObjEneLappy_create_8c0500c0(void);
extern void TObjEneBm3FlyNest_create_8c057c00(void);
extern void TObjEneBm5Wolf_create_8c06092c(void);
extern void TObjEneBeast_create_8c0e586c(void);
extern void TObjNpcLappy_create_8c15daa0(void);

/* DAT constructor table (type -> factory, ending with type 0xFFFF), the same form as the
   per-area tables listed at 8c2ebec8 / 8c2ee8b8; not reached from those lists. */
const DatConstructorEntry dat_ctor_table_8c2ee218[6] = {
    { 65, (void *)TObjEneLappy_create_8c0500c0, 250000.0f, 0 },
    { 66, (void *)TObjEneBm3FlyNest_create_8c057c00, 250000.0f, 30 },
    { 67, (void *)TObjEneBm5Wolf_create_8c06092c, 250000.0f, 0 },
    { 68, (void *)TObjEneBeast_create_8c0e586c, 250000.0f, 0 },
    { 69, (void *)TObjNpcLappy_create_8c15daa0, 250000.0f, 0 },
    { 65535, 0, 250000.0f, 0 }
};
