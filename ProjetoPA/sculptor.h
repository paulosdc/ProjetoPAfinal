#ifndef SCULPTOR_H
#define SCULPTOR_H

#include "vector"
#include <iostream>

using namespace std;
enum{XY,YZ,XZ};

struct Voxel {
  float r,g,b;
  float a;
  bool isOn; //Ocultar.
};


class Sculptor {
protected:

  Voxel ***v;

  int nx;

  int ny;

  int nz;

  float r;

  float g;

  float b;

  float a;
public:

  Sculptor(int _nx, int _ny, int _nz);

  ~Sculptor();

  void setColor(float r, float g, float b, float alpha);

  void putVoxel(int x, int y, int z);

  void cutVoxel(int x, int y, int z);

  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);

  void putSphere(int xcenter, int ycenter, int zcenter, int radius);

  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

  void writeOFF(char* filename);

  vector<vector<Voxel>> readMx(int dim=0, int pl = XY);
};
#endif // SCULPTOR_H
