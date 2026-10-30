extern int port_invalid_8c360d92(int);
extern int send_code_8c360c8c(int, int);
extern int request_8c365d70(int, int, int, void *, int);

int dev_query_8c3643a4(int dev, int *out)
{
    *out = 0;
    if (port_invalid_8c360d92(dev)) {
        return send_code_8c360c8c(0, 0xff000136);
    }
    return request_8c365d70(dev, 6, 11, out, 0);
}

int dev_query2_8c3643e0(int dev, int arg)
{
    if (port_invalid_8c360d92(dev)) {
        return send_code_8c360c8c(0, 0xff000137);
    }
    return request_8c365d70(dev, 6, 12, (void *)arg, 0);
}
