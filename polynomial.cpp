struct Term
{
    int coef;
    int exp;
    void int(int c, int e)
    {
        coef = c;
        exp = e;
    };
};

class Polynomial
{
    friend Polynomial operator+(const Polynomial &p1, const Polynomial &p2);

private:
    List<Term> poly;
};
