#include "Triangle.h"


int main(int argc, char *argv[])
{
    float dx,dy, sx,sy;
    float x[3],y[3];
    
    x[0]=-0.5;y[0]=-0.5;
    x[1]=0.5;y[1]=-0.5;
    x[2]=0.5;y[2]=0.5;
    
    Triangle t(x[0],y[0], x[1],y[1], x[2],y[2]);
    t.printPoint();
    cout<<"Triangle Area:"<<t.computeArea()<<endl;
    
    dx=2.0; dy=2.0;
    cout<<"\n move "<<" ("<<dx<<","<<dy<<")"<<endl;
    t.move(dx, dy);
    t.printPoint();
    cout<<"Triangle Area:"<<t.computeArea()<<endl;

    sx=3.0; sy=2.0;
    cout<<"\n scale "<<" ("<<sx<<","<<sy<<")"<<endl;
    t.scale(sx, sy);
    t.printPoint();
    cout<<"Triangle Area:"<<t.computeArea()<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
