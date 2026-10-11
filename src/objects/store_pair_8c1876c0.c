extern int first_8c4dbc00;
extern int second_8c4dbc04;
void store_pair_8c1876c0(int *value)
{
    first_8c4dbc00 = value[0];
    second_8c4dbc04 = value[1];
}
