#include<bits/stdc++.h>
using namespace std;

#define PI 3.14

class co_ords{
    public:
    int x,y,z;
    co_ords(int x, int y, int z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    float dist(co_ords d){
        if(this->x == d.x){
            float radius = sqrt(((this->z - d.z)*(this->z - d.z)) + ((this->y - d.y)*(this->y - d.y)));
            return PI*radius/6;
        }
        else if(this->y == d.y){
            float radius = sqrt(((this->z - d.z)*(this->z - d.z)) + ((this->x - d.x)*(this->x - d.x)));
            return PI*radius/6;
        }
        else if(this->z == d.z){
            float radius = sqrt(((this->x - d.x)*(this->x - d.x)) + ((this->y - d.y)*(this->y - d.y)));
            return PI*radius/6;
        }
        else{
            float xy = sqrt((this->x - d.x)*(this->x - d.x) + (this->y - d.y)*(this->y - d.y));
            float xz = sqrt((this->x - d.x)*(this->x - d.x) + (this->z - d.z)*(this->z - d.z));
            float zy = sqrt((this->z - d.z)*(this->z - d.z) + (this->y - d.y)*(this->y - d.y));
            

        }
    }
};

int main()
{
    int n;

    return 0;
}