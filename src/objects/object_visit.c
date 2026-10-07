/* Visit non-null pointers in the observed twelve-entry global table. */
void object_visit(void (*callback)(void *))
{
    int i;
    void **objects = (void **)0x8c41ce2c;
    for (i = 0; i < 12; i++) {
        if (*objects)
            callback(*objects);
        objects++;
    }
}
