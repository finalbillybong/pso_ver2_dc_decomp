extern void set_transform_node_callback(void (*)(void *));
extern void forward_prepare_transform_tree(void *, void *, float);

int prepare_transform_8c01d020(char *o, void *input, int value, float amount)
{
    if (!input || !*(void **)(o + 0x38)) return 0;
    *(int *)0x8c41cb68 = value;
    set_transform_node_callback((void (*)(void *))0x8c01cf44);
    forward_prepare_transform_tree(*(void **)(o + 0x38), input, amount);
    set_transform_node_callback(0);
    return 1;
}
