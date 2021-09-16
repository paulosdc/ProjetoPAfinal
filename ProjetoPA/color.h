#ifndef COLOR_H
#define COLOR_H

#include <QWidget>

class Color : public QWidget{
    Q_OBJECT

private:
    int r,g,b;
public:
    explicit Color(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *event);
signals:

public slots:
    //vermelho
    void set_r(int _r);
    //verde
    void set_g(int _g);
    //azul
    void set_b(int _b);
};

#endif // COLOR_H
