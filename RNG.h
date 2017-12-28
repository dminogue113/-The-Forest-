#ifndef RNG_H
#define RNG_H


class RNG
{
    public:
        RNG();
        RNG(int sed);
        long long gen();
        long gen(long Min, long Max);

    protected:

    private:
        long counter;
        int seed;
        long long result;
};

#endif // RNG_H
