class dynarr
{
    int len;
    int *p;
public:
    dynarr(int len);
    dynarr(dynarr& q);
    ~dynarr();
    void print();
    int getsize();
    void set(int x, int i);
    int get(int i);
    void append(int x);
    void add(dynarr q);
    void sub(dynarr q);
};
