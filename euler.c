int prob1(int limit)
{
    int sum = 0;
    int i;
    for (i = 1; i < limit; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
        else if (i % 5 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int prob5(int num_to)
{
    int current;
    for (current = 1; 1; current++)
    {
        int factor;
        for (factor = num_to; factor >= 1; factor--)
        {
            if (current % factor != 0)
                break;
            if (factor == 1)
                return current;
        }
    }
}

int prob6(int num_to)
{
    int sum_of_squares = 0;
    int square_of_sums = 0;
    int i;
    for (i = 1; i <= num_to; i++)
    {
        sum_of_squares += i * i;
        square_of_sums += i;
    }
    square_of_sums *= square_of_sums;
    return square_of_sums - sum_of_squares;
}