#pragma once

class number
{
public:
    number(int a);
    bool operator==(number const & rhs);

private:
    int a;
};