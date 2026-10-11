extern void transform_actor_records(void *);

int transform_with_8c05214c(char *o, int value, int argument)
{
    *(int *)(o + 0xe0) = argument;
    *(int *)(o + 0xdc) = value;
    transform_actor_records(o);
    return *(int *)(o + 0xdc);
}
