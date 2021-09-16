#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include "sculptor.h"
#include "vector"
#include <iostream>

using namespace std;

class Plotter : public QWidget{
    Q_OBJECT
private:


public:
    explicit Plotter(QWidget *parent = nullptr);

        void paintEvent(QPaintEvent *event);

        void mousePressEvent(QMouseEvent *event);

        void mouseReleaseEvent(QMouseEvent *event);

        void shape(int sh);

        Sculptor *s;

        int sh = 1;
        int dim, pl;
        int sx, sy, sz;
        int r, g, b, a;
        int rad, rx, ry,rz;
        int x,y,z;
        int h, w;
    private:
        vector<vector<Voxel>> p;
        QColor lineColor;
        int cor;
        QAction *actionMudaCor;
        int cube;
        int square;
        int px, py, pz;
        bool press;
        int mx, my;
    signals:
        void moveX(int);

        void moveY(int);

        void clickX(int);

        void clickY(int);

        void planeChosen(int);
    public slots:

        void changeDimX(int dimx);

        void changeDimY(int dimy);

        void changeDimZ(int dimz);

        void changeRaio(int raio);

        void changeRx(int radx);

        void changeRy(int rady);

        void changeRz(int radz);

        void changeRed(int red);

        void changeGreen(int green);

        void changeBlue(int blue);

        void changeAlfa(int alpha);

        void changePlano(int pln);

        void criaOff();

        void mouseMoveEvent(QMouseEvent *event);

public slots:

signals:

};

#endif // PLOTTER_H

