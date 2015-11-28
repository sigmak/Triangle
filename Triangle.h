#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include <cmath>

using namespace std;
class Triangle {
   public:
      //»ï°¢Çü ÁÂÇ¥
      float x[3],y[3];
      //»ý¼ºÀÚ
      Triangle(float x0, float y0, float x1, float y1, float x2, float y2) {
         x[0]=x0;y[0]=y0; x[1]=x1;y[1]=y1; x[2]=x2;y[2]=y2;
      }
      //»ï°¢Çü ÀÌµ¿ÇÔ¼ö
      void move(float dx, float dy){
         for(int i=0;i<=2;i++){
            x[i]=x[i]+dx; y[i]=y[i]+dy;}
      }
      //»ï°¢Çü Scale Å©±â Á¶Á¤ 
      void scale(float sx, float sy){
         for(int i=0;i<=2;i++){
            x[i]=x[i]*sx; y[i]=y[i]*sy;}
      }
      //»ï°¢Çü ÁÂÇ¥ Ãâ·Â
      void printPoint(){
         cout<<"("<<x[0]<<","<<y[0]<<") "
             <<"("<<x[1]<<","<<y[1]<<") "
             <<"("<<x[2]<<","<<y[2]<<") "<<endl;
      } 
      //»ï°¢ÇüÀÇ ¸éÀû 
      float computeArea(){
         return abs( ( (x[0]*y[1]-y[0]*x[1])
                      +(x[1]*y[2]-y[1]*x[2])
                      +(x[2]*y[0]-y[2]*x[0]) ) /2.0 );
      }
      //¼Ò¸êÀÚ
      ~Triangle(){
         delete []x; delete []y;                  
      } 
};
#endif
