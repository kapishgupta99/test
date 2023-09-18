#include<iostream>
using namespace std;

struct Rectangle 
{
    int length;
    int breath;
};

void initialize (struct Rectangle *r , int l , int b)
{
r->length=l;
r->breath=b;
}

int area (struct Rectangle r)
{
    return r.breath*r.length;
}

int changelength (struct Rectangle *r,int l)
{
    r->length=l;
return 0;
}



int main()
{
    struct Rectangle r;

    initialize(&r,15,20);
    area(r);
    changelength(&r,80);

}