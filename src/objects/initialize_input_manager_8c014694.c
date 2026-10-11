typedef struct Manager {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[4];
    char table[0x10];
} Manager;
typedef struct Range {
    char first[0xc];
    char second[0xc];
} Range;
extern Manager *input_manager;
extern Range input_range;
extern void initialize_hierarchy_node(Manager *);
extern void initialize_table_8c38c1f4(char *, int);
extern void configure_input_8c3be38c(int, char *, char *);
extern void load_manager_8c01470c(Manager *);
extern void reset_manager_8c01472c(Manager *);
extern void bind_manager_8c01474c(Manager *);
Manager *initialize_input_manager_8c014694(Manager *o)
{
    Manager **home = &o;
    (void)home;
    {
        Manager *base = o;
        initialize_hierarchy_node(base);
        base->dispatch = (void *)0x8c261240;
    }
    o->dispatch = (void *)0x8c261208;
    initialize_table_8c38c1f4(o->table, 0x10);
    configure_input_8c3be38c(0, input_range.first, input_range.second);
    load_manager_8c01470c(o);
    reset_manager_8c01472c(o);
    bind_manager_8c01474c(o);
    input_manager = o;
    return o;
}
